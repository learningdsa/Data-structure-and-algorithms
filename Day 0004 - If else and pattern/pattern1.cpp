#include<iostream>
using namespace std;

int main() {

/* // For pattern problems relate number of rows and columns.
// ***\***\*** or ****\****\****\****

    int n;
    cin>> n;

    int i = 1;

//Now first we specify no of rows
    while (i<=n) {
        int j = 1;  // Now we specify no of columns
        while (j<=n) {
            cout <<"*";
            j=j+1;
        }
    cout<< endl;
    i=i+1;
    } */

// 2nd pattern 111\222\333 or 1111\2222\3333\4444
int n;
cin >> n;

int i = 1;
    while (i<=n){
        int j = 1;
        while(j<=n){
            cout << i;
            j=j+1;
        }
        cout  << endl;
        i = i+1;

    }





}