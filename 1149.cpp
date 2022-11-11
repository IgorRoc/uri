#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A, N;

    cin >> A;

    cin >> N;
    while (N <= 0) {
        cin >> N;
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A + i;
    }

    cout << sum << endl;
}