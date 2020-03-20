#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cmath>
#include <map>
#include <utility>

using namespace std;

int main()
{
   long long l, r; cin>>l>>r;
   if (l%2!=0) l++;
   if (abs(l-r)<2) cout<<"-1";
   else cout<<l<<' '<<l+1<<' '<<l+2;
}