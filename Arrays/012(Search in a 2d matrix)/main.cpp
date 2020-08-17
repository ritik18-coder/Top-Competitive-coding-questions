#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0||matrix[0].size()==0) return false;
        int rows=matrix.size();
        int col=matrix[0].size();
        int r=0,c=col-1;
        while(r<rows && c>=0){
            if(target==matrix[r][c]) return true;
            else if(target>matrix[r][c]) r++;
            else c--;
        }

        return false;
    }
int main()
{
    int t,rows,cols,target;
    cin>>t;
    while(t--){
    cin>>rows>>cols;
    vector<vector<int>> matrix(rows,vector<int> (cols));
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }
    cin>>target;
    if(searchMatrix(matrix,target)) cout<<"true\n";
    else cout<<"false\n";
    }

    return 0;
}
