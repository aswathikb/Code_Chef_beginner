#include <bits/stdc++.h>
using namespace std;

void makePermutation(int a[], int n, int cnt)
{
	unordered_map<int, int> count;
	for (int i = 0; i < n; i++)
		count[a[i]]++;

	int next_missing = 1;
	for (int i = 0; i < n; i++) {
		if (count[a[i]] != 1 || a[i] > n || a[i] < 1) {
			count[a[i]]--;
			cnt++;

			while (count.find(next_missing) != count.end())
				next_missing++;
			 
			a[i] = next_missing;
			count[next_missing] = 1;
			
		}
	}
	cout<<cnt<<endl;
}

int main()
{  int t,cnt = 0;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int A[k];
        for(int i = 0; i < k; i++)
        cin>>A[i];
    int n = sizeof(A) / sizeof(A[0]);

    makePermutation(A, n, cnt);
    }
	return 0;
}
