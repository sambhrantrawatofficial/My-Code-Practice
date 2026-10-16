#include <bits/stdc++.h>
using namespace std;

void print(int &cnt)
{
    if (cnt == 3) return;
        cout << cnt << endl;
        cnt++;
        print(cnt);
}

int main()
{
    cout << "Hello World" << endl;
    int cnt = 0;
    print(cnt);
    cout << "Final value is " << cnt << endl;

    //
    return 0;
}