#include <bits/stdc++.h>
using namespace std;
//if total marks are same then look for marks of maths if marks of
    //maths are also same then arrange on basis of alphabetical order
struct Student{
    int rank;
    int total;
    int maths;
    string name;
};
bool compare(Student a,Student b){
    if(a.total!=b.total){
        return a.total>b.total;
    }
    if(a.maths!=b.maths){
        return (a.maths>b.maths);
    }
    return (a.name<b.name);
}
int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].total>>a[i].maths;
    }
    sort(a,a+n,compare);
    for(int i=0;i<n;i++){
        a[i].rank=i+1;
    }
    for(int i=0;i<n;i++){
        cout<<a[i].rank<<" "<<a[i].name<<" "<<a[i].total<<" "<<a[i].maths<<endl;
    }
    return 0;
}
