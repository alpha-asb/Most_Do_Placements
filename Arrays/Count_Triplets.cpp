class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    sort(arr,arr + n);
	    int ans =0;
	    for(int i = n-1;i>=2;i--){
	    int start =0,end = i-1;
	    while(start<end){
	        if(arr[start]+arr[end]==arr[i]){ans++;start++;end--;}
	        else if(arr[start]+arr[end]<arr[i]){start++;}
	        else {end--;}
	    }
	    }
	    return ans;
	}
};
