#include<iostream>
#include<stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for(int i = 0; i < N; ++i) {
		string S; cin >> S;
		stack<char> st;
		bool answer = true;
		for(int j = 0; j < S.size(); ++j) {
			if(S[j] == '(') {
				st.push(S[j]);
			}
			else {
				if(st.empty()) {
					answer = false;
					break;
				}
				else st.pop();
			}
		}

		if(!st.empty()) answer = false;

		if(answer) cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}
