#include <bits/stdc++.h>
 
using namespace std;
 
void ToLowerCase( string &input , int size);
 
int main()
{
    string st1, st2;
    getline(cin, st1);
    getline(cin, st2);
    ToLowerCase(st1, st1.size());
    ToLowerCase(st2, st2.size());
 
    if ( st1 < st2 ) cout << "-1";
    else if ( st2 < st1 ) cout << "1";
    else cout << "0";
 
    return 0;
}
 
void ToLowerCase( string &input , int size)
{
    for ( int i = 0; i < size; ++i)
        if ( input[i] < 97 )
            input[i] += 32;
}