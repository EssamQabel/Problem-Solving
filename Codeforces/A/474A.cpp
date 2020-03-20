#include <bits/stdc++.h>

#define all(v) ((v).begin()), ((v).end())

using namespace std;

int ArrayIndex( string s, char c )
{
    for ( int i = 0; i < s.size(); i++ )
        if ( s[i] == c ) return i;
    return -1;
}

int main()
{
    char arr[] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i',
                  'o', 'p', 'a', 's', 'd', 'f', 'g', 'h',
                  'j', 'k', 'l', ';', 'z','x', 'c',
                  'v', 'b', 'n', 'm', ',', '.', '/'};
    char rl;
    string input;

    cin >> rl; cin.ignore();
    getline( cin, input );

    for ( int i = 0; i < input.size(); i++ )
    {
        int index = ArrayIndex( arr, input[i] );
        if ( rl == 'R' ) cout << arr[index - 1];
        else cout << arr[index + 1];
    }

    return 0;
}
