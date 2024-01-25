#include<iostream>

using namespace std;

int cow[11];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;

    for(int i = 1; i <= 10; ++i) cow[i] = -1;

    int ans = 0;
    for(int i = 0; i < N; ++i) {
        int a, b; cin >> a >> b;
        if(cow[a] != -1 && cow[a] != b) ++ ans;
        cow[a] = b;
    }
    cout << ans;

    return 0;
}