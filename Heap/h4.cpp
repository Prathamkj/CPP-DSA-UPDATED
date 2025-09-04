// Priority Queue 
// you can use priority_queue to implement max heap and min heap

#include <iostream>
#include <queue>

priority_queue<int> pq; // max heap
// it is inbuild max heap
// functions -- push(), pop(), top(), size(), empty()
priority_queue<int, vector<int>, greater<int>> pq_min; // min heap
// for the min heap we have to use greater<int> comparator

