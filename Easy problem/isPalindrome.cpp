

#include <iostream> 
using namespace std ;

bool isPalindrome(int x){
    if (x < 0) return 0 ;
    int temp = x  , plaindrom = 0;
    while(temp){
        int y = temp % 10 ;
        plaindrom = plaindrom  * 10 + y  ;
        temp /= 10 ;
    }
    return x == plaindrom;
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