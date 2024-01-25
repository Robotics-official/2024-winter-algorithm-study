#include<iostream>

using namespace std;

long long fibonacci[91];

int main() {

    int N; cin >> N;

    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for(int i = 2; i <= 90; ++i) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    cout << fibonacci[N] << '\n';

    return 0;
}