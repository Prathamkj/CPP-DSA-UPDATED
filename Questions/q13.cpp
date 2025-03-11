// Array Insertion
/*
FIRST APPROACH
int search(vector<int>& arr1, int n, int m,vector<int>&arr2)
{
    vector<int> answer;
    for(int i=0;i<n;i++){
        int element = arr1[i];
        for(int j=0;j<m;j++){

            if(element>arr2[j]){
                break;
            }
            if(element == arr2[j]){
                answer.push_back(element);
                arr2[j] = -1234334;
                break;
            }

        }

    }
    return answer;
 * /

//  OPTIMUM SOLUTION
*/
int i = 0;
int j = 0;
vector<int> answer;
while(i<n && j<m) {
    if (arr[i] == arr[j]) {
        answer.push_back(arr[i]);
        i++;
        j++;
        // print
    }
    else if (arr[i] < arr[j]) {
        i++;
    }
    else{
        j++;
    }

}