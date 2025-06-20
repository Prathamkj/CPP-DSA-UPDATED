#include <iostream>
using namespace std;
// sort the 0 and 1
int SortNumber(int array[], int size){
    int first = 0;
    int last = size - 1;
    while(first < last){
        // just thoda sa change hai
        // array first == 0 toh index se aage badh jaa
        // and 1 ke liye if it s equal
        if(array[first] == 0){
            // toh index aage badega
            first++;
        }
        else if(array[last] == 1){
            last--;
        }
        swap(array[first], array[last]);
    }
}



int main(){
    int array[8] = {1,0,1,0,1,0,1,0};
    int size = 8;
    cout<<SortNumber(array,size);
    for(int i = 0; i<size; i++){
        cout<<array[i];
    }
    return 0;   

}

2nd Approach
class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int count0 = 0, count1 = 0;

        // Count the number of 0s and 1s
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) {
                count0++;
            } else if (arr[i] == 1) {
                count1++;
            }
        }

        // Fill first count0 positions with 0
        for (int i = 0; i < count0; i++) {
            arr[i] = 0;
        }

        // Fill remaining positions with 1
        for (int i = count0; i < arr.size(); i++) {
            arr[i] = 1;
        }
    }
};
