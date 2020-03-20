#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c, v0, v1, a, l, alpha=1, days=0;
    cin>>c>>v0>>v1>>a>>l;
    if (c <= v0) {cout<<1; return 0;}
    while(c>0){
        if (!days){
            int x = v0;
            if (x > v1) x = v1;
            c -= x;
        }
        else{
            c += l;
            int x = v0 + alpha * a;
            if (x > v1) x = v1;
            c -= x;
            alpha++;
        }
        days++;
    }
    cout<<days;
    return 0;
}
