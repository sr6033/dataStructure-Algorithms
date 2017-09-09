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
	return parent[v] = find_set(parent[v]);
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

	int flag[n];
	for(int i = 0; i < n ; i++)
		flag[i] = 0;

	for(int i = 0; i < n; i++)
	{
		cout << "{";
		for(int j = 0; j < n; j++)
		{
			if(parent[s[i]] == parent[s[j]] && flag[j] != 1)
			{	
				flag[j] = 1;
				cout << " " << s[j] << " ";
			}
		}
		cout << "}";
	}

	return 0;
}
