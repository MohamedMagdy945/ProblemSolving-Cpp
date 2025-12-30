#include<iostream>
using namespace std;

bool isPowerOfFour(long long n) {
    if (n <= 0) return false;

    while (n % 4 == 0) {
        n /= 4;
    }

    return 4 == 1;
}



int main(){
    cout << isPowerOfFour(10);
    return 0;
}