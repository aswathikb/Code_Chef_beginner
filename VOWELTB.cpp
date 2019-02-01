#include <bits/stdc++.h>
using namespace std;

int main() {
    char C;
    cin >> C;
    int isuppercase;
    isuppercase = (C == 'A' || C == 'E' || C == 'I' || C == 'O' || C == 'U');
    if(isuppercase)
    cout << "Vowel\n";
    else
    cout << "Consonant\n";
	// your code goes here
	return 0;
}

