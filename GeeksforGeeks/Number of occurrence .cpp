class Solution{
private:
    int firstpos(int arr[], int n, int target)
    {
        int start = 0;
        int end = n-1;
        int mid;
        int res = -1;
        
        while(start<=end)
        {
            mid = start + (end-start)/2;
            
            if(arr[mid] == target)
            {
                res = mid;
                end = mid-1;
            }
                          
            else if(arr[mid] < target)
                start = mid+1;
            
            else if(arr[mid] > target)
                end = mid-1;
            
        }
        
        return res;
    }
    
    int lastpos(int arr[], int n, int target)
    {
        int start = 0;
        int end = n-1;
        int mid;
        int res = -1;
        
        while(start<=end)
        {
            mid = start + (end-start)/2;
            
            if(arr[mid] == target)
            {
                res = mid;
                start = mid+1;
            }
                          
            else if(arr[mid] < target)
                start = mid+1;
            
            else if(arr[mid] > target)
                end = mid-1;
            
        }
        
        return res;
    }
    
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
        
        int firstp = firstpos(arr, n, x);
        int lastp =  lastpos(arr, n, x);
        
        if(firstp== -1 && lastp==-1)
            return 0;
        else
            return lastp - firstp +1;
	}
};
