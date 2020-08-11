#include <bits/stdc++.h>

using namespace std;
// Using O(n) time complexity and O(n) space complexity
/*int firstMissingPositive(vector<int> &A) {
    unordered_map<int,bool> mp;
    for(int i=0;i<A.size();i++){
        if(A[i]>0) mp[A[i]]=true;
    }
    for(int i=1;i<=mp.size();i++){
        if(!mp[i]) return i;
    }
    return mp.size()+1;
}*/
// Using O(n) time complexity and O(1) space complexity
int firstMissingPositive(vector<int> &A) {
    for(int i=0;i<A.size();i++){
        if(A[i]>0 && A[i]<=A.size() && A[A[i]-1]!=A[i]){
            swap(A[i],A[A[i]-1]);
            i--;
        }
    }

    for(int i=0;i<A.size();i++){

        if(A[i]!=i+1) return i+1;
    }
    return A.size()+1;
}
int main()
{
    int t,n;
    /*unordered_map<int,bool> mp;
    cout<<mp[0];
    cout<<mp.size();*/
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        cout<<firstMissingPositive(v)<<endl;
    }
    return 0;
}
