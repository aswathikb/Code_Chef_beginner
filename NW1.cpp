#include <bits/stdc++.h>
using namespace std;
void occurrenceDays(int, string);
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        string firstday;
        cin >> n >> firstday;
        occurrenceDays(n, firstday); 
    }
	// your code goes here
	return 0;
}
void occurrenceDays(int n, string firstday) 
{ 
    string days[] = { "mon", "tues", "wed",  
           "thurs",  "fri", "sat", "sun" }; 

    int count[7]; 
    for (int i = 0; i < 7; i++) 
        count[i] = 4; 
  
    int pos; 
    for (int i = 0; i < 7; i++) { 
        if (firstday == days[i]) { 
            pos = i; 
            break; 
        } 
    } 
  
    int inc = n - 28; 
  
    for (int i = pos; i < pos + inc; i++) { 
        if (i > 6) 
            count[i % 7] = 5; 
        else
            count[i] = 5; 
    } 
 
    for (int i = 0; i < 7; i++) { 
        cout << count[i] << " "; 
    }
    cout << endl;
} 
 
