#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int a;
	    string s ;
	    cin>>a;
	    cin>>s;
	    int b=0;
	    int c=-1;
	    for(int i =0 ; i < s.size(); i ++ ){
	        if(s[i]=='1')
	        {
	            if(a==s.size())a=c=i;
	            else c=i;
	            b++;
	        }
	    }
	    if(b==1)cout<<0;
	    else if(b==2)cout<<1;
	    else cout<<c-a;
	    cout<<endl;
	}
	return 0;
}
