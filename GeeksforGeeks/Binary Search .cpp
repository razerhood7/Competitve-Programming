class Solution{
public:
    int binarysearch(int arr[], int n, int k){
        // code here
        int start=0;
        int end=n-1;
        int mid;
        
        while(start<=end)
        {
            mid = start + (end-start)/2;
            
            if(arr[mid]==k)
            {
                return mid;
            }
                
            
            else if(k<arr[mid])
                end=mid-1;
            
            else 
                start=mid+1;
        }
        return -1;
    }
};
