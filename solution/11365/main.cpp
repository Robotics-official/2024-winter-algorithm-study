#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    
    string S;
    while(true) {
        getline(cin, S);
        if(S == "END") break;
        reverse(S.begin(), S.end());
        cout << S << '\n';
    }

    return 0;
}