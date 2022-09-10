#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums;
    vector<int> nums3(5);

    // vector<vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>>>> nums;

    vector<vector<int>> nums;

    cout << "The size of Nums is: " << nums.size() << endl;

    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    cout << "The size of Nums is: " << nums.size() << endl;
    cout << nums[0];

    nums.clear();

    return 0;
}