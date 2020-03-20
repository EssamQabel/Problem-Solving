#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w; cin>>k>>n>>w;
    int temp = (k*((w*(w+1))/2));
    if (n >= temp) cout<<0<<endl;
    else cout<<temp-n<<endl;
    return 0;
}
