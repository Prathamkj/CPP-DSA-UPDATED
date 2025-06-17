// Merge 2 sorted array

#include <iostream>
using namespace std;
void merge(int array1[], int n , int array2[] , int m , int array3[]){

    // 2 loops for 2 arrays
    int i = 0 , j = 0;
    int k = 0;
    while(i < n && j < m){
        // jab tak i pahale wale ka size se chota hai and j dusre wale ke size se chota hai
        // first dono loops ke liye
        // 
        if(array1[i] < array2[j]){
            array3[k] = array1[i];
            k++;
            i++;
        }
        else{
            array3[k] = array2[j];
            k++;
            j++;
        }
    }
    // baad ke do loop isliye chalaye taki koi element bacha ho toh cover ho jaye
    while(i<n){
        // n is size of array 1
        array3[k] = array1[i];
        k++;
        i++;
        // Answer and i dono ko badda dengee
    }

    while(j<m){
        // m is size of array 2
        array3[k] = array2[j];
        // answer ka k array2[k]
        k++;
        j++;

    }
}
// Same witt Vectorrr
class Solution {
  public:
    vector<int> mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        int i = 0, j = 0;
        vector<int> ans;

        // Merge the arrays
        while(i < n && j < m) {
            if(a[i] < b[j]) {
                ans.push_back(a[i]);
                i++;
            } else {
                ans.push_back(b[j]);
                j++;
            }
        }

        // Add remaining elements from a
        while(i < n) {
            ans.push_back(a[i]);
            i++;
        }

        // Add remaining elements from b
        while(j < m) {
            ans.push_back(b[j]);
            j++;
        }
        
        return ans;
    }
};




void print(int array3[] , int n){
    for(int i=0; i<n; i++){
        cout<<array3[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int array1[5] = {1,3,5,7,9};
    int array2[3] = {2,4,6};

    int array3[8] = {0};
    // 5 and 3 are size of arrays
    merge(array1, 5, array2, 3, array3);

    print(array3 , 8);

}

// 2nd Approachh
class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            // n and m are the sizes of the array
            int index = m + n - 1;
            int i = m - 1;
            // here we are applying the backward loop so that's why we are taking last index
            int j = n - 1;
            while( i >= 0 && j>= 0){
                if(nums1[i] <= nums2[j]){
                    nums1[index] = nums2[j];
                    // 1 st array me dalna hai toh nums1 
                    index--;
                    j--;
                }
                else{
                    nums1[index] = nums1[i];
                    i--;
                    index--;
                }
            }
            while( j>=0 ){
                nums1[index] = nums2[j];
                index--;
                j--;
            }
        }
    };