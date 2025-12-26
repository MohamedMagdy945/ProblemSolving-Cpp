#include<iostream>
using namespace std ;

int reversebit = 0;

int reverseBits(int n){
    string binary;
    int reversebit = 0;
    for (int i = 0; i < 32; i++) {
        int bit = n % 2;
        reversebit = reversebit * 2 + (bit + '0'); 
        n /= 2;
    }
    for (char c : binary){
        reversebit = reversebit * 2 + (c - '0');
    }
    return reversebit;
}
int main(){

    cout << reverseBits(43261596);

    return 0; 
}