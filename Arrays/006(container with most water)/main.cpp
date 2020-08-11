#include <iostream>
using namespace std;
//O(n^2) complexity using Brute Force approach
/*int calculate(int a[],int n){
    int maxvalue=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           maxvalue = max(maxvalue,min(a[i],a[j])*(j-i));
        }
    }
    return maxvalue;
}*/
// O(n) complexity using 2 pointer approach
int calculate(int a[],int n){
    int maxvalue=0;
    for(int i=0,j=n-1;i<j;){
             maxvalue = max(maxvalue,min(a[i],a[j])*(j-i));
        if(a[i]<a[j]) i++;
        else j--;
    }
    return maxvalue;
}


int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<calculate(a,n)<<endl;
    }
    return 0;
}
