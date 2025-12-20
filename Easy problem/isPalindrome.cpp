

#include <iostream> 

using namespace std ;

bool isPalindrome(int x){

    if (x < 0 || (x % 10 == 0 && x != 0)) return false;

    int reversed = 0;
    while (x > reversed) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    return x == reversed || x == reversed / 10;
}

int main (){
    freopen("./in.txt", "r", stdin);
    

    int x ;
    cin >> x; 
    cout <<x  << endl;
    cout << isPalindrome(x) << endl ; 

    fclose(stdin);

    return 0 ;

}