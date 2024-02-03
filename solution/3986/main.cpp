#include<iostream>
#include<stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;

    int ans = 0;
    for(int i = 0; i < N; ++i) {
        string S; cin >> S;
        int K = S.size();
        stack<char> st;
        for(int j = 0; j < K; ++j) {
            if(st.empty()) {
                st.push(S[j]);
            }
            else {
                if(st.top() == S[j]) {
                    st.pop();
                }
                else {
                    st.push(S[j]);
                }
            }
        }
        if(st.empty()) ans ++;
    }
    cout << ans;

    return 0;
}