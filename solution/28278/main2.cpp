#include<iostream>
#include<stack>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N; cin >> N;
	stack<int> st;
	for(int i = 0; i < N; ++i) {
		int cmd; cin >> cmd;
		if(cmd == 1) {
			int X; cin >> X;
			st.push(X);
		} 
		else if(cmd == 2) {
			if(st.empty()) cout << -1 << '\n';
			else {
				cout << st.top() << '\n';
				st.pop();
			}
		}
		else if(cmd == 3) {
			cout << st.size() << '\n';
		}
		else if(cmd == 4) {
			cout << st.empty() << '\n';
		}
		else if(cmd == 5) {
			if(st.empty()) cout << -1 << '\n';
			else cout << st.top() << '\n';
		}
	}
	return 0;
}