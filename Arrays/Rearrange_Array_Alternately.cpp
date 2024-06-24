class Solution {
public:
    // Function to rearrange the array elements alternately.
    void rearrange(long long *arr, int n) {
        long long max_ele = arr[n - 1] + 1;
        int max_idx = n - 1, min_idx = 0;

        // Traverse the array and store the modified values
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                arr[i] = arr[i] + (arr[max_idx] % max_ele) * max_ele;
                max_idx--;
            } else {
                arr[i] = arr[i] + (arr[min_idx] % max_ele) * max_ele;
                min_idx++;
            }
        }

        // Divide all elements by max_ele to get the result
        for (int i = 0; i < n; i++) {
            arr[i] /= max_ele;
        }
    }
};
