#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<string> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
                int c=0;
                unordered_map<char,int> mp;
               // cout<<mp['a'];
            for(int j=0;j<v[i].size();j++){
                mp[v[i][j]]++;
            }
           for(auto i: mp){
                if(i.second % 2!=0) c++;
            }
            if(c<=1) count++;
        }
        cout <<count<< endl;
    }
    return 0;
}
