#include <bits/stdc++.h>
using namespace std;
    unordered_map<int,string> mp;
    void dfs(vector<string>& v,string s,int index,string digits){
            if(s.length()==digits.length()){
                v.push_back(s); return;
            }
            for(char ch: mp[digits[index]-'0'] )
                dfs(v,s+ch,index+1,digits);
        }
    vector<string> letterCombinations(string digits) {
        vector<string> v;
        if(digits.length()==0) return v;

        mp[2]="abc";
        mp[3]="def";
        mp[4]="ghi";
        mp[5]="jkl";
        mp[6]="mno";
        mp[7]="pqrs";
        mp[8]="tuv";
        mp[9]="wxyz";

        dfs(v,"",0,digits);
        return v;
    }
int main()
{

    string s;
    cin>>s;
    vector<string> v;
    v=letterCombinations(s);
    for(int i= 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}
