// 204 count primes -- sieve of eratosthenes approach

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isprime(n+1,true);\
        int count = 0;
        for(int i=2;i<n;i++){
            // 1st loop is for the traverse
            if(isprime[i]){
                count++;
            }
            // this second loop is for the removing of non prime numbers
            // means removing multiples of prime numbers that are non prime
            for(int j=2*i;j<n;j=j+i){
                isprime[j] = false;
            }
            // j is incremented by i in each iteration, which ensures all multiples 
            // of eg (2i , 3i , 4i , 5i , 6i.....)
        }
        return count;
    }
};
// 9 . palindrome Number
class Solution {
public:
 int reverse(int x) {
        int revNo = 0;
        while(x != 0){
            int digit = x % 10;
            if(revNo > INT_MAX/10 || revNo < INT_MIN/10){
                return 0;
            }
            revNo = (revNo * 10) + digit;
            x = x / 10;
        }
        return revNo;
    }
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
            // -ve value ke liye palindrome calculate nhi kartee
        }
        int revNo = reverse(x);
        return x == revNo;
    }
};