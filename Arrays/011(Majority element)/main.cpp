#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t,n;
	cin>>t;
	while(t--){
	    bool status=false;
	    cin>>n;
	    vector<int> v(n);
	    unordered_map<int,int> mp;
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        mp[v[i]]++;
	    }
	    for(auto x: mp){
	        if(x.second>n/2) {
	            status=true;
	            cout<<x.first<<endl;
	        }
	    }
	    if(!status) cout<<"-1\n";
	}
	return 0;
}
