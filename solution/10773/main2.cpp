#include<iostream>
using namespace std;
int Stack[100001], top = -1;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N; cin >> N;
	for(int i = 0; i < N; ++i) {
		int x; cin >> x;
		if(x == 0) -- top;
		else Stack[++ top] = x;
	}
	int ans = 0;
	for(int i = 0; i <= top; ++i) {
		ans += Stack[i];
	}
	// while(top >= 0) {
	//     ans += Stack[top];
	//     top --;
	// }
	cout << ans;
	
	return 0;
}
