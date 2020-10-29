#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            v[i]=v[i]%3;
        }
        int zero_count=0,one_count=0,two_count=0;
        for(int i=0;i<n;i++){
            if(v[i]==0) zero_count++;
            else if(v[i]==1) one_count++;
            else two_count++;
        }
        if(zero_count==0 && one_count!=0 && two_count!=0) cout<<"No";
        else if(zero_count==0 && one_count!=0 && two_count==0) cout<<"Yes";
        else if(zero_count==0 && one_count==0 && two_count!=0) cout<<"Yes";
        else if(zero_count<=(one_count+two_count)) cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }
    return 0;
}
