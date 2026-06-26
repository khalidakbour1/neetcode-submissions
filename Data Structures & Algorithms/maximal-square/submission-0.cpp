class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) {
            return 0;
        }
        int rows = matrix.size();
        int cols = matrix[0].size();
        int max_side = 0;
        std::vector<std::vector<int>> dp(rows + 1, std::vector<int>(cols + 1, 0));
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (matrix[i][j] == '1')
                {
                    int top_left = dp[i][j];
                    int top = dp[i][j + 1];
                    int left = dp[i + 1][j];
                    dp[i+1][j+1] = std::min(top_left, std::min(top, left)) + 1;
                    max_side = std::max(max_side, dp[i + 1][j + 1]);
                }
            }
        }
        return max_side * max_side;
    }
};