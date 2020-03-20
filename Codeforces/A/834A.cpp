#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, r, n;
    char cl, cr;
    bool cw=false, ccw=false;
    cin>>cl>>cr>>n;
    map<char, int> m;
    m['v'] = 0; m['<'] = 1; m['^'] = 2; m['>'] = 3;
    l = m[cl]; r = m[cr];
    if ((l+n)%4 == r) cw=true;
    if ( (((l-n)%4)+4)%4 == r) ccw=true;
    if ( (cw && ccw) || (cw==false && ccw==false)) cout<<"undefined";
    else if (cw) cout<<"cw";
    else cout<<"ccw";
    return 0;
}
