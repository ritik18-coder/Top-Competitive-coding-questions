#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int num=n,len=0;
    while(num>0){
        num/=10;
        len++;
    }
    int jump = pow(10,len);
    int count=0;
    for(int i=n;i<=m;i+=jump){
        count++;
    }
    cout<<count;
    return 0;
}
