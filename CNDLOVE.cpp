#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int N, sum = 0;
        cin >> N;
        int a[N];
        for(int i = 0; i < N; i++) {
            cin >> a[i];
            sum += a[i];
        }
        if(sum % 2 == 0)
        cout << "NO\n";
        else
        cout << "YES\n";
    }
	// your code goes here
	return 0;
}

