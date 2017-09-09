#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <vector>
#include <list>
#include <utility>
 
using namespace std;
 
int main()
{
    int vertices, edges, v1, v2, weight;
     
    cout << "Enter the Number of Vertices: ";
    cin >> vertices;
     
    cout << "Enter the Number of Edges: ";
    cin >> edges;
 
    vector< list< pair<int, int> > > adjList(vertices + 1);
     
    cout << "Enter the Edges V1 <space> V2 <space> Weight" << endl;
     
    for (int i = 1; i <= edges; ++i) 
    {
        cin >> v1 >> v2 >> weight;
        adjList[v1].push_back( make_pair ( v2, weight ) );
        adjList[v2].push_back( make_pair ( v1, weight ) );
    }
     
    cout << endl << "The Adjacency List: " << endl;

    for (int i = 1; i < adjList.size(); ++i) 
    {
        cout << "[" << i << "] ";
         
        list< pair<int, int> >::iterator itr = adjList[i].begin();
         
        while (itr != adjList[i].end()) 
        {
            printf(" -> %d(%d)", (*itr).first, (*itr).second);
            ++itr;
        }
        cout << endl;
    }

    int m[vertices + 1][vertices + 1];
    memset(m, 0, sizeof(m));

    for (int i = 1; i < adjList.size(); ++i) 
    {
        list< pair<int, int> >::iterator itr = adjList[i].begin();
        while (itr != adjList[i].end()) 
        {
            m[i][(*itr).first] = 1;
            ++itr;
        }
    }

    int count = 0;
    for(int i = 0; i <= vertices ; i++)
    {
        for(int j = 0; j <= vertices; j++)
        {
            if( i <= j && m[i][j] == 1)
                count++;
        }     
    }
    cout << endl << "No. of Edges: " << count << endl;

    return 0;
}