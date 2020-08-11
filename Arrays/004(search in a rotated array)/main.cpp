#include<bits/stdc++.h>
using namespace std;
int findindex(vector<int> nums,int n){
        int low=0;
        int high=n-1;
        int mid;
        while(low<high && nums[low]>nums[high]){
            mid =(low+high)/2;
            if(nums[mid]>nums[high]) low=mid+1;
            else high = mid-1;
        }
        return low;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low = 0;
        int high = n-1;
        int mid;
        int rotindex = findindex(nums,n);
        int rotmid;
        while(low<=high){
            mid = (low+high)/2 ;
            rotmid = (mid + rotindex)%n;
            if(nums[rotmid] == target) return rotmid;
            else if(nums[rotmid]<target)
                low=mid+1;
            else high =mid;
        }
        return -1;
    }
int main()
 {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        cin>>k;
        cout<<search(v,k)<<endl;
	}
	return 0;
}

