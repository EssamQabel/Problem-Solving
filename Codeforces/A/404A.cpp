#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>

using namespace std;

const int MAX = 301;
bool vis[MAX][MAX];
vector<string> vec;

int main(){
    int n; cin>>n;
    for (int x = 0; x < n; ++x){
        string temp; cin>>temp;
        vec.push_back(temp);
    }
    char dia = vec[0][0];
    char otr = vec[0][1];
    if (dia == otr){
        cout<<"NO"; return 0;
    }
    for(int x = 0, y = 0; x < n && y < n; ++x, ++y){
        vis[x][y] = true;
        if (vec[x][y] != dia){
            cout<<"NO"; return 0;
        }
    }
    for (int x = 0, y = n-1; x < n && y >= 0; ++x, --y){
        vis[x][y] = true;
        if (vec[x][y] != dia){
            cout<<"NO"; return 0;
        }
    }
    for (int x = 0; x < n; ++x){
        for (int y = 0; y < n; ++y){
            if (!vis[x][y]){
                if (vec[x][y] != otr){
                    cout<<"NO";return 0;
                    vis[x][y] = true;
                }
            }
        }
    }
    cout<<"YES";
    return 0;
}