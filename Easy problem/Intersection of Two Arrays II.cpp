#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
{
    unordered_map<int,int> counter1;
    vector<int> result;
    for (int num : nums1){
        counter1[num]++;
    }
    for(int num : nums2)
    {
        if(counter1.count(num)&& counter1[num]!= 0)
        {
            result.push_back(num);
            counter1[num]--;
        }
    }
    return result ;
}
int main(){
    vector<int> num1 = { 1, 2, 2, 1};
    vector<int> num2 = { 2 , 2};
    vector<int> result = intersect(num1, num2);
    for (int i : result){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}