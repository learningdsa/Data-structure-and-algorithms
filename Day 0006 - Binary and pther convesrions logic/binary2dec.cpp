#include <iostream>
#include <math.h>

using namespace std;


int main (){
    int n;
    cout << "Enter the binary number : " ;
    cin >> n;

    int ans  = 0;
    int i = 0;
    while(n != 0 ) {

        //int bit  = n & 1; -- error as we need the digit not bits
            int bit = n%10; // gives remainder as 0 or 1
        if (bit==1){
            ans = pow(2, i) + ans;
            }

       // n = n >> 1; --- works for bit shift we need quotient
        n = n/10;
        i++;

    }

    cout<<" Answer is " << ans << endl;

}