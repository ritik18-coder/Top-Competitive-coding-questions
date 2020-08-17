#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    int vowels=0;
    unordered_map<int,int> mp;
    mp[0]=2;
    mp[1]=2;
    mp[2]=1;
    mp[3]=2;
    mp[4]=2;
    mp[5]=2;
    mp[6]=1;
    mp[7]=2;
    mp[8]=2;
    mp[9]=2;
    mp[10]=1;
    mp[11]=3;
    mp[12]=2;
    mp[13]=3;
    mp[14]=4;
    mp[15]=3;
    mp[16]=3;
    mp[17]=4;
    mp[18]=4;
    mp[19]=4;
    mp[20]=1;
    mp[30]=1;
    mp[40]=1;
    mp[50]=1;
    mp[60]=1;
    mp[70]=2;
    mp[80]=2;
    mp[90]=2;
    mp[100]=2;
    for(int i=21;i<=29;i++){
        mp[i]= mp[20]+mp[i-20];
    }
    for(int i=31;i<=39;i++){
        mp[i]= mp[30]+mp[i-30];
    }
    for(int i=41;i<=49;i++){
        mp[i]= mp[40]+mp[i-40];
    }
    for(int i=51;i<=59;i++){
        mp[i]= mp[50]+mp[i-50];
    }
    for(int i=61;i<=69;i++){
        mp[i]= mp[60]+mp[i-60];
    }
    for(int i=71;i<=79;i++){
        mp[i]= mp[70]+mp[i-70];
    }
    for(int i=81;i<=89;i++){
        mp[i]= mp[80]+mp[i-80];
    }
    for(int i=91;i<=99;i++){
        mp[i]= mp[90]+mp[i-90];
    }
    /**/
    for(int i=0;i<n;i++){
        cin>>v[i];
        vowels += mp[v[i]];
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==vowels) count++;
        }
    }
   // cout<<vowels<<" "<<count;
    unordered_map<int,string> mpstr;
    mpstr[0]="zero";
    mpstr[1]="one";
    mpstr[2]="two";
    mpstr[3]="three";
    mpstr[4]="four";
    mpstr[5]="five";
    mpstr[6]="six";
    mpstr[7]="seven";
    mpstr[8]="eight";
    mpstr[9]="nine";
    mpstr[10]="ten";
    mpstr[11]="eleven";
    mpstr[12]="twelve";
    mpstr[13]="thirteen";
    mpstr[14]="fourteen";
    mpstr[15]="fifteen";
    mpstr[16]="sixteen";
    mpstr[17]="seventeen";
    mpstr[18]="eighteen";
    mpstr[19]="nineteen";
    mpstr[20]="twenty";
    mpstr[30]="thirty";
    mpstr[40]="forty";
    mpstr[50]="fifty";
    mpstr[60]="sixty";
    mpstr[70]="seventy";
    mpstr[80]="eighty";
    mpstr[90]="ninety";
    mpstr[100]="hundred";
     for(int i=21;i<=29;i++){
        mpstr[i]= mpstr[20]+" "+mpstr[i-20];
    }

    for(int i=31;i<=39;i++){
        mpstr[i]= mpstr[30]+" "+mpstr[i-30];
    }
    for(int i=41;i<=49;i++){
        mpstr[i]= mpstr[40]+" "+mpstr[i-40];
    }
    for(int i=51;i<=59;i++){
        mpstr[i]= mpstr[50]+" "+mpstr[i-50];
    }
    for(int i=61;i<=69;i++){
        mpstr[i]= mpstr[60]+" "+mpstr[i-60];
    }
    for(int i=71;i<=79;i++){
        mpstr[i]= mpstr[70]+" "+mpstr[i-70];
    }
    for(int i=81;i<=89;i++){
        mpstr[i]= mpstr[80]+" "+mpstr[i-80];
    }
    for(int i=91;i<=99;i++){
        mpstr[i]= mpstr[90]+" "+mpstr[i-90];
    }
     if(count>100) cout<<"greater 100";
        else cout<<mpstr[count];
    return 0;
}
