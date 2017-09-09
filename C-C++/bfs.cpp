#include <stdio.h>
#include <iostream>
#include <queue>

#define WHITE 0
#define BLACK 1
#define GRAY  2

using namespace std;

struct vertex 
{
    int color,d,pred,name,part;
}v[10];

void BFS(int n,int adj[][10])
{
    for(int i = 2; i <= n; ++i) 
    {
        v[i].d = -100;
        v[i].pred = -10;
        v[i].name = i;
        v[i].color = WHITE;
    }

    v[1].d = 0;
    v[1].pred = -10;
    v[1].name = 1;
    v[1].color = GRAY;

    queue<vertex> q;
    q.push( v[1] );
    cout << "1 ";
    vertex u;

    while( !q.empty() ) 
    {
         u = q.front();
         q.pop();
         
         for(int i = 1; i <= n; ++i) 
         {
             if( adj[u.name][i] == 1 ) 
             {
                 if( v[i].color == WHITE )
                 {
                     v[i].color = GRAY;
                     v[i].d = u.d+1;
                     v[i].pred = u.name;
                     q.push( v[i] );
                     cout << v[i].name << " ";
                 }
             }
             u.color = BLACK;
         }
    }
}

int main() 
{
    int adj[10][10], n;
    cout << "No of Nodes: ";
    cin >> n;
   
    cout << "Enter Edges: " << endl;
    int x, y;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; j++)
            adj[i][j] = 0;


    cin >> x >> y;
    adj[x][y] = 1;
    adj[y][x] = 1;
    
    while(x != 0 && y != 0) 
    {
       cin >> x >> y;
       adj[x][y] = 1;
       adj[y][x] = 1;
    }

    cout << "Adjacency Matrix: " << endl;
    for(int i = 1; i <= n; i++)
    { 
        cout << endl;
        for(int j = 1; j <= n; j++)
            cout << adj[i][j] << " ";
    }
    
    cout << endl << "BFS:" << endl;
    BFS(n,adj);

   return 0;
}