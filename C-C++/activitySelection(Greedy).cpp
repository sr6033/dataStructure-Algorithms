#include <bits/stdc++.h>
using namespace std;

int i, n;
struct activity
{
	int s,f;
};

bool compare(activity a1, activity a2)
{
	return (a1.f < a2.f);
}

void activity_greedy(activity a[], int m)
{
	if(m >= n)
		return;

	if(a[m].s >= a[i].f)
	{
		if(i == 0)
			cout << "{" << a[i].s << "," << a[i].f << "} ";
		
		cout << "{" << a[m].s << "," << a[m].f << "} ";
		i = m;
		activity_greedy(a, m + 1);
	}
	else
		activity_greedy(a, m + 1);
}

int main()
{
	cin >> n;
	activity a[n];
	
	for(int i = 0; i < n; i++)
		cin >> a[i].s >> a[i].f;
	
	sort(a, a+n, compare);
	activity_greedy(a, 0);

	return 0;
}