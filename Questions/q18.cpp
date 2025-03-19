#include <iostream>
using namespace std;
// BINARY SEARCH QUESTION
// FIRST AND LAST OCCURANCE OF POSITION OF THE ELEMENT TARGET VALUE
int FirstOccurance(int array[], int target, int size)
{
    int start = 0;
    int end = size - 1;
    int middle = (start + end) / 2;
    int answer = 0;
    // Here humne answer store kar liya....
    while (start <= end)
    {
        if (array[middle] == target)
        {
            answer = middle;
            end = middle - 1;
        }
        else if (target > array[middle])
        {
            start = middle + 1;
        }
        else if(target < array[middle])
        {
            end = middle - 1;
        }
        middle = (start + end) / 2;
    }
    return answer;
}
int LastOccurance(int array[], int target, int size)
{
    int start = 0;
    int end = size - 1;
    int middle = (start + end) / 2;
    int answer = 0;
    // Here humne answer store kar liya....
    while (start <= end)
    {
        if (array[middle] == target)
        {
            answer = middle;
            start = middle + 1;
        }
        else if (target > array[middle])
        {
            start = middle + 1;
        }
        else if(target < array[middle])
        {
            end = middle - 1;
        }
        middle = (start + end) / 2;
    }
    return answer;
}

int main()
{
    int array[8] = {0, 0, 1, 1, 4, 4, 2, 2};

    int target = 2;

    cout <<"First Occurance of Target value is "<<FirstOccurance(array, target, 8)<<endl;
    cout <<"First Occurance of Target value is "<<LastOccurance(array, target, 8);
    
}

// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int l = 0, r = nums.size()-1;

//         //right search
//         int right = -1;
//         while(l<=r) {
//             int mid = l+(r-l)/2;
//             if(nums[mid] == target) {
//                 right = mid;
//                 l = mid+1;
//             }
//             else if(nums[mid]>target) r = mid-1;
//             else l = mid + 1;
//         }

//         // left search;
//         l = 0;
//         r = nums.size()-1;
//         int left = -1;
//         while(l<=r) {
//             int mid = l+(r-l)/2;
//             if(nums[mid] == target) {
//                 left = mid;
//                 r = mid-1;
//             }
//             else if(nums[mid]>target) r = mid-1;
//             else l = mid + 1;
//         }

//         vector<int> ans;
//         ans.push_back(left);
//         ans.push_back(right);

//         return ans;
//     }
// };