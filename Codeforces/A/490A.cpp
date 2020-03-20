#include <bits/stdc++.h>

using namespace std;

int minOfThree(int a, int b, int c);

int main()
{
    int n, t1, t2, t3, min;
    queue<int> ps;
    queue<int> ms;
    queue<int> pes;

    cin>>n; cin.ignore(1);
    int array[n];
    for(int i=0; i<n; i++) cin>>array[i];

    for(int i=0; i<n; i++)
        switch(array[i])
        {
        case 1:
            ps.push(i);
            break;
        case 2:
            ms.push(i);
            break;
        case 3:
            pes.push(i);
            break;
        }


    min = minOfThree(ps.size(), ms.size(), pes.size());
    cout<<min<<endl;
    for(int i=0; i<min; i++){

        cout<<ps.front()+1<<' '<<ms.front()+1<<' '<<pes.front()+1<<'\n';
        ps.pop(); ms.pop(); pes.pop();
    }

    return 0;
}

int minOfThree(int a, int b, int c)
{
    int min;

    if( a < b ) min = a;
    else min = b;

    if(c < min) min = c;

    return min;
}
