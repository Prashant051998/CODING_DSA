Given an m x n matrix, return all elements of the matrix in spiral order.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100
Accepted
1.2M
Submissions
2.6M

code ################################

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        
        int m = matrix[0].size();
        
        int top = 0;
        
        int bottom = n - 1;
        
        int left = 0;
        
        int right = m - 1;
        
        vector<int> res;
        
        while(top <= bottom && left <= right)
        {
           
            if(top <= bottom)
            {
                for(int j = left; j <= right; j++)
                {
                    res.push_back(matrix[top][j]);
                }
                
                top++;
            }
            
         
            
            if(left <= right)
            {
                for(int i = top; i <= bottom; i++)
                {
                    res.push_back(matrix[i][right]);
                }
                
                right--;
            }
          
            
            if(top <= bottom)
            {
                for(int j = right; j >= left; j--)
                {
                    res.push_back(matrix[bottom][j]);
                }
                
                bottom--;
            }
            
         
            
            if(left <= right)
            {
                for(int i = bottom; i >= top; i--)
                {
                    res.push_back(matrix[i][left]);
                }
                
                left++;
            }
        }
        
        return res;
    }
};