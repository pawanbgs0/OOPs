#include <bits/stdc++.h> 

int helper(int index, int maxWeight, vector<int> weight, vector<int> value, vector<vector<int>> &store)
{
    if (index == 0)
    {
        if (weight[index] <= maxWeight)
            return value[index];
        
        return 0;
    }
    
    if (store[index][maxWeight] != -1)
       return store[index][maxWeight];
    
    
    int take = INT_MIN;
    if (weight[index] <= maxWeight)
        take = value[index] + helper(index - 1, maxWeight - weight[index], weight, value, store);
        
    int not_take = 0 + helper(index - 1, maxWeight, weight, value, store);
    
    store[index][maxWeight] = max(take, not_take);
    
    return max(take, not_take);
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
    vector<vector<int>> store(n, vector<int> (maxWeight + 1, -1));
    
    return helper(n - 1, maxWeight, weight, value, store);
}