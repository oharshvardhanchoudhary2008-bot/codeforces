/////// question 1--Subset Selecting 
// code-->#include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,k;
// 	    cin>>n>>k;
// 	    map<int,int>hash;
// 	    int b=0;
// 	    for(int i=0;i<n;i++){
// 	        int a ;
// 	        cin>>a;
// 	        if(a>=(n/k))b=1;
// 	        hash[a]++;
// 	    }
// 	    int ans =-1;
// 	    int a =0;
// 	    for(int i=0;i<(n/k);i++){
// 	        if(hash[i]+a<k||hash[i]==0){
// 	            ans=i;
// 	            break;
// 	        }else{
// 	            a+=(hash[i]-k);
// 	        }
// 	    }
// 	    if(ans==-1){
// 	        ans=(n/k);
// 	    }
// 	    cout<<ans<<endl;
// 	}
// 	return 0;
// }



/////////question 2--B. Sequence Decreasing
// //code 
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    vector<int>vec(n);
// 	    for(int i=0;i<n;i++){
// 	        cin>>vec[i];
// 	    }
// 	    int mini = *min_element(vec.begin() , vec.end());
// 	    if(n> mini){
// 	        cout << n << endl;
// 	    }
// 	    else {
// 	        cout << 0 << endl;
// 	    }
// 	   // int a =vec[0];
// 	   // for(int it:vec)a=min(a,it);
// 	   // if(n>a)cout<<a<<endl;
// 	   // else cout<<0<<endl;
// 	}
// 	return 0;
// }

