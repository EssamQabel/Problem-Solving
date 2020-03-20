#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <set>
#include <string>
#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define p_b push_back
using namespace std;

int main(){
    string s, ans;
    bool k = false;
    getline(cin, s);
    for (int i = 0; i < s.size(); i ++){
        if (s[i] == ' ') k = true;
        else if (s[i] == '.'){
            ans += s[i]; 
            k = true;
        }
        else if (s[i] == ','){
            ans += s[i]; 
            k = true;
        }
        else if (s[i] == '!'){
            ans += s[i]; 
            k = true;
        }
        else if (s[i] == '?'){
            ans += s[i]; 
            k = true;
        }
        else{
            if (k)
            ans += ' ';
            ans += s[i];
            k = false;
        }
    }
    cout << ans;
    return 0;
}