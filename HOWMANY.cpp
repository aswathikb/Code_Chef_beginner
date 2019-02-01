#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,count = 0;
cin>>n;
while(n>0)
{
n = n/10;
count++;
}
if(count > 3){
cout << "More than 3 digits\n";
return 0;
}
cout << count << endl;
	// your code goes here
	return 0;
}


