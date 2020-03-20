#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    bool letters[26] = { false };
    string s; getline( cin, s );
    int count = 0, n = s.size();
 
    if ( n > 2 )
    {
        for ( int i = 1; i < n; i += 3 )
        {
            if ( !letters[s[i] - 'a'] )
            {
                letters[s[i] - 'a'] = true;
                count++;
            }
        }
        cout << count;
    }
    else
    {
        cout << 0;
    }
    return 0;
}