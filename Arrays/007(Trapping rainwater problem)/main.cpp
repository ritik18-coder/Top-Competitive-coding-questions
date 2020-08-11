#include <bits/stdc++.h>
using namespace std;
// O(n^2 complexity)
/*int calculate(vector<int> a){
 int sum=0;
        int n=a.size();
    for(int i=1;i<n-1;i++){
        int left = *max_element(a.begin(),a.begin()+i);
        int right = *max_element(a.begin()+i+1,a.end());
        if(a[i]<left && a[i]<right)
           sum += min(left,right) - a[i];
    }
    return sum;
}*/
// O(n) complexity
int calculate(vector<int> a){
    int sum=0;
    int n=a.size();
    vector<int> left(n);
    vector<int> right(n);
    int maxleft=0;
    int maxright=0;
    for(int i=0;i<n;i++){
        maxleft = max(maxleft,a[i]);
        left[i]=maxleft;
    }
    for(int i=n-1;i>=0;i--){
        maxright = max(maxright,a[i]);
        right[i]=maxright;
    }

    for(int i=1;i<n-1;i++){
        if(a[i]<left[i-1] && a[i]<right[i+1])
           sum += min(left[i-1],right[i+1]) - a[i];
    }
    return sum;
}

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<calculate(a)<<endl;
    }
    return 0;
}
