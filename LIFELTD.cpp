#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string r;
        string s;
        string t;
        int flag = 0;
            cin >> r >> s >> t;
            for(int j = 0; j < 3; j++) {
            if(r[j] == 'l' && s[j] == 'l' && s[j+1] == 'l')
            flag++;
            else if(s[j] == 'l' && t[j] == 'l' && t[j+1] == 'l')
            flag++;
        }
        
        if(flag)
        cout << "yes\n";
        else
        cout << "no\n";
    }
	// your code goes here
	return 0;
}

