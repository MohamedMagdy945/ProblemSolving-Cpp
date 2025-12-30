#include<iostream>
#include <vector>
using namespace std;


class NumArray{
    private: 
        vector<int> sumRangeVector;
    public:
        NumArray(vector<int> nums){
            sumRangeVector.push_back(nums[0]);
            for(int i = 1; i < nums.size(); i++)
            {
                sumRangeVector.push_back(sumRangeVector[i-1] + nums[i]);
            }
  
        }
        int sumRange(int left, int right)
        {
            if (left !=0)
                return(sumRangeVector[right] - sumRangeVector[left-1]);
            return(sumRangeVector[right]);                           
        }
};
int main(){
    vector<int> nums = {-2,0,3,-5,3,-1};
    NumArray* num = new NumArray(nums);
    return 0;
}