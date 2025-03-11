#include <iostream>
using namespace std;
// Maximum Element in Array
// Peak Elemet in the Array
// By linear search Method
int LinearSearch(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] > array[i - 1] || i == 0)
        {
            // if in i==0 array i bada hoga hi array of i-1
            if (array[i + 1] < array[i] || i == size - 1)
            {
                // Here array of i bada hoga hi i+1 array
                return i;
            }
        }
    }
}

int main()
{
    int linear[10] = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    int Binary[10] = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    int size = 10;
    int memory = 10;
    cout << "Linear Search Answer is " << LinearSearch(linear, size) << endl;
}