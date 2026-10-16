#include <bits/stdc++.h>
using namespace std;

void multiRecByLoop() {
    int n;
    cin >> n;
    int fibbo[n];
    fibbo[0] = 1, fibbo[1] = 1;
    cout << fibbo[0] << " " << fibbo[1] << " ";
    for (int i = 2; i <= n ; i++) {
    fibbo[i] = fibbo[i-1] + fibbo[i-2];
    cout << fibbo[i] << " ";
    }
}

void multiRecByLoop2() {
    int n;
    cin >> n;
    int a, b;
    a = 0, b = 1;
    for (int i = 1; i <= n ; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
}

int multiRecOnFibbo(int n) {
    if (n<=1) return n;
    int last = multiRecOnFibbo(n-1);
    int lastSecond = multiRecOnFibbo(n-2);
    
    return (last +  lastSecond);
}



int main () 
{
    // multiRecByLoop(); // using array
    // multiRecByLoop2(); // without loop

    int n;
    cin >> n;
    cout << multiRecOnFibbo(n); // Time Complexity = O(2^n)




    //
    return 0;
}