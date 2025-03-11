
#include <iostream>
using namespace std;
// Pair sum Problem
int PairSum(int array[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        // dusra loop because dono ko compare karne ke liye and unka sum bhi compare karne liye
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] + array[j] == n)
            {
                cout << array[i] << " " << "and" << " " << array[j] << endl;
            }
        }
    }
}

int main()
{
    // Given Inputs
    int array[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int n;
    cout << "Enter the number of n ";
    cin >> n;
    cout << PairSum(array, size, n);
}