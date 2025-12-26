#include <iostream>
using namespace std;

int sumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    int slow = n, fast = n;

    do {
        slow = sumOfSquares(slow);           
        fast = sumOfSquares(sumOfSquares(fast)); 
    } while (slow != fast);

    return slow == 1;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isHappy(n))
        cout << n << " is a Happy Number!" << endl;
    else
        cout << n << " is not a Happy Number." << endl;

    return 0;
}
