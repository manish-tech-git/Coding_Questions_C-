int pairSum(vector<int> &arr, int n, int target){
	int i = 0, j = n-1;
    int count = 0;
    while( i < j)
    {
        if(arr[i] + arr[j] == target)
        {
            count++;
            i++;
            j--;
        }
        else if(arr[i] + arr[j] < target )
            i++;
        else
            j--;
    }
    if(count == 0)
        return -1;
    else
        return count;
    
}
