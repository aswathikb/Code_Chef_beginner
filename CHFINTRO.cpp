#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, r;
    cin >> N >> r;
    int a[N];
    for(int i = 0; i < N; i++){
        cin >> a[i];
        if(a[i] >= r)
        cout << "Good boi\n";
        else
        cout << "Bad boi\n";
    }
    
	// your code goes here
	return 0;
}
