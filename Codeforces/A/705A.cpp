#include <iostream>
#include <sstream>
#include <string>
 
using namespace std;
 
int main()
{
    int n, i = 1;
    cin >> n;
    for ( ; i < n; ++i)
    {
        if ( i % 2 == 0) cout << "I love ";
        else cout << "I hate ";
        cout << "that ";
    }
    if ( i % 2 == 0) cout << "I love it";
    else cout << "I hate it";
 
    return 0;
}