#include<iostream>
using namespace std;

int climbStairs(int n)
{
    if (n == 1) return 1 ;
    if (n == 2) return 2 ;

    int oneStep = 2; 
    int twoStep = 1 ;
    int totalWays = 0;

    for (int i = 3 ; i <= n ; i++)
    {
        totalWays = oneStep + twoStep;
        twoStep = oneStep; 
        oneStep = totalWays ;
    }
    return totalWays;
}

int main(){
    int n = 6 ;
    cout << climbStairs(n);
    return 0;
}