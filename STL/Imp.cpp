firstIndex[arr[i]] = i;
Here we are storing the index i of the first time the element arr[i] is seen.
Example: if arr[i] = 5 at i = 1, then the map will have firstIndex[5] = 1.


2. firstIndex[arr[i]]++;
Here we are counting frequency of the element.
Every time we see arr[i], we increase its count by 1.
Example: if array is {5, 1, 5, 3}, then after scanning:

firstIndex[5] = 2
firstIndex[1] = 1
firstIndex[3] = 1