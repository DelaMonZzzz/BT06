#include <iostream>

using namespace std;

void _swap(int a, int b)
{
    int c = a;
    a = b;
    b = c;
}

void hoanVi(int n, int a[])
{
    int counted, need;
    while (need > counted)
    {
        counted++;
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;

        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n-i; j++)
            {
                _swap(a[i], a[i+j]);
                hoanVi(n, a);
            }
        }
    }

}

int main()
{
    int n;
    cin >> n;
    int a[n];
    int need = 1, counted = 0;
    for (int i = 1; i <= n; i++)
    {
        need *= i;
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    hoanVi(n, a);

    return 0;
}
