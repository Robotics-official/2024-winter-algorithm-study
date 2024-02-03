#include<iostream>
#include<queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N, K; cin >> N >> K;
    queue<int> Q;
    // 1부터 N까지의 모든 정수를 큐에 넣는다.
    for(int i = 1; i <= N; ++i) Q.push(i);

    cout << "<";
    for(int i = 1; i <= N; ++i) {
        for(int j = 0; j < K - 1; ++j) { // K - 1번 반복
            // 큐에 맨 앞에 있는 원소를 맨 뒤에 넣는다.
            Q.push(Q.front());
            // 큐에 맨 앞에 있는 원소를 삭제한다.
            Q.pop();
        }
        // 큐에 맨 앞에 있는 원소 출력
        cout << Q.front();
        // 마지막 원소를 제외한 나머지 원소를 출력한 후 ", "를 출력
        if(i != N) cout << ", ";
        // 큐 맨 앞에 있는 원소 삭제
        Q.pop();
    }
    cout << ">";

    return 0;
}