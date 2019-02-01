#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin>>t;
    while(t--) {
        int one, three;
        float two;
        cin>> one>> two>> three;
        if(one > 50 && two < 0.7 && three > 5600)
        cout<<"10\n";
        else if(one >50 && two < 0.7)
        cout<<"9\n";
        else if(two < 0.7 && three > 5600)
        cout<<"8\n";
        else if(one > 50 && three > 5600)
        cout<<"7\n";
        else if(one > 50 || two < 0.7 || three > 5600)
        cout<<"6\n";
        else 
        cout<<"5\n";
    }
	// your code goes here
	return 0;
}

