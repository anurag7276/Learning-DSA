Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]



class Solution {
public:
   void subsequence(vector<int>& arr,int index,int n,vector<vector<int> > &ans,vector<int>temp)
   {
    if (index==n)
    {
        ans.push_back(temp);
        return;
    }
    //not included in temp
    subsequence(arr,index+1,n,ans,temp);
    // included index value in temp
    temp.push_back(arr[index]);
    subsequence(arr,index+1,n,ans,temp);
    
   }

    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int> > ans;
        vector<int> temp;
        subsequence(nums,0,nums.size(),ans,temp);

        return ans;

        
    }
};
