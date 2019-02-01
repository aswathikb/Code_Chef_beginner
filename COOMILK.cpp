#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, flag = 0;
        cin >> n;
        string a[n];
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for(int i = 1; i <= n; i++) {
            if(a[i] == "cookie" && a[i+1] != "milk")
            flag = 1;
        }
        if(!flag)
        cout << "YES\n";
        else
        cout << "NO\n";
    } 
	// your code goes here
	return 0;
}

