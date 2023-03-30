#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    if (((size % 2) != 0) || size == 2)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
