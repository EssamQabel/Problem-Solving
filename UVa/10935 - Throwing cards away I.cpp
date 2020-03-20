#include <bits/stdc++.h>
using namespace std;
void clear(queue<int> &q){ queue<int> e; swap(q, e); }
int main()
{
    int n;
    cin>>n;
    queue<int> q;
    vector<int> dis;
    while(n){
        if ( n == 1) {
            cout<<"Discarded cards:"<<'\n';
            cout<<"Remaining card: "<<1<<'\n';
        }
        else{
            clear(q);
            dis.clear();
            for (int i = 1; i <= n; i++) q.push(i);
            while( q.size() != 1){
                dis.push_back(q.front());
                q.pop();
                q.push(q.front());
                q.pop();
            }
            cout<<"Discarded cards: ";
            for (int i = 0; i < dis.size()-1; i++) cout<<dis[i]<<", ";
            cout<<dis.back()<<'\n';
            cout<<"Remaining card: "<<q.front()<<'\n';
        }
        cin>>n;
    }
    return 0;
}
