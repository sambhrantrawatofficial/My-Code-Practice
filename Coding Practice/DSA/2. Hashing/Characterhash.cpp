#include <bits/stdc++.h>
using namespace std;

void getbyloop()
{
    int cnt = 0;
    string s;
    char ch;
    cin >> s >> ch;
    for (int i = 0; i <= s.length() - 1; i++)
    {
        if (s[i]==ch)
        {
            cnt += 1;
        }
    }
    cout << cnt << endl;
}

int main()
{

    getbyloop(); // Get character freq by loop

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    

    return 0;
}