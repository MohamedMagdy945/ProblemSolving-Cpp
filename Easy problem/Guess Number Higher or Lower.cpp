#include<iostream>
using namespace std;

int guess(int num);
    int guessNumber(int num)
    {

        int left = 0;
        int right = num ;
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            int guessResult = guess(mid);
            if(guessResult == 0)
            {
                return mid;
            }
            else if(guessResult == 1)
            {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return 0 ;
    }