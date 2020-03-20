#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int p = 0, m;
    string s; getline( cin, s );
    string t; getline( cin, t );
    m = t.size();
 
    for ( int i = 0; i < m; ++i )
        if ( t[i] == s[p] ) p++;
 
    cout << p+1;
 
    return 0;
}