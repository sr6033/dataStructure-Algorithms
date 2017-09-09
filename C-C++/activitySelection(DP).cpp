#include <bits/stdc++.h>
using namespace std;

int n;
int matrix[1000][1000];
struct activity{
	int s,f;
};

bool compare(activity a1, activity a2)
{
	return (a1.f < a2.f);
}

int activity_dp(activity a[], int i, int finish)
{
	if(i == n)
		return 0;
	
	int x = 0, y = 0;
	
	if(matrix[i][finish] != -1)
		return matrix[i][finish];
		
	x = activity_dp(a, i + 1, finish);
	
	if(a[i].s >= finish)
		y = activity_dp(a, i + 1, a[i].f) + 1;
		
	return matrix[i][finish] = max(x, y);
}

int main()
{
	cin>>n;
	cout<<"Start time <space> Finish time"<<endl;
	
	activity a[5];
	for(int i = 0; i < n; i++)
	{
		cin>>a[i].s;
		cin>>a[i].f;
	}
	memset(matrix, -1, sizeof(matrix));
	
	cout << activity_dp(a, 0, 0);
	
	return 0;
}