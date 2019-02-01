#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        double N, v1, v2, t2, t1;
        cin >> N >> v1 >> v2;
        t1 = (sqrt(2) * N / v1);
        t2 = 2 * N / v2;
        if(t1 < t2)
        cout << "Stairs\n";
        else
        cout << "Elevator\n";
    }
	// your code goes here
	return 0;
}

