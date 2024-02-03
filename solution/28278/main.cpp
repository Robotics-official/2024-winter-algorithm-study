#include<iostream>
using namespace std;
int Stack[1000001], top = -1;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N; cin >> N;
	for(int i = 0; i < N; ++i) {
		int cmd; cin >> cmd;
		if(cmd == 1) { 
			int X; cin >> X;
			++ top;
			Stack[top] = X;
		}
		else if(cmd == 2) {
			if(top < 0) cout << -1 << '\n';
			else {
				cout << Stack[top] << '\n';
				top --;
			}
		}
		else if(cmd == 3) {
			cout << top + 1 << '\n';
		}
		else if(cmd == 4) {
			if(top == -1) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if(cmd == 5) {
			if(top == -1) cout << -1 << '\n';
			else cout << Stack[top] << '\n';
		}
	}
	return 0;
}