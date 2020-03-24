#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

const int N = 1000;
vector< vector<int> > adjList;

int main()
{
    int n, m; cin>>n>>m;
    adjList = vector<vector<int>>(n);
    for (int i = 0; i < m; i++)
    {
        int l, r; cin>>l>>r;
        l--; r--;
        adjList[l].push_back(r);
        adjList[r].push_back(l);
    }
    vector<int> res(n, 1);
    int mn_subtree = (int) 1e6;
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if ((int)adjList[i].size() < mn_subtree)
        {
            mn_subtree = (int)adjList[i].size();
            idx = i;
        }
    }
    res[idx] = 0;
    for (int child : adjList[idx]) res[child] = 0;
    for (int node : res) cout<< node << ' ';
    return 0;
}
