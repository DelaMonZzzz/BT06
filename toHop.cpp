#include <iostream>

using namespace std;

void toHop(int i, int k, int n, char a[], int m)
{
    for (int j = m; j <= 97 + n; j++)
    {
        a[i] = char (j);
        m++;
        if (i == k) {
            for (int y = 0; y <= k; y++)
                cout << a[y];
            cout << endl;
        } else {
            toHop(i+1,k,n,a,m);
        }
    }
}

int main()
{
    int n, k, m = 97;
    cin >> n >> k;
    char a[k];
    toHop(0, k - 1, n-1, a, m);

    return 0;
}
