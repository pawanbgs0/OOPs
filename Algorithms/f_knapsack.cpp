#include <bits/stdc++.h>
using namespace std;

struct Items
{
    int id;
    int weight;
    int value;
    float ratio;
};

vector<Items> take_input()
{
    int size;
    vector<Items> data;
    
    cout << "Enter the size of data: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        Items temp;

        cout << "Enter Id: ";
        cin >> temp.id;

        cout << "Enter Weight: ";
        cin >> temp.weight;

        cout << "Enter Value: ";
        cin >> temp.value;

        data.push_back(temp);
    }

    return data;
}


bool comp(Items &I1, Items &I2)
{
    return I1.ratio > I2.ratio;
}

int f_knapsack(vector<Items> data, int bag_limit)
{
    float total_profit = 0;
    int current_limit = 0;
    int index = 0;

    // calculating ratio
    for (int i = 0; i < data.size(); i++)
    {
        data[i].ratio = data[i].value / (data[i].weight * 1.0);
    }

    sort(data.begin(), data.end(), comp);

    for (index = 0; index < data.size(); index++)
    {
        if (current_limit <= bag_limit)
        {
            total_profit += data[index].value;
            current_limit += data[index].weight;    
        }

        else 
            break;
    }
    
    if (index < data.size())
    {
        int left_limit = bag_limit - current_limit;
        total_profit += left_limit * data[index].ratio;
    }

    return total_profit;
}


int main()
{
    vector<Items> data;
    int bag_limit;

    cout << "Enter the robber's bag limit: ";
    cin >> bag_limit;

    data = take_input();

    cout << "The maximum profit that robber can steal is " << f_knapsack(data, bag_limit) << "." << endl;

    return 0;
}