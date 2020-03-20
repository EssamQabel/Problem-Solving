#include <bits/stdc++.h>
#define arr_sz(arr) sizeof(arr)/sizeof(*arr)
using namespace std;
int pre[100009] = {0};

int main()
{
    int n; cin>>n;
    string s; cin>>s;
    char prev = s[0];
    int cnt = 1;
    for (int i = 1; i < n; i++){
        if (s[i]=='1' && prev=='1'){
            cnt += 1;
        }
        else if (s[i]=='0' && prev=='1'){
            cout<<cnt; cnt = 0; prev=='0';
        }
        else if (s[i]=='0' && prev=='0'){
            cout<<'0';
        }
        else if (s[i]=='1' && prev=='0'){
            prev = '1'; cnt = 1;
        }
    }
    cout<<cnt;
    return 0;
}
