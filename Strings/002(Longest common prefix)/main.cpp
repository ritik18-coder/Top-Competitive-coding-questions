#include <bits/stdc++.h>

using namespace std;
 string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0||strs[0].size()==0) return "";
        string prefix="";
          string s=strs[0];
        int length =s.length();

        for(int i=1;i<strs.size();i++){
            int len=0;
            for(int j=0;j<strs[i].size();j++){
                if(s[j]==strs[i][j]) len++;
                else break;
            }
            length = min(length,len);
        }
        for(int i=0;i<length;i++){
            prefix+=s[i];
        }
        return prefix;
    }
int main()
{
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout << longestCommonPrefix(v) << endl;
    return 0;
}
