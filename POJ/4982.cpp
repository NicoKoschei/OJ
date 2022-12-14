#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int visited[30][50];
int ways(int i, int j, int n) {
    if (n == 0)
        return 1;
    visited[i][j] = 1;
    int num = 0;
    if (!visited[i][j - 1])
        num += ways(i, j - 1, n - 1);
    if (!visited[i][j + 1])
        num += ways(i, j + 1, n - 1);
    if (!visited[i + 1][j])
        num += ways(i + 1, j, n - 1);
    visited[i][j] = 0;
    return num;
}

int main() {
    int n;
    cin >> n;
    memset(visited, 0, sizeof visited);
    cout << ways(0, 5, n) << endl;
    return 0;
}
