#include <iostream>
#include <cstring>
using namespace std;

int akm(int m, int n)
{
    if (m == 0)
    {
        return (n + 1);
    }
    else if (n == 0)
    {
        return (akm(m - 1, 1));
    }
    else
        return (akm(m - 1, (akm(m, n - 1))));
}

int main()
{
    int m = 0, n = 0, result = 0;
    cin >> m >> n;
    result = akm(m, n);
    cout << result << endl;
    return 0;
}
