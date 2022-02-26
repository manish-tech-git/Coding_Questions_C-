class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int n = t.length();
        int t_i = 0;
        int s_i = 0; 
        int count = 0;
        
        while(t_i < t.length() && s_i < s.length()){
            
            if(t[t_i] == s[s_i]  ){
                t_i++;
                s_i++;
                count++;
                
            }
            
            else{
                t_i++;
            }
            
        }
        
        if( count == s.length())
        {
            return true;
        }
        else
            return false;
        
    }
};
