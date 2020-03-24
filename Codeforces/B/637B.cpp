#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main()
{
    int n; cin>>n;
    map<string ,bool> printed;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        string f; cin>>f;
        v[i] = f;
        printed[ v[i] ] = false;
    }
    for (int i = n-1; i >= 0; i--)
    {
        if (!printed[ v[i] ])
        {
            cout<< v[i] << '\n';
            printed[ v[i] ] = true;
        }
    }
    return 0;
}
