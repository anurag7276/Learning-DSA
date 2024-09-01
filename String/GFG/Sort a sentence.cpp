Input:
S = "edcab"
Output: "abcde"
Explanation: characters are in ascending
order in "abcde".

  
string sort(string s){
    //complete the function here
    vector<int>alpha(26,0);
    //to count each character occurance
    for(int i=0; i<s.size();i++)
    {
        alpha[s[i]-'a']++;
    }
    
    // print all charecter according to occurance 
    string ans ;
    for(int i=0; i<26;i++)
    {
        char c = 'a' + i ;
        while(alpha[i])
        {
            ans+=c;
            alpha[i]--;
        }
    }
    return ans;
}
