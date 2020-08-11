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
        }
        bool status=true;
        bool check=false;
        for(int i=1;i<n;i++){
            if(v[i]>v[i-1] && status==true) {
                    cout<<"("<<i-1<<" ";
                    status=false;
                    check=true;
            }
            else if(!status && v[i]<v[i-1]){
                cout<<i-1<<") ";
                status = true;
            }
             if(!status && i==n-1){
                cout<<i<<") ";
            }
        }
        if(!check) cout<<"No Profit";
        cout<<endl;
    }
    return 0;
}
