#include <bits/stdc++.h>
using namespace std;
int kadane(vector<int> v){
    int max_so_far = INT_MIN;
    int max_ending_here =0;;
    for(int i=0;i<v.size();i++){

        max_ending_here += v[i];

        if(max_so_far < max_ending_here){
            max_so_far = max_ending_here;
        }
        if(max_ending_here < 0){
            max_ending_here = 0;
        }

    }
    return max_so_far;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(null);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        cout<<kadane(v)<<endl;
    }
    return 0;
}
