#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while(t--) {
            int N, count = 0;
            cin >> N;
            int S[N], J[N];
            for(int i = 0; i < N; i++) {
                cin >>S[i] >>J[i];
                if(J[i] - S[i] > 5)
                count++;
            }
            cout << count << endl;
        }
	return 0;
}
