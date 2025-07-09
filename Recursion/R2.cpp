#include <iostream>
using namespace std;

int fibonacci(int n){
    // nth fibonnaci number
    if (n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
// counnt ways to reach the nth stairs
int count_ways(int nstairs){
    if(nstairs < 0){
        return 0;
    }
    if(nstairs == 0){
        return 1;
    }
    return count_ways(nstairs - 1) + count_ways(nstairs - 2);
}

//Sum of Natural Numbers
int sum_natural(int n){
    if(n == 0){
        return 0;
    }
    return n + sum_natural(n - 1);
}


int main(){
    int n;
    cout<<"Enter the number of n ";
    cin >> n;
    int ans = fibonacci(n);
    cout<<ans<<endl;
    int ans1 = sum_natural(n);
    cout<<ans1<<endl;
}