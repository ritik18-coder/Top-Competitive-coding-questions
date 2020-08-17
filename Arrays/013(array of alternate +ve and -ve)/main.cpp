#include<bits/stdc++.h>
using namespace std;

void alternate(vector<int>& v){
    int i=0;
    for(int j=0;j<v.size();j++){
        if(v[j]<0){
            swap(v[i],v[j]);
            i++;
        }
    }
    int neg=0,pos=i;
    while(pos<v.size()){
        swap(v[neg],v[pos]);
        pos++;
        neg+=2;
    }
}
int main()
 {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	   alternate(v);
	   for(int i=0;i<n;i++){
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
