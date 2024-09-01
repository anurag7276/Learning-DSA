Example 1:

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
Example 2:

Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"
 


class Solution {
public:
    string defangIPaddr(string address) {
     int   index=0;
        string ans;
        while(index<address.size())
        {
            if(address[index]=='.')
            {
                ans+="[.]";
            }
            else
            {
                ans+=address[index];
            }
                index++;
        }
        return ans;
    }
};
