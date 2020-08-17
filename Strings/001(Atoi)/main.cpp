#include <bits/stdc++.h>
using namespace std;
int atoi(const string A) {
    int n=A.length();
    string s="";
    bool negative=false,positive=false;
    for(int i=0;i<n;i++){
        if(A[i]!=' '){
            if(A[i]=='-') negative=true;
            else if(A[i]=='+') positive=true;
            else if(A[i]>='0'&&A[i]<='9') s+=A[i];
            else break;
        }
        else if(s.length()>0 ||negative||positive) break;
    }
    if(s.length()>10 && negative) return INT_MIN;
    else if(s.length()>10) return INT_MAX;
    long long int integer=0;
    for(int i=0;i<s.length();i++){
        int x=s[i]-'0';
        integer+=x*pow(10,s.length()-i-1);
    }
    if(negative){
        integer -= (2*integer);
    }
    if(integer>INT_MAX) return INT_MAX;
    else if(integer<INT_MIN) return INT_MIN;
    return integer;
}

int main()
{
    string s;
    getline(cin,s);
    cout<<atoi(s);
    return 0;
}
