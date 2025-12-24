#include<iostream>
#include<vector>
using namespace std ;



int removeElement(vector<int>& nums , int val){
    int j = 0 ;
    for (int i = 0 ; i < nums.size() ; i++)
    {
        if (nums[i] != val )
        {
            nums[j++] = nums[i];
        }
    }
    return j ;
}


int main(){
  vector<int> nums ;
    nums.push_back(0); 
    nums.push_back(1); 
    nums.push_back(2); 
    nums.push_back(2); 
    nums.push_back(3); 
    nums.push_back(0); 
    nums.push_back(4); 
    nums.push_back(2); 

    int count =  removeElement(nums ,2) ;
    cout << count << endl ;
    for (int i = 0 ; i < count ; i++)
    {
        cout << nums[i] << " " ;
    }
    cout << endl ;
    return 0;
}