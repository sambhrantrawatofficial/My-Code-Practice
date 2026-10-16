#include <bits/stdc++.h>
using namespace std;

void getbyloop()
{
    int cnt = 0;
    int x;
    cin >> x;
    int arr[] = {1, 2, 5, 2, 1, 2};
    for (int i = 0; i <= size(arr) - 1; i++)
    {
        if (x == arr[i])
        {
            cnt += 1;
        }
    }
    cout << cnt << endl;
}

int main()
{

    // getbyloop(); // Get number freq by loop

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }
    /*  inside main int array size = 10^6 max  limit
        Globally size of array = 10^7 max limit
        bool array size int int main = 10^7 max limit
        Globally bool array size = 10^7 max limit
    */



    return 0;
}