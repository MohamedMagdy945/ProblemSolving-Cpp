#include "JumpGame2.h"
#include<vector>
#include<algorithm>
JumpGame2::JumpGame2()
{
    //ctor
}

JumpGame2::~JumpGame2()
{
    //dtor
}

int JumpGame2::jump(std::vector<int>& nums){
    if (nums.size() == 0 ) return 1 ;
    int jump = 1 ;
    int JumpIndex = nums[0] + 0 ;
    int i = 1;

    while(JumpIndex < nums.size() - 1)
    {
        jump++ ;
        int MaxJump = nums[i] + i ;
        while (i <= JumpIndex ){
            if(nums[i] + i >= MaxJump ){
                MaxJump = nums[i] +i ;
            }
            i++;
        }
        JumpIndex = MaxJump ;
    }
    return jump ;
}
