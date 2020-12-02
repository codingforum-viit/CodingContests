#include <bits/stdc++.h>
using namespace std;

int main(){
	int tt;cin>>tt;
	while(tt--){
		int n;cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++)cin>>a[i];

		sort(a.begin(),a.end());

	    for(int i=n-1;i>=0;i--){
	    	cout<<a[i]<<' ';
	    }
	    cout<<'\n';
	}
}
