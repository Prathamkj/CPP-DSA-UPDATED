#include <iostream>
using namespace std;
// Triplet Sum
// KHUD SE KIYA HU BCCC
int TripletSum(int array[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        // dusra loop because dono ko compare karne ke liye and unka sum bhi compare karne liye
        for (int j = i + 1; j < size; j++)
        {
            for(int k = i+2; k < size; k++){
            if (array[i] + array[j] + array[k] == n)
            {
                cout << array[i]<<" "<<array[j]<< " "<<array[k] <<endl;
            }
            }
        }
    }
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int n;
    cout << "Enter the number of n ";
    cin >> n;
    cout << TripletSum(array, size, n);
}