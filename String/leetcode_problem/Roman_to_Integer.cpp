
// Example 1:

// Input: s = "III"
// Output: 3
// Explanation: III = 3.
// Example 2:

// Input: s = "LVIII"
// Output: 58
// Explanation: L = 50, V= 5, III = 3.
// Example 3:

// Input: s = "MCMXCIV"
// Output: 1994
// Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// CD=> -100 + 500 => 400
//   next value greater then -ve lenge warna positive


class Solution {
public:
     int num(char c)
     {
        if(c=='I')
        return 1;
        else  if(c=='V')
        return 5;
        else if(c=='X')
        return 10;
        else if(c=='L')
        return 50;
        else if(c=='C')
        return 100;
        else if(c=='D')
        return 500;
        else 
        return 1000;
    }

    int romanToInt(string s) {
     int sum=0,index=0;

     while(index < s.size()-1)
     {
       if(num(s[index]) <num(s[index+1]))
        sum-=num(s[index]);
        else
        sum+=num(s[index]);
       index++;
      
     }
    //  sum+=num(s[index]);
     sum+=num(s[s.size()-1]);
     return sum;
    }
};
  
