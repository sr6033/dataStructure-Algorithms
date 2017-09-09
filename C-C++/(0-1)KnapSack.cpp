#include <iostream>
using namespace std;

int knapsack(int weight[], int profit[], int n, int w_max)
{
    int w, i , p[n+1][w_max+1];
    for(i = 0; i <= w_max; i++)
        p[0][i] = 0;
    for(i = 1; i <= n; i++)
    {
        p[i][0] = 0;
        for(w = 1; w <= w_max; w++)
        {
            if (weight[i] <= w)
            {
                if(( profit[i] + p[i-1][w-weight[i]]) > p[i-1][w])
                    p[i][w] = profit[i] + p[i-1][w-weight[i]];
                else
                    p[i][w] = p[i-1][w];
            }
            else
                p[i][w] = p[i-1][w];
        }
    }
    return (p[n][w_max]);
}
int main()
{

    int profit[100], weight[100], w_max, n, i, total;
    cout << "Enter no of items: ";
    cin >> n;
    
    cout << "Enter profits respectively: ";
    for(i = 0; i < n; i++)
        cin >> profit[i];
    
	printf("Enter the weights respectively: ");
    for(i = 0; i < n; i++)
        cin >> weight[i];
    
	cout << "Enter max capacity: ";
    cin >> w_max;
    
	total = knapsack(weight, profit, n, w_max);
    cout << "\nTotal profit: " << total << endl;
    
	return 0;
}
