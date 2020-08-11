#include <bits/stdc++.h>

using namespace std;
vector<int> printspiral(vector<vector<int>> v){
    vector<int> a;
        if(v.size()==0 || v[0].size()==0) return a;// if we receive an empty vector
    int dir=1;
    int left=0,right=v[0].size()-1,top=0,bottom=v.size()-1;
    while(left<=right && top<=bottom){
    if(dir==1){
            int i=left,j=right;
        while(i<=j){
                a.push_back(v[top][i]);
            //cout<<v[top][i]<<" ";
            i++;
        }
        dir=2;
        top++;
    }
    else if(dir==2){
        int i=top,j=bottom;
        while(i<=j){
                a.push_back(v[i][right]);
            //cout<<v[i][right]<<" ";
            i++;
        }
        dir=3;
        right--;
    }
    else if(dir==3){
        int i=left,j=right;
        while(j>=i){
                 a.push_back(v[bottom][j]);
            //cout<<v[bottom][j]<<" ";
            j--;
        }
        dir=4;
        bottom--;
    }
    else if(dir==4){
        int i=top,j=bottom;
        while(j>=i){
                a.push_back(v[j][left]);
                //cout<<v[j][left]<<" ";
            j--;
        }
        dir=1;
        left++;
    }
    }
    return a;
}
int main()
{
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>m>>n;
        vector<vector<int>> v(m,vector<int> (n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        vector<int> v2;
        v2 = printspiral(v);
        for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<" ";
        }
        cout<<endl;
    }
}
