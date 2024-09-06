// String substraction allowed but addition Not '0'=>48 ascii value
// '8'-'3'=>56-51 =>5  == '5'
// '8'+'3'=>56+51 =>107  !='11'
// ('8' - '0')+ ('3' -'0')=> 8+3  => 11 =='11'


Example 1:

Input: num1 = "11", num2 = "123"
Output: "134"
Example 2:

Input: num1 = "456", num2 = "77"
Output: "533"
Example 3:

Input: num1 = "0", num2 = "0"
Output: "0"
 



class Solution {
public:

  string add(string num1, string num2)
  {
    string ans;
    int index1=num1.size()-1, index2=num2.size()-1;
    int sum, carry=0; 

    //add untill index2 >= 0

    while(index2>=0)
    {
        sum=(num1[index1]-'0')+(num2[index2]-'0')+carry;
        // 
        carry=sum/10;
        char c = '0' + sum%10;
        // 48+3integer=>51 =>'3'string
        ans+=c;
        index2--,index1--;
    }

    // index>=0
     while(index1>=0)
    {
        sum=(num1[index1]-'0')+carry;
        // 
        carry=sum/10;
        char c = '0' + sum%10;
    
        ans+=c;
        index1--;
    }
    if(carry)
    ans+='1';
    reverse(ans.begin(),ans.end());
    return ans;


  }
    string addStrings(string num1, string num2) {
        
        if(num1.size()<num2.size())
        return add(num2,num1);
        else
        return add(num1,num2);
    }
};
