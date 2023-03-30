#include <bits/stdc++.h>
using namespace std;

int main(){
    double val[3];
    cin >> val[0];
    cin >> val[1];
    cin >> val[2];
    long long res = ceil(val[0]/val[2])*ceil(val[1]/val[2]);

    cout << res << endl;
}