#include<iostream>
using namespace std;

void printName(int i, int n)
{
    if (i<1) return;
    cout << i;
    printName(i-1, n);
}

void print1N(int i, int n)
{
    if (i>n) return;
    print1N(i+1, n);
    cout << i << endl;
}


int main(){
    int n;
    cin >> n;
    // printName(n, n);
    print1N(1,n);


    //
    return 0;
}