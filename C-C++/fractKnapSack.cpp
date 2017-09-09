#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
double store[1000];

int partition(int lb,int ub,vector<double>& weight,vector<double>& profit,vector<double>& profitperweight)
{
	int pivot = profitperweight[ub];
	int i = lb-1;
	for(int j = lb;j<ub;j++)
	{
		if(profitperweight[j] > pivot)
		{
		    i++;
			swap(profitperweight[i],profitperweight[j]);
			swap(weight[i],weight[j]);
			swap(profit[i],profit[j]);
		}
	}
	swap(profitperweight[i+1],profitperweight[ub]);
	swap(weight[i+1],weight[ub]);
	swap(profit[i+1],profit[ub]);
	return (i+1);
}

void quickSort(int lb,int ub,vector<double>& weight,vector<double>& profit,vector<double>& profitperweight)
{
	if(lb < ub)
	{
		int p = partition(lb,ub,weight,profit,profitperweight);
		quickSort(lb,p-1,weight,profit,profitperweight);
		quickSort(p+1,ub,weight,profit,profitperweight);
	}
}
int knapsack(vector<double>& weight,double knapsack_weight)
{
    double wt = 0.0;
    int i = 0;
    while(wt < knapsack_weight)
    {
        if(wt+weight[i] <= knapsack_weight)
        {
            store[i] = 1.0;
            wt = wt + weight[i];
            i++;
        }
        else
        {
            double res=(knapsack_weight - wt)/weight[i];
            store[i] = res;
            wt = knapsack_weight;
        }
    }
    return i+1;
}

int main() 
{
	int n;
	cout << "\n Number of objects: ";
	cin >> n;
	double knapsack_weight;
	cout << "\n Enter the weight of the knapsack: ";
	cin >> knapsack_weight;
	vector<double> weight,profit,profitperweight;
    cout<< "Weight | Price" << endl;
	for(int i=0;i<n;i++)
    {
        double x,p,res;
        cin >> x;
        weight.push_back(x);
        cin >> p;
        profit.push_back(p);
        res = profit[i]/weight[i];
        profitperweight.push_back(res);
    }
    quickSort(0,n-1,weight,profit,profitperweight);
    
    int sz = knapsack(weight,knapsack_weight);

    double total = 0.0;
    for(int i = 0; i < n; i++)
    {
        double res = store[i]*profit[i];
        total += res;
    }
    cout << "Total profit: " << total << endl;
    return 0;
}

