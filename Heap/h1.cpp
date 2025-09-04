// heap -- it is a complete binary tree 
// that comes with a heap order property 

// ---- Nodes always added from the left -- to keep it complete 
// IMPLEMENTATION IN THE ARRAY FORM 
// Pahale left se dalni hai uske baad right jana hai 

// heaps of 2 types - Max Heap and Min Heap 
// Max Heap - parent is always greater than children 
// Min Heap - parent is always smaller than children 

// insertion in heap // 60 50 40 30 20

// if Any node is in i'th index then 
// its left child will be at 2*i 
// its right child will be at 2*i + 1 
// parent = i / 2 th index 

// if val = 55 - you want to insert 55 
// 1. insert at the end 
// 2. take it to the correct positon 
// compare with the parent and then swap .. and parent = i / 2 th index
 // Now code

#include <iostream>
using namespace std;

// 1. INSERTION
// code to implement of inserting the heap
class heap
{
public:
    int arr[100];
    int size = 0;
    heap()
    {
        arr[0] = -1; // Sentinel value
        size = 0;
    }
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // time complexity will be -- O(log n)

    // 2. DELETION in heap
    // IF WE WANT TO DELETE THE ROOT NODE
    // 1. pahale last node ko root pe laana hai
    // 2. Remove the last Node -- means the root value wala hai
    // 3. now we need to make sure
    // and propogate root node to its correct position -- means swappingg and all
    void deleteNode()
    { // <-- renamed from delete to deleteNode
        if (size == 0)
        {
            cout << "Nothing to delete" << endl;
            return;
        }
        // step 1
        arr[1] = arr[size];
        // paheli node me last node ko dalna hai means last node ko root pe laana hai
        // step 2
        size--;
        // step 3
        // taking root node to its correct position
        int i = 1;
        while (i <= size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            // left and right index
            if (leftIndex <= size && arr[i] < arr[leftIndex])
            {
                // then swap the values
                swap(arr[i], arr[leftIndex]);
                // and update the i
                i = leftIndex;
            }
            else if (rightIndex <= size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }
};

int main()
{
    // insertion
    heap h;
    h.insert(50);
    h.insert(30);
    h.insert(20);
    h.insert(40);
    h.insert(60);
    h.print();
    // Deletion
    h.deleteNode(); // <-- Deletion
    h.print();
    return 0;
}
