Array Subset

class Solution {
  public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        unordered_map<int, int> freqA;
        unordered_map<int, int> freqB;

        // Count frequencies in 'a'
        for (int num : a) {
            freqA[num]++;
        }

        // Count frequencies in 'b'
        for (int num : b) {
            freqB[num]++;
        }

        // Check if freqA has enough count for each element in freqB 
        // we check whether every element in b exists in a with at least as many occurrences.
        for (auto it : freqB) {
            // if the element in b is not present in a or has fewer occurrences
            // than required, return false
            if (freqA[it.first] < it.second) {
                return false;
            }
        }

        return true;
    }
};

// 2nd Approach: Using Set
class Solution {
  public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        unordered_set<int> s;

        // Insert all elements of 'a' into the set
        for (int i = 0; i < a.size(); i++) {
            s.insert(a[i]);
        }

        // Check if each element in 'b' exists in the set
        for (int i = 0; i < b.size(); i++) {
            if (s.find(b[i]) == s.end()) {
                return false; // Not found
            }
        }

        return true; // All elements found
    }
};
