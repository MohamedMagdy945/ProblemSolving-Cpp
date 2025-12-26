#include<iostream>
#include <vector>
using namespace std;


vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> pascalTriangle;
   
    for(int i = 0 ; i < numRows ; i++)
    {
        vector<int> v = {1};
        for(int j = 1 ; j < i; j++ )
        {
            v.push_back(pascalTriangle[i-1][j] + pascalTriangle[i-1][j-1]);
        }
        if(i != 0)
            v.push_back(1);
        pascalTriangle.push_back(v);
    }
    return pascalTriangle;
}

int main(){
    vector<vector<int>> pascalTriangle = generate(6);


    for (int i = 0 ; i < pascalTriangle.size() ; i++)
    {
        for(int j = 0 ; j < pascalTriangle[i].size(); j++)
        {
            cout << pascalTriangle[i][j] << " ";
        }
        cout<< endl ;
    }
    cout << endl ;

    return 0 ;
}