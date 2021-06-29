#include<bits/stdc++.h>
using namespace std;
bool dp[1002][1002];

bool solveSubsetSum(int arr[], int n, int S) {

	for (int i = 0; i <= S; i++) 
		dp[0][i] = false;
	
	for (int i = 0; i <= n; i++)
		dp[i][0] = true;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= S; j++) {
			if (arr[i - 1] <= j) {
				dp[i][j] = (dp[i - 1][j - arr[i - 1]] || dp[i - 1][j]);
			} else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	return dp[n][S];
}


int main() {
	
	int arr[] = {3, 34, 4, 12, 5, 2};
	int n = sizeof(arr) / sizeof(arr[0]);
	int S = 91;
	cout << solveSubsetSum(arr, n, S) << endl;
	
	
	
	return 0;
}