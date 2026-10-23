#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n ;
	    int a=0,b=0;
	    while(n--){
	        int c;
	        cin>>c;
	        if(c&1)b++;
	        else a++;
	    }
	    if((b==3&&a==0)||(a==b&&a==1)) cout<<"Larpity\n";
	    else cout<<"Moggity\n";
	}
	return 0;
}