class Solution {
public:
    long long ans = 0;
    
    void Merge(vector<long long>& arr, int l, int mid, int r) {
        int n1 = mid - l + 1;
        int n2 = r - mid;
        
        vector<long long> a(n1);
        vector<long long> b(n2);
        
        for (int i = 0; i < n1; i++) {
            a[i] = arr[i + l];
        }
        for (int i = 0; i < n2; i++) {
            b[i] = arr[i + mid + 1];
        }
        
        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2) {
            if (a[i] <= b[j]) {
                arr[k] = a[i];
                i++;
            } else {
                arr[k] = b[j];
                ans += (n1 - i);  // Count inversions
                j++;
            }
            k++;
        }
        
        while (i < n1) {
            arr[k] = a[i];
            i++;
            k++;
        }
        
        while (j < n2) {
            arr[k] = b[j];
            j++;
            k++;
        }
    }
    
    void MergeSort(vector<long long>& arr, int l, int r) {
        if (l < r) {
            int mid = l + (r - l) / 2;
            MergeSort(arr, l, mid);
            MergeSort(arr, mid + 1, r);
            Merge(arr, l, mid, r);
        }
    }
    
    long long int inversionCount(long long arr[], int n) {
        vector<long long> vec(arr, arr + n);
        ans = 0;
        MergeSort(vec, 0, n - 1);
        return ans;
    }
};
