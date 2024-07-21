class Solution {
  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        int A = 0,B = 0;
        
        for(int i=0;i<n;i++){
            A+=a[i];
        }
        for(int j=0;j<m;j++){
            B+= b[j];
        }
        if(abs(A-B)%2 != 0)return -1;
        
        int target = abs(A-B)/2;
        int i =0;
        int j = 0;
        sort(a,a+n);
        sort(b,b+m);
        while(i<n && j<m) {
            if(abs(a[i]-b[j]) == target) return 1;
            else if(A-a[i] + b[j] > B - b[j] + a[i]) i++;
            else j++;
        }
        return -1;
    }
};
