#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; string s; cin>>n>>s;
    int freq[26] = {0};
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.size(); ++i) freq[s[i]-'a'] = 1;
    for (int i = 0; i < (sizeof(freq)/sizeof(*freq)); ++i) if (freq[i]==0) { cout<<"NO"; return 0;}
    cout<<"YES";

    return 0;
}
