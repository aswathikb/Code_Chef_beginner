#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int A[n];
        for(int i = 0; i < n; i++){
            cin >> A[i];
            if(A[i] <= k){
            cout << "1";
            k = k - A[i];
            }
            else 
            cout << "0";
            
        }
        cout << "\n";
    }
	// your code goes here
	return 0;
}

