#include <iostream>
using namespace std;

int main() {
    int n = 29;
    bool isPrime = true;

    if (n <= 1) isPrime = false;
    else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    cout << n << (isPrime ? " is Prime" : " is Not Prime") << endl;
    return 0;
}
