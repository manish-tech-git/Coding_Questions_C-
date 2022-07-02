#include<bits/stdc++.h>

vector<vector<int>> findTriplets(vector<int>arr, int n) {
	
    sort(arr.begin(), arr.end());
    int l, r;
    vector <vector <int>> ans;
    for (int i = 0; i < n-2; i++)
    {
       
        l = i + 1;
        r = n - 1;
        
        while(l < r)
        {
            
          if(arr[i] + arr[l] + arr[r] == 0){
              ans.push_back({arr[i], arr[l], arr[r]});
              l++;
              r--;
          }
            
            
          else if(arr[i] + arr[l] + arr[r] < 0)
              l++;
          
          else
              r--;
       }
        
    }
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    
    return ans;
}

//Time Complexity - O(N^2)
