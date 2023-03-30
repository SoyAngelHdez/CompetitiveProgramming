#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, pass = 0;
    cin >> n;
    cin >> k;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        if(((k-1 > i)||(a[i] == a[k-1]))&&(a[i]>0))
            pass ++;
        else
            i = n;
    }
    
    cout << pass;
    
    
}