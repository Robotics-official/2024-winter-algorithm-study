#include<iostream>

using namespace std;

const int MAX = 1000000;

int cnt[2000001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        int x; cin >> x;
        ++ cnt[x + MAX];
    }

    for(int i = MAX * 2; i >= 0; --i) {
        if(cnt[i]) {
            cout << i - MAX << '\n';
        }
    }

    return 0;
}