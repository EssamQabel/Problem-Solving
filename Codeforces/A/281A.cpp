#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string input;
    getline( cin, input );
 
    if ( input[0] >= 97 ) input[0] -= 32;
 
    for ( int i = 0; i < input.size(); ++i )
    {
        cout << input[i];
    }
 
    return 0;
}