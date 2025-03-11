// SQUARE ROOT IN A ROTATED SORTED ARRAY
// With help of binary search
#include <iostream>
using namespace std;
int SquareRoot(int n){
    int start = 0;
    int end = n;
    int mid = (start + end) / 2;
    int ans = 0;
    while (start <= end){
        int square = mid * mid;
        if(square == n){
            return mid;
        }
        if(square < n){
            ans = mid;
            start = mid + 1;

        }
        else{
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    cout<<SquareRoot(n);

}