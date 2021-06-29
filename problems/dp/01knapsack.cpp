for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= W; j++) {
            if (wt[i] <= j) {
                dp[i][j] = max(dp[i - 1][j], val[i] + dp[i - 1][j - wt[i]]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }