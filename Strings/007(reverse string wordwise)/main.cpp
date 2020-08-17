#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    vector<int> start;
    vector<int> end;
    string str="";
    for(int i=0;i<s.length();i++){
        if(s[i]!=' ' && i==0) start.push_back(i);
        else if(s[i]!=' ' && s[i-1]==' '){
            start.push_back(i);
        }
        if(s[i]!=' ' && i==s.length()-1) end.push_back(i);
        else if(s[i]!=' ' && s[i+1]==' ') end.push_back(i);
    }
    int size=start.size();
    for(int i =size-1;i>=0;i-- ){
        for(int j=start[i];j<=end[i];j++){
            str+=s[j];
        }
        if(i!=0) str +=' '; //To prevent excess space at last
    }
    return str;
}
int main()
{
    string s;
    getline(cin,s);
    cout<<reverseWords(s);
    return 0;
}
