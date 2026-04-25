#include <iostream>
#include <vector>
using namespace std;

pair<int, int> TwoSum(vector<int>& nums, int target){
    for(int i=0; i < nums.size(); ++i){
        for (int j = i+1; j < nums.size(); ++j)
        {
            if(nums[i]+nums[j]==target){
                cout << "Found pair: " << i << " + " << j << " = " << target;
                return {i, j};
                system("sleep");
            }        
        }
        
    }
    return {};
};





int main(){


    vector<int> nums;
    cout << "Enter the tuple (enter 0 to stop): " << endl;
    int n=999;
    while (true)
    {
        cin >> n;
        if (n==0)
        {
            break;
        }
        nums.push_back(n);
    }


    int target;
    cout << "Enter the Target: ";
    cin >> target;

    TwoSum(nums, target);

    return {};
}