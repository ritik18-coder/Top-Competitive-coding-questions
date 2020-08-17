#include <bits/stdc++.h>
using namespace std;
struct greater{
    int n
};
int main()
{
 int n,k;
 cin>>n>>k;
 vector<int> v(n);
 for(int i=0;i<n;i++){
   cin>>v[i];
 }
  sort(v.begin(),v.end(),greater<int>());
  int sum=0;
  for(int i=0;i<k;i++){
    sum+=v[i];
  }
  cout<<sum;
  return 0;
}
