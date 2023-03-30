#include <bits/stdc++.h>
using namespace std;

void abreviate(string word){

    int size = word.length();
    if(size > 10)
        cout << word[0] << size-2 << word[size-1] << endl;
    else
        cout << word << endl;

}

int main(){

    int quanWords;
    cin >> quanWords;
    string words[quanWords];
    for (int i = 0; i < quanWords; i++)
    {
        cin >> words[i];
    }

    for (int i = 0; i < quanWords; i++)
    {
        abreviate(words[i]);
    }

}