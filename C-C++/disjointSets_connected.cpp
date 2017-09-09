#include <iostream>
using namespace std;

const int MAXN = 1000;
 
int parent[MAXN], Rank[MAXN];
 
void make_set(int v) 
{
	parent[v] = v;
	Rank[v] = 0;
}
 
int find_set(int v) 
{
	if (v == parent[v])
		return v;
	return parent[v] = find_set (parent[v]);
}
 
void union_sets(int a, int b) 
{
	a = find_set (a);
	b = find_set (b);
	if (a != b) 
	{
		if (Rank[a] < Rank[b])
			swap (a, b);
		parent[b] = a;
		if (Rank[a] == Rank[b])
			++Rank[a];
	}
}

int main()
{
	cout << "Enter the nodes: ";
	int n;
	cin >> n;
	int s[n];

	for(int i = 0; i < n ; i++)
		cin >> s[i];

	for(int i = 0; i < n ; i++)
		make_set(s[i]);

	int ch = 1;
	for(int i = 0; i < n ; i++)
	{
		cout << "Enter the Parent for Node " << s[i] << " : ";
		int p;
		cin >> p;
		union_sets(p, s[i]);
	}

	cout << "Enter the node to find it's connected nodes: ";
	int node;
	cin >> node;

	cout << node << " is connected with: ";
	for(int i = 0; i < n; i++)
	{
		if(find_set(node) == find_set(s[i]))
		{
			if(node != s[i])
				cout << s[i] << " ";
		}
	}

	return 0;
}