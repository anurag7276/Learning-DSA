Input: N = 10
Output: [3,6,2,8,8,0,0]
Explanation :
10! = 1*2*3*4*5*6*7*8*9*10 = 3628800

  
class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int>ans(1,1);
        while(N>1)
        {
            int carry =0, res, size=ans.size();
            
            for(int i=0; i<size; i++)
            {
                res = ans[i]*N+carry;
                ans[i]=res%10;
                carry= res/10;
            }
            
            while(carry )
            {
                ans.push_back(carry%10);
                // carry may be more than 2 digit like 123, 456 etc
                carry/=10;
            }
            N--;
        }
        
        reverse(ans.begin(),ans.end());
        // reverse kiya bcoz ans me reverse hi update kiya tha 
        // bcoz last carry lo reverse order me push kiya ja sake 
        return ans;
    }
};
