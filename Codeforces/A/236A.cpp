#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string input; bool letters[26]; int counter = 0;
    for ( int i = 0; i < 26; ++i )
        letters[i] = false;
 
    getline(cin, input);
    int n = input.size();
 
    for ( int i = 0; i < n; ++i)
    {
        if ( letters[input[i] - 'a'] == false )
        {
            letters[input[i] - 'a'] = true;
            counter++;
        }
    }
 
    if ( counter % 2 == 1 ) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
 
    return 0;
}