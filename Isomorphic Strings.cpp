#include <bits/stdc++.h>
bool areIsomorphic(string &str1, string &str2)
{
    
    if(str1.size() != str2.size()) return false;
    
    unordered_map <char , int> umap1;
    unordered_map <char , int> umap2;
    
    for(int  i = 0 ; i < str1.size(); i++){
      if(++umap1[str1[i]] != ++umap2[str2[i]])
          return false;
        
     }
    
    return true;
    
}
