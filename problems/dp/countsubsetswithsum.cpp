#include<bits/stdc++.h>
using namespace std;
int dp[1002][1002];

int count(vector<int> arr, int S) {

	for (int i = 0; i <= S; i++) 
		dp[0][i] = 0;
	
	for (int i = 0; i <= n; i++)
		dp[i][0] = 1;

	for (int i = 1; i <= arr.size(); i++) {
		for (int j = 1; j <= S; j++) {
			if (arr[i - 1] <= j) {
				dp[i][j] = (dp[i - 1][j - arr[i - 1]] + dp[i - 1][j]);
			} else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	return dp[arr.size()][S];
}


int main() {
	
	vector<int> arr = {3, 34, 4, 12, 5, 2};
	int S = 91;
	cout << count(arr, arr.size(), S) << endl;
	
	
	
	return 0;
}