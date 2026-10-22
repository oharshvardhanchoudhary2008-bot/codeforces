#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxi=0,mini;
        cin>>maxi;
        mini=maxi;
        for(int i=1;i<n;i++){
            int a ;
            cin>>a;
            mini=min(mini,a);
            maxi=max(maxi,a);
        }
        if(mini==maxi){
            cout<<maxi<<endl;
            continue;
        }
        //cout<<maxi;
        mini=(maxi^mini);
        int i=0;
        for(;i<32;i++){
            if((1<<i)>=mini)break;
        }
        cout<<(maxi|((1<<i)-1))<<endl;
    }
    return 0;
}
