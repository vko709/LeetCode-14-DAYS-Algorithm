class Solution {
public:
    void rotate(vector<int>& a, int k) {
        // vector<int>v;
        int n = a.size();
        k = k%n;
        int i = 0, j = n-k-1;
//         first rotaion till n-k which takes time complexity of O(n-k)
        while(i<j){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
//         second rotaion till n-k to n which takes time complexity of O(k)
 
        i=n-k;
        j=n-1;
        while(i<j){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
        i = 0;
        j = n-1;
        
//         complete rotation of array which takes time complexity of O(n)
        while(i<j){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
//         total time complexity O( n-k + k + n) = O(n + n) = O(2n) = O(n)
    }
};