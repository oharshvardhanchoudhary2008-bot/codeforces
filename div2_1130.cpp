#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int k;
	    cin>>k;
	    k=n-k;
	    int ans=-1;
	    int b=n;
	    vector<int>h(n);
	   for(int i=0;i<n;i++){
	       int a;
	       cin>>a;
	       if(i<=k){
	           ans=max(ans,a);
	       }else b=min(b,a);
	       h[a]=i+1;
	   }
	   if(b==k+1)cout<<-1<<endl;
	   else cout<<h[ans]<<" "<<h[b]<<endl;
	}
	return 0;
}
