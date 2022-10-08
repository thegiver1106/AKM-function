#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int a[10][10] = {0};

int main()
{
    int m = 0, n = 0, result = 0;
    cin >> m >> n;
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= (n + m + 1); j++)
        {
            if (i == 0)
                a[i][j] = j + 1;
            else if (j == 0)
                a[i][j] = a[i - 1][1];
            else
                a[i][j] = a[i - 1][a[i][j - 1]];
        }
    }

    cout << a[m][n] << endl;

    return 0;
}