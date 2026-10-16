#include <bits/stdc++.h>
using namespace std;

void arrinvbyloop()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = n - 1;
    while (l < r)
    {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
    for (int i : arr)
    {
        cout << i << " ";
    }
}

void arrinvbyrec(int arr[], int l, int r)
{
    if (l >= r)
        return;
    swap(arr[l], arr[r]);
    arrinvbyrec(arr, l + 1, r - 1);
}

void arrinvbyrec2(int arr[], int i, int n){
    if(i>=n/2) return;
    swap(arr[i], arr[n-1-i]);
    arrinvbyrec2(arr, i + 1, n);
}

bool checkPalindrome(string &str, int i){
    if (i>str.size()/2) return true;
    if (str[i] != str[str.size()-1-i]) return false;
    return checkPalindrome(str, i+1);
}

int main()
{

    // arrinvbyloop(); // Array inverse by loop

    /* int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    } */

    // arrinvbyrec(arr, 0, n-1); // array inverse by recursion many variable
    // arrinvbyrec2(arr,0,n);
     /* for (auto i : arr){
         cout << i << " ";
     } */

     string str;
     cin >> str;
     cout << checkPalindrome(str, 0);



    //
    return 0;
}