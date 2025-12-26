#include<iostream>
#include <vector>

using namespace std; 

void merge(vector<int>& nums1 , int m , vector<int>& nums2 , int n ){
    int i = m - 1 , j = n - 1;
    int k = m + n - 1;
    while ( i >= 0 && j >= 0 )
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k--] = nums1[i--] ;
        }
        else {
            nums1[k--] = nums2[j--] ;
        }
    }
    while(j >= 0){
        nums1[k--] = nums2[j--] ;
    }
}


int main()
{
    vector<int> num1 = { 5 ,6 , 7, 8 , 0 , 0 ,0 ,0};
    vector<int> num2 = {1 , 2 , 3 ,4};

    merge(num1 , 4, num2 ,4);

    for (int i = 0 ; i < num1.size() ; i++){
        cout << num1[i] << " ";
    }
    cout << endl ;
    
    return 0 ;
}