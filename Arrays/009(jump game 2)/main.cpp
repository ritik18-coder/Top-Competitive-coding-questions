#include <bits/stdc++.h>
using namespace std;
int findmax(vector<int> v,int x,int index){
    int myindex=0;
    int maxvalue=0;
   for(int i=index+1;i<index+x+1;i++){
        if(v[i]+i>maxvalue){
          maxvalue = v[i]+i;
            myindex=i;
        }
   }
   return myindex-index;
}
int jump(vector<int> v){
    int n=v.size();
    if(n==1) return 0;
    int steps=0;
    for(int i=0;i<n;){
        if(v[i]+i>=n-1) {
            steps++;
            return steps;
        }
         else {
                i+=findmax(v,v[i],i);
                steps++;
         }
    }
    return steps;
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
        cout<<jump(v)<<endl;
    }
    return 0;
}
