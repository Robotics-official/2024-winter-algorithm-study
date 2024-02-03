#include<iostream>
#include<queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    queue<int> Q;
    for(int i = 0; i < N; ++i) {
        string cmd; cin >> cmd;
        if(cmd == "push") {
            int X; cin >> X;
            Q.push(X);
        }
        else if(cmd == "pop") {
            if(Q.empty()) cout << -1 << '\n';
            else {
                cout << Q.front() << '\n';
                Q.pop();
            }
        }
        else if(cmd == "size") {
            cout << Q.size() << '\n';
        }
        else if(cmd == "empty") {
            cout << Q.empty() << '\n';
        }
        else if(cmd == "front") {
            if(Q.empty()) cout << -1 << '\n';
            else cout << Q.front() << '\n';
        }
        else if(cmd == "back") {
            if(Q.empty()) cout << -1 << '\n';
            else cout << Q.back() << '\n';
        }
    }

    return 0;
}
