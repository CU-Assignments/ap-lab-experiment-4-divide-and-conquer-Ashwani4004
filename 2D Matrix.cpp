class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            if (matrix.empty()) return false;  // Handle empty matrix
    
            int m = matrix.size();
            int n = matrix[0].size();
            
            // Start from the top-right corner
            int row = 0;
            int col = n - 1;
            
            while (row < m && col >= 0) {
                if (matrix[row][col] == target) {
                    return true;  // Target found
                } else if (matrix[row][col] > target) {
                    col--;  // Move left
                } else {
                    row++;  // Move down
                }
            }
            
            return false;  // Target not found
        }
    };
    