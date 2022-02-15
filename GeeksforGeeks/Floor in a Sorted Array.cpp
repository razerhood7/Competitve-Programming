// Function to find floor of K
// arr[]: integer array of size N
// N: size of arr[]
// K: element whose floor is to find
int findFloor(long long int arr[], int N, long long int K) {
    
    //Your code here
    
    int start = 0;
    int end = N-1;
    int mid, res=-1;
    
    while(start <= end)
    {
        mid = start + (end-start)/2;
        
        if(arr[mid] == K)
            return mid;
        else if (arr[mid] < K)
        {
            res = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    
    return res;
}
