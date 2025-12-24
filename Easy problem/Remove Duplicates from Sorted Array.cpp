#include<iostream>
#include<vector>
using namespace std ;



int removeDuplicates(vector<int>& nums){
    int count = 1 ;
    for (int i = 1 ; i < nums.size() ; i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[count++] = nums[i];
        }
    }
    return count ;
}


int main(){
    vector<int> nums ;
    nums.push_back(1); 
    nums.push_back(2); 
    nums.push_back(2); 
    nums.push_back(3); 
    nums.push_back(3); 
    nums.push_back(3); 
    nums.push_back(4); 

    int count =  removeDuplicates(nums) ;
    cout << count << endl ;
    for (int i = 0 ; i < count ; i++)
    {
        cout << nums[i] << " " ;
    }
    cout << endl ;
    return 0;
}