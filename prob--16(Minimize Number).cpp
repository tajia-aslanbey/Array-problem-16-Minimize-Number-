#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[200];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int op = 0;
    while (1) {
        int ok = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 != 0) {
                ok = 0;
                break;
            }
        }
        if (!ok) break;

        op++;
        for (int i = 0; i < n; i++) {
            a[i] /= 2;
        }
    }

    cout << op << endl;
    return 0;
}
