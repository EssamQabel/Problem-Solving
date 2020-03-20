#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a; bool r=true;
    cin>>n;
    for (int i = 0 ; i < n; ++i){
        cin>>a;
        if (abs(a)%2==0) cout<<a/2<<endl;
        else{
            if (r) { cout<< (a+1)/2<<endl; r=false; }
            else { cout<<(a-1)/2<<endl; r=true;}
        }
    }

    return 0;
}
