#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int pointer = 0, index, distance, total = 0, n;
    string s;
    getline( cin, s );
    n = s.size();
    for ( int i = 0; i < n; ++i )
    {
        index = s[i] - 'a';
        distance = abs( pointer - index );
        if ( distance > 13 )
            total += 26 - distance;
        else
            total += distance;
        pointer = index;
    }
    cout << total;
 
    return 0;
}