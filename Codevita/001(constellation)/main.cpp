#include<bits/stdc++.h>
using namespace std;
int binaryEq=0;
/*bool check(vector<string> v){
    int len =v[0].length();
    int zeroes=0,ones=0;
    for(int i=0;i<=v.size();i++){
        for(int k=0;k<len;k++){
            if(v[i][k]=='0') zeroes++;
            else ones++;
        }
    }
    if(zeroes==ones) return true;
    else return false;
}*/
bool check(string a){
      int zeroes=0,ones=0;
    for(int i=0;i<a.length();i++){
        if(a[i]=='0')zeroes++;
        else ones++;
    }
    if(zeroes==ones) return true;
    else return false;
}
void combinations(vector<string> arr, vector<string> data,int start, int end,int index, int r)
{

	if (index == r)
	{
	    string s="";
	    for (int j = 0; j < r; j++){
			//cout << data[j] << " ";
			s+=data[j];
	    }
		//cout << endl;
		if(check(s)) binaryEq++;
		return;
	}

	for (int i = start; i <= end &&end - i + 1 >= r - index; i++)
	{
		data[index] = arr[i];
		combinations(arr, data, i+1,end, index+1, r);
	}
}

string binary(int num,int len){
string b="";
    while(num>0){
        if(num%2==0) b+='0';
        else b+='1';
        num/=2;
    }
    len-=b.length();
    while(len>0){
        b+='0';
        len--;
    }
    reverse(b.begin(),b.end());
    return b;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int max = *max_element(v.begin(),v.end());
    //cout<<max;
    string maxstr = binary(max,0);
    int maxlen = maxstr.length();
    vector<string> vs(n);
    for(int i=0;i<n;i++){
        vs[i]= binary(v[i],maxlen);
    }
    /*for(int i=0;i<n;i++){
        cout<<vs[i]<<endl;
    }*/
    //int binaryEq=0;
    for(int r=1;r<=n;r++){
            vector<string> data(r);
        combinations(vs, data, 0, n-1, 0, r);
        }

    /*for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(check(vs,i,j,maxlen)) {
                    binaryEq++;//cout<<"i="<<i<<"j="<<j;
            }
        }
    }*/

    //cout<<binaryEq;
    string ans = binary(binaryEq,maxlen);
    cout<<ans;
    return 0;
}
