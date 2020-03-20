#include <bits/stdc++.h>
using namespace std;
bool findInStr( string s, char c );
int main()
{
    int n , x = 0; string s;
    cin >> n; cin.ignore();
    for ( int i = 0; i < n; i++)
    {
        getline( cin, s );
        if ( findInStr( s, '+') ) x++;
        else if ( findInStr( s, '-') ) x--;
    }
    cout << x;

    return 0;
}

bool findInStr( string s, char c )
{
    for ( int i = 0; i < 2; i++ )
        if ( (char)s[i] == (char)c )
            return true;
    return false;
}
