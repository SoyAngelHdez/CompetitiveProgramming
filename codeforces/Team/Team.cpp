#include <bits/stdc++.h>
using namespace std;

int main(){

    int problems;
    cin >> problems;
    int impProblems = 0;
    int aux;
    for (int i = 0; i < problems; i++)
    {
        aux = 0;
        for (int j = 0; j < 3; j++)
        {
            int aux2;
            cin >> aux2;
            aux += aux2;
        }
        if(aux>1)
            impProblems++;
    }
    cout << impProblems;

}