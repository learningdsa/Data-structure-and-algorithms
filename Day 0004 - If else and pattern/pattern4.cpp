#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number n : " ;
    cin >> n ;

// Printing of pattern below (s is space)
/* ssss*
sss*
ss*
s*
* */
/*      int i = 1;
     while(i<=n){

    int j = 1;
        while (j<=n){
            if((i+j-1)<n){
                cout << "  ";}
            else{
                cout <<"* ";
            }
        j =j+1;
        }
        cout << endl;
        i = i+1;
     }

} */

//---------- Opposite of above
/* ****
***s
**ss
*sss */

     int i = 1;
     while(i<=n){

    int j = 1;
        while (j<=n){
            if((i+j-1)<=n){
                cout << "* ";}
            else{
                cout <<"  ";
            }
        j =j+1;
        }
        cout << endl;
        i = i+1;
     }

}