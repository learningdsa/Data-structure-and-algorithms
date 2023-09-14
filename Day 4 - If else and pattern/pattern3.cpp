#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number n : " ;
    cin >> n ;
 //-----------AAA\BBB\CCC n = 3
/* 
    int i = 1;
    while(i<=n){

    int j = 1;
        while (j <=n){
            char ch = 'A' + i -1 << " ";
            cout<< ch;
            j = j +1;
        }
    cout<< endl;
    i = i + 1;
    } */


//----- ABC\ABC\ABC n = 3 

/*     int i = 1;
    while(i<=n){

    int j = 1;
        while (j <=n){
            char ch = 'A' + j -1;
            cout<< ch << " ";
            j = j +1;
        }
    cout<< endl;
    i = i + 1;
    }
 */


// -----abc\def\ghi n =3
/*     int i = 1;
    char ch = 'A';
    while(i<=n){

    int j = 1;
        while (j <= n){
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
    cout<< endl;
    i = i + 1;
    }
 */

//----- abc\bcd\cde n = 3

/*     int i = 1;
        while(i <=n ) {
        int j = 1;
            while (j <= n){
            char ch = 'A' + i + j - 2; // type casting
            cout << ch << " " ;
            j = j + 1;
            }
        cout<< endl;
        i = i +1;
    } */

//--------a\bb\ccc\dddd n = 4

/* int i = 1;
        while(i <=n ) {
        int j = 1;
            while (j <= i){
            char ch = 'A' + i -1; // type casting
            cout << ch << " " ;
            j = j + 1;
            }
        cout<< endl;
        i = i +1;
    } */

// --------a\bc\def\ghij n =4
    /* int i = 1;
    char ch = 'A';
        while(i <=n ) {
        int j = 1;
            while (j <= i){
            cout << ch << " " ;
            ch = ch +1 ;
            j = j + 1;
            }
        cout<< endl;
        i = i +1;
    } */


//-----------d\cd\bcd\abcd n = 4


    int i = 1;
    while (i <= n){
        char ch ='A' + n - i ;
        int j = 1;
        while (j <= i){
            cout << ch <<" ";
            ch = ch+1;
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }

}








