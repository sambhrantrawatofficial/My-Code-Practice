#include<bits/stdc++.h>
using namespace std;

void printSum(int i,int sum){
    if(i == 0) cout << sum << endl;
    printSum(i-1, sum+i);
}

int printSum2(int n){
    if(n == 0) return 0;
    return (n + printSum2(n-1));
}

int printFac(int n){
    if(n<1) return 1;
    return n*printFac(n-1);
    // tc => O(n), sc => O(n) 
}



int main(){
    
    int n;
    cin >> n;
    // printSum(n, 0); // parameterised
    // cout << printSum2(n); // Functional 
    cout << printFac(n);



    //
    return 0;
}