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
        int zero=0,one=0,two=0;
        for(int i=0;i<n;i++){
            if(v[i]==0) zero++;
            else if(v[i]==1) one++;
            else two++;
        }
        if(zero==0 && one!=0 && two!=0) cout<<"No";
        else if(zero==0 && one!=0 && two==0) cout<<"Yes";
        else if(zero==0 && one==0 && two!=0) cout<<"Yes";
        else if(zero<=(one+two)) cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }
    return 0;
}
