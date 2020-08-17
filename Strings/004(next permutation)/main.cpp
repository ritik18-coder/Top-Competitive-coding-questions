#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    int index=-1;
	    //finding the element which is smaller than its right right sided element
	    // Example array= 1 2 3 4 3 2 1
	    for(int i=n-1;i>0;i--){
            if(v[i]>v[i-1]){
                index=i;break;
            }
	    }
	    if(index == -1) cout<<"Not Possible";
	    else{
            int num = index;
            //Finding out the smallest value which can be used to replace the integer
            for(int i=index;i<n;i++){
                if(v[i]>v[index-1] && v[i]<v[num]){
                    num = i;
                }
            }
            //swaping after swapping-> 1 2 4 3 3 2 1
            swap(v[index-1],v[num]);
            //sorting the rest  ---> 1 2 4 1 2 3 3
            sort(v.begin()+index,v.end());
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
	    }
	     cout<<endl;
	}
	return 0;
}
