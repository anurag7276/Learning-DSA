a = amazon
b = azonam
Output: 
1
Explanation: 
amazon can be rotated anti-clockwise by two places, which will make it as azonam.

  
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    void rotatedclockwise(string &s)
    {
      char c = s[s.size()-1];
     int index = s.size()-2;
      
      while(index >= 0)
      {
          s[index + 1] = s[index];
          index--;
      };
      
      s[0]=c;
    }
    
    void rotatedanticlockwise(string &s)
    {
        
      char c = s[0];
     int index = 1;
      
      while(index < s.size())
      {
          s[index - 1] = s[index];
          index++;
      };
      
      s[s.size()-1]=c;
    }
    
    bool isRotated(string str1, string str2)
    {
        // Your code here
        
        if(str1.size()!=str2.size())
        return 0;
        
        string clockwise,anticlockwise;
        
        clockwise = str1;
        
        rotatedclockwise(clockwise);
        rotatedclockwise(clockwise);
        
        if(clockwise==str2)
          return 1;
          
          anticlockwise = str1;
          
        rotatedanticlockwise(anticlockwise);  
        rotatedanticlockwise(anticlockwise);
        
        if (anticlockwise==str2)
        return 1;
        
      return 0;    
    }

};
