#include<bits/stdc++.h>
using namespace std;

/*void combinationUtil(int arr[], int data[],
					int start, int end,
					int index, int r);*/


/*void printCombination(int arr[], int n, int r)
{
	int data[r];

	combinationUtil(arr, data, 0, n-1, 0, r);
}*/

void combinations(vector<string> arr, vector<string> data,int start, int end,int index, int r)
{

	if (index == r)
	{
		for (int j = 0; j < r; j++)
			cout << data[j] << " ";
		cout << endl;
		return;
	}

	for (int i = start; i <= end &&end - i + 1 >= r - index; i++)
	{
		data[index] = arr[i];
		combinations(arr, data, i+1,
						end, index+1, r);
	}
}

int main()
{
	vector<string> arr{"1", "2", "3", "4", "5"};
	int n = arr.size();
	for(int r=1;r<=5;r++){
        vector<string> data(r);

	combinations(arr, data, 0, n-1, 0, r);
	}
	//printCombination(arr, n, r);
}

