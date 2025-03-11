#include <iostream>
using namespace std;
// TO FIND THE UNIQUE ELEMENT IN THE ARRAY
// WITH THE HELP OF XOR
void UniqueNumber(int array[], int size)
{
    int answer = 0;
    for (int i = 0; i < size; i++)
    {
        // Sare ke sare elements ko humne xor(^) kar diyee with zero jisse hume Unique elment mil jayega
        answer = answer^array[i];
    }
    cout<<answer<<endl;
}
int BruteUnique(int array[], int size){
    int count = 0;
    
}
// 
int main()
{
    int array[7] = {3, 7, 2, 2, 7, 3, 4};
    int size = 7;
    UniqueNumber(array, size);
}