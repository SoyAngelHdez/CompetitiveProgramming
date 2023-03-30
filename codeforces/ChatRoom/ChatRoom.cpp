#include <bits/stdc++.h>
using namespace std;

//ESTO ES TWO POINTERS

int main(){
    string word, hello = "hello";
    cin >> word;

    int j = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if( word[i]==hello[j] && j != 5){
            j++;
        }
    }
    if(j==5){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
}