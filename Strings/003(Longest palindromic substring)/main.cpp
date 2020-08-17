#include <bits/stdc++.h>
using namespace std;

 bool ispalindrome(string a){
        int n=a.length();
        string rev="";
        for(int i=n-1;i>=0;i--){
            rev+=a[i];
        }
        if(a==rev) return true;
        else return false;
    }
    //O(n^3) approach using brute force method
   /* string longestPalindrome(string s) {
        int length=0;
        string str="";
        for(int i=0;i<s.length();i++){
            for(int j=0;j<s.length()-i;j++){
                int len=0;
                if(ispalindrome(s.substr(i,j+1))){
                    len=j+1;
                    if(len>length) {
                        length=len;
                        str=s.substr(i,j+1);
                    }
                }
            }
        }
        return str;
    }*/
    //O(n^2) approach using Dynamic Programming
    string longestPalindrome(string s){
        int n=s.length();
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=0;
            }
        }
        int start=0;
        for(int i=0;i<n;i++){
            arr[i][i]=1;
        }
        int length=1;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                arr[i][i+1]=1;
                if(length==1){
                    length=2;
                    start=i;
                }
            }
        }

        for(int k=2;k<n;k++){
            for(int i=0;i<n-k;i++){
                int j=i+k;
                if(s[i]==s[j] && arr[i+1][j-1]==1){
                    arr[i][j]=1;
                    if((j-i+1)>length){
                        length = j-i+1;
                        start=i;
                    }
                }
            }
        }
        string x="";
        cout<<"start="<<start<<"length="<<length;
        for(int i=start;i<start+length;i++){
            x+=s[i];
        }
        return x;
    }
int main()
{
    string s;
    cin>>s;
    cout<<longestPalindrome(s);
    return 0;
}
