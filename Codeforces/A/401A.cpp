#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, sum=0; cin>>n>>x;
    for (int i = 0; i < n; ++i){
        int temp; cin>>temp; sum+=temp;
    }
    sum=abs(sum);
    if (sum == 0) cout<<0;
    else if (sum < x) cout<<1;
    else cout<<ceil(sum/(double)x);
    return 0;
}
