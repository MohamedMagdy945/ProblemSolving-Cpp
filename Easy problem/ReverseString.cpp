#include<iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int size = s.size() - 1 ;
    for(int i = 0 ; i <= size / 2; i++){
        char temp = s[i];
        s[i] = s[size - i ];
        s[size - i] = temp;
    }
}

int main(){

    return 0;
}