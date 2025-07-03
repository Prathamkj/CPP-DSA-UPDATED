349. Intersection of Two Arrays
// Using Map
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> a, b;
        vector<int> ans;
        // storing elements and counting freq of first array and seond array
        for (int num : nums1) {
            a[num]++;
        }

        for (int num : nums2) {
            b[num]++;
        }

        for (auto it : a) {
            // itterate over a 
            // b me find karo a 
            if (b.find(it.first) != b.end()) {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};

// Using Set
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Step 1: Create a set to store unique elements of nums1
        unordered_set<int> set1;
        for (int i = 0; i < nums1.size(); i++) {
            set1.insert(nums1[i]);
        }

        // Step 2: Create another set to store the intersection result
        unordered_set<int> resultSet;

        // Step 3: Traverse through nums2
        for (int i = 0; i < nums2.size(); i++) {
            int element = nums2[i];

            // Step 4: If the current element of nums2 exists in set1 (from nums1), add it to resultSet
            if (set1.find(element) != set1.end()) {
                resultSet.insert(element);
            }
        }

        // Step 5: Convert resultSet into a vector (because return type is vector)
        vector<int> result;
        for (int value : resultSet) {
            result.push_back(value);
        }

        return result;
    }
};
