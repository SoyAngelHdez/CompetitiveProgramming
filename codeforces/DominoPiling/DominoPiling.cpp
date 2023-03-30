#include <bits/stdc++.h>
using namespace std;

int main(){
    //Get de data
    int n, m, res;
    cin >> n;
    cin >> m;

    //res = (floor(n/2)*m)+((n%2)*floor(m/2));
    //cout << res << endl;
    
    cout << floor((n*m)/2);
}