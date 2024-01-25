#include<iostream>

using namespace std;

int main() {

    int N; cin >> N;
    int cnt = 0;

    int cur_value = N;
    while(1) {
        ++ cnt;
        int units = cur_value % 10, tens = cur_value / 10;
        int nxt_value = units * 10 + (units + tens) % 10;
        if(N == nxt_value) break;
        cur_value = nxt_value;
    }
    cout << cnt;

    return 0;
}