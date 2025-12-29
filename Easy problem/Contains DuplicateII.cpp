#include<iostream>
#include<unordered_map>
#include <vector>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums , int k)
{
    unordered_map<int,int> found;
    for(int i=0; i < nums.size() ; i++)
    {
        if(found.count(nums[i]) &&  i -found[nums[i]] <= k)
        {
            return true;
        }
        found[nums[i]] = i;
    }
    return false;
}

int main()
{
    return 0;
}