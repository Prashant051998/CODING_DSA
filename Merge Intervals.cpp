Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

 

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
 

Constraints:

1 <= intervals.length <= 104
intervals[i].length == 2
0 <= starti <= endi <= 104
#########################################################################
sol :-

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        

        int n=intervals.size();

        vector<int> x(2);
      
        int index=0;
        int maxx = 0;

        for(int i =0;i<n;i++)
        {
              
            maxx=max(maxx,intervals[i][1]);
            
            if((i+1) <=(n-1) && intervals[i+1][0] <= maxx )
            {
                maxx=max(maxx,intervals[i+1][1]);

                continue;

            }
            else
            {
                x[0]=intervals[index][0];
                x[1]=maxx;
                ans.push_back(x);
                index=i+1;
                maxx =intervals[i][1];
            }
            
        }
        return ans;
        
    }
};