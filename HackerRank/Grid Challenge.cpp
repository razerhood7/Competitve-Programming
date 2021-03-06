#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T > 0) {
        int N;
        cin>>N;
        string *matrix = new string[N];
        for(int i = 0; i < N; i++) {
            cin>>matrix[i];
            sort(matrix[i].begin(), matrix[i].end());
        }
        bool arrangeable = true;
        for(int i = 0; i < N; i++) {
            for(int j = 1; j < N; j++) {
                if(matrix[j][i] < matrix[j-1][i]) {
                    arrangeable = false;
                }
            }
            if(!arrangeable) {
                break;
            }
        }
        if(arrangeable) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
        T--;
    }
    return 0;
}
