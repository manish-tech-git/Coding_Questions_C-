class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        string s1,t1;
        
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] != '#')
                s1.push_back(s[i]);
            else
            {
                if(s1.size() > 0)
                    s1.pop_back();
            }
        }
        
        for(int i = 0; i<t.length(); i++)
        {
            if(t[i] != '#')
                t1.push_back(t[i]);
            
            else
            {
                if(t1.size() > 0)
                {
                    t1.pop_back();
                }
                
            }
        }
        
        return s1 == t1;
        
        
        
    }
};
