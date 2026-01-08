Pascal Triangle
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 0; i < numRows; i++) {
            vector<int> row;
            row.push_back(1);  // First element is always 1

            for(int j = 1; j < i; j++) {
                // here we are taking it as the ith pattern 
                // Compute the inner elements
                int val = ans[i-1][j-1] + ans[i-1][j];
                // current = upper-left + upper-right
                row.push_back(val);
            }

            if(i > 0) {
                row.push_back(1);  // Last element is 1 if i > 0
            }

            ans.push_back(row);
        }
        return ans;
    }
};

// to find the value at a specific position in Pascal's Triangle
int nCr(int n, int r) {
    long long res = 1;
    // here n is row and r is column
    // running the loop through r means column
    // because nCr = n! / (r! * (n - r)!)
    // and we want ki columnn tak hi value jayee
    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int pascalTriangle(int r, int c) {
    int element = nCr(r - 1, c - 1);
    return element;
}

// to prin the nth row of Pascal's Triangle
void pascalTriangle(int n) {
    long long ans = 1;
    cout << ans << " "; // printing 1st element

    //Printing the rest of the part:
    for (int i = 1; i < n; i++) {
        ans = ans * (n - i);
        ans = ans / i;
        cout << ans << " ";
    }
    cout << endl;
}

int main()
{
    int n = 5;
    pascalTriangle(n);
    return 0;
}