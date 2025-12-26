#include<iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices)
{
    int buy =prices[0];
    int sell =  0 ;
    int maxProfit = 0 ;
    for (int i = 1; i < prices.size() ; i++)
    {
        if (prices[i] < buy){
            buy = prices[i];
        }
        else
        {
            sell = prices[i];
            if(sell - buy > maxProfit )
            {
                maxProfit = sell - buy ;
            }
        }
    }
    return maxProfit;
}

int main(){
    vector<int> v = {2 ,1 ,2 ,1 , 0, 1 , 2};
    cout << maxProfit(v) << endl;
    return 0;
}