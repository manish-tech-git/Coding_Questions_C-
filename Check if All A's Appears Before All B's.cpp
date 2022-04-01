class Solution {
public:
    bool checkString(string s) {
        
        int a_count = 0;
        int b_count = 0;
        
        if(s.length() == 1){
            return true;
        }
        
        
        for (int i = 0; i < s.length(); i++){
              
            if(s[i] == 'a' && b_count == 0){
                a_count++;
            }
            
            if(s[i] == 'a' && b_count > 0){
                return false;
            }
            
            else if (s[i] =='b'){
                b_count++;
            }
            
        }
        
        return true;
        
        
        
    }
};
