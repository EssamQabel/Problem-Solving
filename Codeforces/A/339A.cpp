#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; getline( cin, s );
    int n = ( s.size() / 2 ) + 1;
    int numbers[n];
    for ( int i = 0, j = 0; j < n; i += 2, j++ )
        numbers[j] = s[i] - 48;
    sort( numbers, numbers+n );
    for ( int i = 0; i < n-1; i++ )
        cout << numbers[i] << '+';
    cout << numbers[n-1];
}