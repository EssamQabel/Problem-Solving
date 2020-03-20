#include <iostream>
#include <vector>
#include <algorithm>

#define all(v) (v).begin(), (v).end()
#define REP(i, a, b) for(int i=int(a);i<int(b);++i)
#define vi vector<int>
#define p_b push_back

using namespace std;

int main()
{
    long int n,x,cnt=0;
    cin>>n>>x;
    REP(i, 1, n+1)
        if(x%i==0 && x/i<=n)
            cnt++;
    cout<<cnt;
}