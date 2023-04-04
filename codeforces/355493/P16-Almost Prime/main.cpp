// https://codeforces.com/group/yg7WhsFsAp/contest/355493/problem/P16
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

const int N = 3001;
bool prime[N];

void sieve() {
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < N; i++) {
        if (prime[i]) {
            for (int j = i * i; j < N; j += i) {
                prime[j] = false;
            }
        }
    }
}

int main() {
    sieve();
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int factors = 0;
        for (int j = 2; j <= i; j++) {
            if (prime[j] && i % j == 0) {
                factors++;
            }
        }
        if (factors == 2) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}