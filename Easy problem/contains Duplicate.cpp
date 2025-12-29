#include<iostream>
#include<unordered_set>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int>& nums)
{
    unordered_set<int> seen;
    for(int n : nums)
    {
        if (seen.count(n)) {
            return true;
        }
        seen.insert(n);
    }
    return false;
}

int main()
{

    return 0;
}