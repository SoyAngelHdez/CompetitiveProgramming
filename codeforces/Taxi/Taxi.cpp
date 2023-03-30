#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a[4]={0,0,0,0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a[temp-1]++;
    }

    int aux = a[0];
    for (int i = 0; i < aux; i++)
    {
        if(a[2]>0){
            a[3]++;
            a[2]--;
            a[0]--;
        }else
            if(a[0]>1){
                a[1]++;
                a[0] -= 2;
                i++;
            }else
                if((a[0] == 1)&&(a[1]>0)){
                    a[2]++;
                    a[1]--;
                    a[0]--;
                }

        if(a[1]>1){
            a[3] += floor(a[1]/2);
            a[1] = a[1]%2;
        }
    }

    if(a[1]>1){
        a[3] += floor(a[1]/2);
        a[1] = a[1]%2;
    }

    // cout << a[0] << endl;
    // cout << a[1] << endl;
    // cout << a[2] << endl;
    // cout << a[3] << endl;

    cout << a[0]+a[1]+a[2]+a[3] << endl;
}