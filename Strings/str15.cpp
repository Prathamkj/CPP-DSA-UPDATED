165. Compare Version Numbers

class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n = version1.size();
        int m = version2.size();
        int i = 0, j = 0;   // pointers for version1 and version2
        // i and j are the itterators // for each  of the string

        while (i < n || j < m) {
            // if i < n or j < m
            long num1 = 0, num2 = 0;

            // extract one number from version1
            while (i < n && version1[i] != '.') {
                // here we have to take care for the dot also ... okk
                num1 = num1 * 10 + (version1[i] - '0');
                i++;
            }

            // extract one number from version2
            while (j < m && version2[j] != '.') {
                num2 = num2 * 10 + (version2[j] - '0');
                j++;
            }

            if (num1 > num2) return 1;
            if (num1 < num2) return -1;

            // skip dots
            i++;
            j++;
        }
        return 0;
    }
};
