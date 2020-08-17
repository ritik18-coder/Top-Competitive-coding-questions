#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s=to_string(n); //This function is used to convert any int or float to string
    cout<<"Number after converting into string: "<< s<<" of length: "<<s.length();
    int a=stoi(s);  //This function is used to convert string into int
    cout<<"\nConverting string back to number: "<<a;
    return 0;
}
