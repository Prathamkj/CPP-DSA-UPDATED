451. Sort Characters By Frequency
// 1st Methodd bhaisabhhh
// Imp Question 


class Solution {
public:
    string frequencySort(string s) {
        // Step 1: count frequency
        // Key → the character you want to count
        // Value → the counter (int)
        // unordered_map<key, value> freq;
        
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        // Step 2: max heap (priority queue) for {frequency, character}
        priority_queue<pair<int, char>> pq;
        for (auto it : freq) {
            // second means the character and first means the frequency
            // {character, frequency}
            pq.push({it.second, it.first});

            // one by one push the character and the freq
        }

        // Step 3: build answer string
        string ans = "";
        while (!pq.empty()) {
            // if the priority queue is empty then 

            int count = pq.top().first;
            // gives the freq of the top element
            char ch = pq.top().second;
            // gives the character top element
            pq.pop();

            for (int i = 0; i < count; i++) {
                // until the count of that particular element
                // and then pop out that element
                // ans me top se element dalte rahoo 
                ans += ch;   // add character 'count' times
            }
        }

        return ans;
    }
};
