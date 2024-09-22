Given an array nums of distinct integers, return all the possible 
permutations
. You can return the answer in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]




class Solution {
public:

   void permut(vector<int>&arr,vector<vector<int> >&ans,vector<int>&temp,vector<bool>&visited)
   {
    // base condition
    if(visited.size()==temp.size())
    {
        ans.push_back(temp);
        return;
    }
    for(int i=0; i<visited.size();i++)
    { 
        if(visited[i]==0)
        {

        visited[i]=1;
        temp.push_back(arr[i]);
        permut(arr,ans,temp,visited);
        visited[i]=0;
        temp.pop_back();
        }
    }
   }




second method without temp and visited

class Solution {
public:

   void permut(vector<int>&arr,vector<vector<int> >&ans,int index)
   {
    if(arr.size()==index)
    {
        ans.push_back(arr);
        return;
    }

    for(int i=index;i<arr.size();i++)
    {
        swap(arr[index],arr[i]);
        permut(arr,ans,index+1);
        swap(arr[index],arr[i]);
    }
   }
   

    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int> > ans;
   
        permut(nums,ans,0);
        return ans;
        
    }
};
