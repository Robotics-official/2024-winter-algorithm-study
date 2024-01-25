#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;

    vector<int> arr;
    for(int i = 0; i < N; ++i) {
        int x; cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    for(int i = N - 1; i >= 0; ++i) {
        cout << arr[i] << '\n';
    }

    return 0;
}