#include <bits/stdc++.h>

using namespace std;
int strStr(string haystack, string needle) {
        if(needle.length()==0) return 0;
        for(int i=0,j=0;i<haystack.length();i++){
            if(haystack[i]==needle[j]){
                if(j+1==needle.length()) return i-j;
                j++;
            }
            else if(j>0) {

                i=i-j;
                j=0;
            }
        }
        return -1;
    }
int main()
{
    string haystack,needle;
    cin>>haystack>>needle;
   cout<<strStr(haystack,needle);
    return 0;
}
