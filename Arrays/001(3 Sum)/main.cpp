#include <bits/stdc++.h>
using namespace std;
// Using nested loops it has O(n^3) complexity
/*vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]+nums[j]+nums[k] == 0){
                        vector<int> temp{nums[i],nums[j],nums[k]};
                        sort(temp.begin(),temp.end());
                        v.push_back(temp);
                    }
                }
            }
        }

        return v;
    }*/
    //Using 2 pointer techique having O(n^2) complexity
    vector<vector<int>> threeSum(vector<int>& nums,int sum) {
            vector<vector<int>> v;
            int n=nums.size();
            sort(nums.begin(),nums.end());
            for(int i=0;i<n-2;i++){
                    if(i>0 && nums[i]==nums[i-1]) continue;
                    int left=sum-nums[i];
                    for(int j=i+1,k=n-1;j<k;){
                        if(nums[j]+nums[k]==left){
                    //condition to check only add if either it is empty or
                    //the last vector is not equal to the current vector in order to avoid duplicate values
                                if(v.size()==0||v[v.size()-1]!=vector<int> {nums[i],nums[j],nums[k]})
                            v.push_back(vector<int> {nums[i],nums[j],nums[k]});
                            j++;k--;
                        }
                        else if(nums[j]+nums[k]>left) k--;
                        else if(nums[j]+nums[k]<left) j++;
                    }
            }

            return v;
        }
int main()
{
    int n;
    cin>>n;
    vector<int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    vector<vector<int>> v;
    int sum=0; //It may change according to question,Here we have to check triplet whose sum is 0.
    v = threeSum(num,sum);

   for(int i=0;i<v.size();i++){
       for(int j=0;j<3;j++){
        cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
