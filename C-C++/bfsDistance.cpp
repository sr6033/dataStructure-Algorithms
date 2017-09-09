#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <utility>
 
using namespace std;
 
void BFS(vector<list<int> > adjList, int parent[], int d[], int start)
{
    list<int>::iterator itr;
 
    int dist;
 
    dist = 0;
    d[start] = dist;
 
    list<int> VertexQ;
 
    VertexQ.push_back(start);
 
    while (!VertexQ.empty()) 
    {
        int newVertex = VertexQ.front();
 
        itr = adjList[newVertex].begin();
 
        while (itr != adjList[newVertex].end()) 
        {
            if (d[*itr] == -1) 
            {            
                d[*itr] = dist + 1;         
                parent[*itr] = newVertex;     
                VertexQ.push_back(*itr);
            }
            ++itr;
        }
 
        VertexQ.pop_front();
        ++dist;
    }
}
 
int main()
{
    int vertices, edges, v1, v2;
 
    cout << "Enter the Number of Vertices: " << endl;
    cin >> vertices;
 
    cout << "Enter the Number of Edges: " << endl;
    cin >> edges;
 
    vector< list<int> > adjList(vertices + 1);
 
    cout << "Enter the Edges V1 <space> V2" << endl;
 
    for (int i = 1; i <= edges; ++i) 
    {
        cin >> v1 >> v2;
        adjList[v1].push_back(v2);
        adjList[v2].push_back(v1);
    }
 
    int parent[vertices + 1];
    int d[vertices + 1];
 
    for (int i = 1; i <= vertices; ++i) 
    {
        parent[i] = 0;
        d[i] = -1;
    }
 
    cout << "Enter the SOURCE <space> DESTINATION: ";
    cin >> v1 >> v2;
 
    BFS(adjList, parent, d, v1);
    cout << "Distance: " << d[v2] << endl;
    
    return 0;
}