#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

bool is_prime(int n) {
    if (n == 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool can_remove_digits(int n, int k, int num_removed) {
    if (num_removed == k) return false; // can't remove all digits
    if (!is_prime(n)) return true; // already not prime
    if (n < 10) return false; // can't remove any more digits
    for (int i = 0; i < k; i++) {
        int digit = (n / (int) pow(10, i)) % 10;
        int new_num = n - digit * pow(10, i);
        if (can_remove_digits(new_num, k, num_removed + 1)) return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int n;
        cin >> n;
        int num_removed = 0;
        while (can_remove_digits(n, k, num_removed)) {
            for (int i = 0; i < k; i++) {
                int digit = (n / (int) pow(10, i)) % 10;
                int new_num = n - digit * pow(10, i);
                if (can_remove_digits(new_num, k, num_removed + 1)) {
                    n = new_num;
                    num_removed++;
                    break;
                }
            }
        }
        cout << k - num_removed << endl;
        cout << n << endl;
    }
    return 0;
}
