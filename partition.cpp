#include <iostream>

using namespace std;

int N;

void deQuy(int n)
{
    if (n >= 1) cout << n << " ";

    if (N-n == 0) {
        cout << endl;
        deQuy(n-1);
    } else if (N-n == 1) {
        cout << N-n << endl;
        deQuy(n-1);
    } else if (N-n > 1 && N-n <= n) {
        cout << N-n << " " << endl;

    }


}

int main()
{
    cin >> N;
    int n = N;
    deQuy(N);
    return 0;
}
