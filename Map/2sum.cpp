#include <bits/stdc++.h>
using namespace std;

vector<int> two_sum(vector<int> arr, int target)
{
    vector<int> res(2);
    map<int, int> map;

    for (int i = 0; i < arr.size(); i++)
    {
        map[arr[i]] = i;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (map.find(target - arr[i]) != map.end())
        {
            res[0] = i;
            res[1] = map[target - arr[i]];

            return res;
        }
    }

    return res;
}

int main()
{
    vector<int> arr = {1, 3, 3, 4};

    vector<int> res = two_sum(arr, 5);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}

int fun()
{
    

    return max(take, not_take)
}