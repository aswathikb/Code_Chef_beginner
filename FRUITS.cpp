#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m, k, M,N ;
        cin>>n>>m>>k;
        if(n>m){
            N = n - m;
            if(N - k > 0)
            cout<<N - k<<endl;
            else 
            cout<<"0\n";
        }
        else {
        M = m - n;
        if(M - k > 0 )
        cout<<M - k<<endl;
        else 
        cout<<"0\n";
        }
    }
	// your code goes here
	return 0;
}

