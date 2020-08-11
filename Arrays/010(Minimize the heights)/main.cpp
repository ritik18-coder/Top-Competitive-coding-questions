#include <bits/stdc++.h>
using namespace std;
int minimize(vector<int> v,int k){
    int n=v.size();
    sort(v.begin(),v.end());
    int small=v[0]+k;
    int big = v[n-1]-k;
    if(small>big)
        swap(small,big);

    for(int i=1;i<n-1;i++){
       int substract = v[i]-k;
       int add = v[i]+k;
       if(substract<small && add>big){
        if(small-substract>add-big)
            big=add;
        else
            small=substract;
       }
    }

    return min(big-small,v[n-1]-v[0]);
}
int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>k>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        cout<<minimize(v,k)<<endl;
    }
    return 0;
}
