#include<iostream>
using namespace std;


int main(){

    int n ;
    cout << "enter value of n: ";
    cin >> n;
// -----------sum till n
/*  int sum =0;
    for( int i = 1; i<=n; i++ ){
        sum = sum+i;

    }
    cout << "sum is: " << sum << endl;

     */

// ---------fibonacci series
/*     int a = 0;
    int b = 1;
    int sum =0;
    cout << a << " " << b << " ";
    for (int i = 1; i < n-1; i++){
        sum = a + b;
        cout << sum << " ";
        a = b ;
        b = sum; }*/
//------------Prime number

    bool isprime = 1;


    for (int i=2; i<n; i++) {
        if (n%i == 0){
            //cout << " Number is not prime and divisbible by " << i ;
            isprime = 0;
            break ;
        }
    }
    
if (isprime == 0)
        {
        cout << "Not a prime No." << endl;
        }
        else
        {
        cout <<  "Prime No." << endl;
        }
}






