#include <bits/stdc++.h>
using namespace std;

void countnextract()
{
    int x;
    cin >> x;
    // int cnt = 0;
    int cnt = (int)(log10(x) + 1); // TC => O(loga(n)) --where a = number by which it is divided
                                   // n = number which is divided by a
    while (x > 0)
    {
        int lastdigit = x % 10;
        cout << lastdigit << " "; // for extraction of digits
        x = x / 10;
        // cnt++; // for counting digits
    }
    cout << cnt;
}

void reverseNum()
{
    int n;
    cin >> n;
    int revNum = 0;
    while (n > 0)
    {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }
    cout << revNum;
}

bool palindrome()
{
    int n;
    cin >> n;
    int dup = n;
    int revNum = 0;
    while (n > 0)
    {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }
    if (dup == revNum)
    {
        cout << "true" << endl;
        return true;
    }
    else
    {
        cout << "false" << endl;
        return false;
    }
}

void armNum()
{
    int n;
    cin >> n;
    int dup = n;
    int sum = 0;
    while (n > 0)
    {
        int ld = n % 10;
        sum = sum + (ld * ld * ld);
        n = n / 10;
    }
    if (dup == sum)
        cout << "true" << endl;
    else
        cout << "false";
}

void printAllDiv()
{
    int n;
    cin >> n;
    /* for (int i = 1; i <=n; i++){
        int x = n%i;
        if (x == 0){
            cout << i << " ";
        }
    } */

    vector<int> vec;
    for (int i = 1; i*i <= n; i++) // i <= sqrt(n)
    {
        if (n % i == 0)
        {
            // cout << i << " ";
            vec.emplace_back(i);
            if (n / i != i)
            {
                // cout << n / i << " ";
                vec.emplace_back(n/i);
            }
        }
    }
    sort(vec.begin(), vec.end());
    auto it = vec.begin();
    for (auto it : vec){
        cout << it << " ";
    }
}

void isPrime(){
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i*i <= n; i++){
        if(n%i==0){
            cnt++;
        if((n/i)!=i){
            cnt++;
        }
        }
    }
    if (cnt == 2) cout << "It is prime number";
    else  cout << "Not a prime number";
}

void printHcf(){
    int n1, n2;
    int hcf = 1;
    cin >> n1 >> n2;
    for (int i = min(n1,n2); i >= 1; i--){
        if (n1%i==0 && n2%i==0){
            cout << i << endl;
            hcf = i;
            break;
        }
    }
}

void EuclideanAlgo(){
    int n1;
    int n2;
    cin >> n1 >> n2;
    while(n1>=0 && n2 >0)
    {
       if (n1>n2){
           n1 = n1%n2;
       }
       else{
           n2 = n2%n1;
       }
    }
    if (n1==0) cout << n2;
    else cout << n1;


}


int main()
{
    // countnextract();
    // reverseNum();
    // palindrome();
    // armNum();
    // printAllDiv();
    // isPrime();
    // printHcf();
    EuclideanAlgo();

    //
    return 0;
}