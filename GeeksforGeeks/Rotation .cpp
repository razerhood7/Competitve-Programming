class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    
	    int start = 0, end = n-1;
	    int mid, prev, next;
	    
	    while(start <= end)
	    {
	        mid = start + (end - start)/2;
	        prev = (mid-1+n)%n;
	        next = (mid+1)%n;
	        
	        if(arr[prev] >= arr[mid] && arr[next] >= arr[mid])
	            return mid;
	            
	        else if(arr[start]<=arr[mid] && arr[mid]>=arr[end])
	            start = mid+1;
	        else 
	            end = mid-1;
	    }
	    
	    return 0;
	}
	

};
