#include <iostream>
#include <array>
#include <vector>
#include <queue>
using namespace std;
int main()
{
    int n,m,q;
    array<vector<int>,100001> g;
    array<array<int,2>,100001> dis={};
    cin>>n>>m>>q;
    for(int i=0;i<m;++i)
    {
        int u,v;
        cin>>u>>v;
        g[u].emplace_back(v);
        g[v].emplace_back(u);
    }
    //dijkstra
    queue<int>qu;
    array<bool,100001>reach={};
    qu.push(1);
    while(!qu.empty())
    {
        int current_v=qu.front();
        qu.pop();
        for(auto i=g[current_v].begin();i!=g[current_v].end();++i)
        {

        }
    }

    for(int i=0;i<q;++q)
    {
        
    }
}