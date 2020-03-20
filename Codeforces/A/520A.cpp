#include <iostream>
#include <algorithm>
#define all(v) (v).begin(), (v).end()
using namespace std;

int main(){
    int n; string s; string a = "abcdefghijklmnopqrstuvwxyz";
    cin >> n >> s;
    transform(all(s), s.begin(), ::tolower);
    for (int i = 0; i < 26; ++i)
        if (s.find(a[i])==string::npos){
            cout<<"NO"; return 0;
        }
    cout<<"YES";
    return 0;
}