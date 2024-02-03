#include<iostream>
#include<stack>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N; cin >> N;
	stack<int> st;
	for(int i = 0; i < N; ++i) {
		int x; cin >> x;
		if(x == 0) st.pop();
		else st.push(x);
	}
	int ans = 0;
	while(!st.empty()) {
		ans += st.top();
		st.pop();
	}
	cout << ans;
	
	return 0;
}