
#include<iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs){
    string prefix ;
    for (int j  = 0 ; j < strs[0].size() ; j++){    
        char currentChar = strs[0][j];
        for ( int i  = 1 ; i < strs.size() ; i++){
           if (j >= strs[i].length() || strs[i][j] != currentChar) {
                return prefix;
            }
        }
        prefix += currentChar;
    }
    return prefix;
}

int main(){
    freopen("in.txt" , "r" , stdin);
    vector<string> strs;
    string line;
    while (getline(cin , line)){
        strs.push_back(line);
    }

    cout<< longestCommonPrefix(strs);
    fclose(stdin);
    return 0 ;
}