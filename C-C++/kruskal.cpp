#include <iostream>
#include <vector>
#include <list>
#include <limits>
#include <utility>

using std::vector;
using std::pair;
using std::list;
using std::make_pair;

typedef vector<int> vint;
typedef pair<double, pair<int, int>> edge;
typedef list<edge> edges;

vint rank;
vint parent;

void create_set(int x) 
{
  rank[x] = 0;
  parent[x] = x;
}

int find_set(int x) 
{
  if (x != parent[x]) 
  	parent[x] = find_set(parent[x]);
  return parent[x];
}

void merge_set(int x, int y) 
{
  if (rank[x] > rank[y]) 
  	parent[y] = x;
  else 
  	parent[x] = y;
  if (rank[x] == rank[y]) 
  	++rank[y];
}

double kruskal(int n, edges& es) 
{
  rank.resize(n);
  parent.resize(n);
  double cost = 0;
  int remaining = n - 1;
  for(int i = 0; i < n; i++) 
  	create_set(i);
  es.sort();
  for(auto& edge : es) 
  {
    int u = find_set(edge.second.first);
    int v = find_set(edge.second.second);
    if (u == v) continue;
    merge_set(u, v);
    cost += edge.first;
    if (!--remaining) break;
  }

  if (remaining) return std::numeric_limits<double>::infinity();
  return cost;
}

int main() {
  int n, m;
  std::cin >> n >> m;
  edges es;
  for(int i = 0; i < m; i++) 
  {
    double weight;
    int u, v;
    std::cin >> weight >> u >> v;
    es.push_back(make_pair(weight, make_pair(u, v)));
  }

  std::cout << "Cost of MST: " << kruskal(n, es) << std::endl;
}