#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x;
    cin>>t;
    while(t--) {
        int count = 0;
        cin>>x;
        if(x%10 == 0)
            cout<<"0\n";
            else  {
                while(x%10 != 0 && x%5 == 0){
                x = x * 2;
                count++;
                }
                if(count != 0)
                cout<<count<<endl;
                else 
                cout<<"-1\n";
            }
        } 
    
	// your code goes here
	return 0;
}

