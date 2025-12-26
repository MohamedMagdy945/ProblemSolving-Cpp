#include<iostream>
using namespace std; 


string convertToTitle(int columnNumber)
{
    string result = "";
    while (columnNumber > 0) {
        columnNumber--; 
        int remainder = columnNumber % 26;
        char letter = 'A' + remainder;
        result = letter + result; 
        columnNumber /= 26;
    }    
    return result;
}
int main()
{
    cout << convertToTitle(1) << endl;   
    cout << convertToTitle(28) << endl;   
    cout << convertToTitle(701) << endl;  
    cout << convertToTitle(703) << endl;  
    return 0;
}