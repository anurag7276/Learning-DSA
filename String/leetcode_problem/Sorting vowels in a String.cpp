Input: s = "lEetcOde"
Output: "lEOtcede"
Explanation: 'E', 'O', and 'e' are the vowels in s; 'l', 't', 'c', and 'd' are all consonants.
The vowels are sorted according to their ASCII values, and the consonants remain in the same places.
  

class Solution {
public:
    string sortVowels(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
    // step 1 => vowel counting
        for(int i=0; i<s.size();i++)
        {
            // lower vowel counting a,e,i,o,u
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                lower[s[i]-'a']++;
                s[i]='#'; //bcoz sorted vowel assignment make easy
            }
            // upper vowel counting A,E,I,O,U
               if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                upper[s[i]-'A']++ ;
                s[i]='#' ; //bcoz sorted vowel assignment make easy
            }
        }

       // sorted vowel according to ascii value A=>65 ,a=>97

       string vowel;

       // upper vowel letter

         for(int i=0;i<26;i++)
         {
            char c = 'A' + i;
            while(upper[i])
            {
                vowel+=c;
                upper[i]--;
            }
         }

       // lower vowel letter 

         for(int i=0;i<26;i++)
         {
            char c = 'a' + i;
            while(lower[i])
            {
                vowel+=c;
                lower[i]--;
            }
         }

         int first=0, second=0;
         // second point to vowel ka index
         // first point to original S ka index

         // insert sorted vowel in original string
         while(second<vowel.size())
         {
            if(s[first]=='#')
            {
                s[first]=vowel[second];
                second++;
            }
            first++;
         }

         return s;
    }
};
