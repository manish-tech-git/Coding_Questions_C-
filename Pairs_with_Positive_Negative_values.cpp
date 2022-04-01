class Solution{
  public:
    vector<int> PosNegPair(int a[], int n) {
        
    map <int, int> m;
    
    vector < int> v;
    
    for(int i =0; i< n;i++){
        if(a[i] < 0)
        v.push_back(a[i]);
        else{
            m[a[i]]++;
        }
        
    }
    
    vector<int> ans;
    
    sort(v.begin(),v.end());
    
    for(int i = v.size() - 1; i >=0; i--){
        
        int data = abs(v[i]);
        
        if(m[data] > 0){
            ans.push_back(v[i]);
            ans.push_back(data);
            
            m[data ] = m[data] - 1;
        }
        
    }
    
    return ans;
    
    }
};
