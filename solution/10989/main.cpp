#include<iostream>

using namespace std;

int cnt[10001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        int x; cin >> x;
        ++ cnt[x];
    }
    for(int i = 1; i <= 10000; ++i) {
        for(int j = 0; j < cnt[i]; ++j) {
            cout << i << '\n';
        }
    }

    return 0;
}