#include<iostream>
#include <vector>

using namespace std;


int findMaxConsecutiveOnes(vector<int>& nums)
{
    int count = 0 ,maxCount =0 ;
    for(int i: nums){
        if(i == 1)
        {
            count++;
            maxCount = max(maxCount, count);

        }
        else{
            count = 0;
        }
    }
    return maxCount ;
}

int main(){
    vector<int> nums = {1, 0 ,1,1,0,1};
    cout << findMaxConsecutiveOnes(nums);
    return 0;
}