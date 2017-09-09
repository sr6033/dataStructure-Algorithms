#include <bits/stdc++.h>

#define MEM(a,b) memset((a),(b),sizeof(a))

#define INF (1<<28)
#define sz 105

using namespace std;

int color[sz];
int parent[sz];
int tCost[sz];
int minCost;

struct Node
{
    int u,cost;
    Node();
    Node(int _u, int _cost)
    {
        u = _u;
        cost = _cost;
    }

    bool operator <(const Node& data) const
    {
        return cost > data.cost;
    }
};

vector<Node> vecs[sz];

void init()
{
    MEM(color, 0);
    for(int i = 0; i < sz; i++) 
        tCost[i] = INF;
    minCost = 0;
}

void MSTPrims(int mNodes, int start)
{
    init();

    priority_queue<Node> PQ;
    parent[start] = -1; 
    PQ.push(Node(start, 0));

    tCost[start] = 0;
    int cnt = 0;
    while(cnt != mNodes && !PQ.empty())
    {
        Node N = PQ.top();
        PQ.pop();
        if(color[N.u]) continue;
        cnt++;
        minCost += N.cost;
        color[N.u] = 1;
        for(int i = 0; i < vecs[N.u].size(); i++)
        {
            Node nN = vecs[N.u][i];
            if(color[nN.u]) continue;

            PQ.push(nN);
            if(nN.cost < tCost[nN.u])
            {
                tCost[nN.u] = nN.cost;
                parent[nN.u] = N.u;
            }
        }
    }
}

/*
void printMST(int nodes)
{
    //only nodes colored is connected to MST
    for(int i=1; i<=nodes; i++)
        if(color[i]==1)
            if(parent[i]!=-1)
                cout << i << "-->" << parent[i] << endl;
    return;
}
*/

int main()
{
    int nodes, edges;
    int u, v, cost;
    cin >> nodes >> edges;
    for(int i = 0; i < edges; i++)
    {
        cin >> u >> v >> cost;
        vecs[u].push_back(Node(v,cost));
        vecs[v].push_back(Node(u,cost)); 
    }

    MSTPrims(nodes, 1); 

    cout << "\nMinimum Cost: " << minCost << endl;

    //printMST(nodes);

    return 0;
}