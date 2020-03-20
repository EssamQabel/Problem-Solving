#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k; cin>>n>>m>>k;
    cout<< (((k-1)/2)/m)+1 <<' '<< ((((k-1)/2)%m))+1 << ' ' << (k%2==0 ? 'R' : 'L');
    return 0;
}
