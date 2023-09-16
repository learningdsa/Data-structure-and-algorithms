#include<iostream>
using namespace std;


int main(){
// Operators 
    int a = 4;
    int b = 6;


    cout << "a&b = " << (a & b) << endl;
    cout << "a|b = " << (a | b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a^b =" << (a ^ b) << endl;



// Left and right shift

cout << (17<<1) << endl;
cout << (21<<2) << endl;
cout << (7>>1) << endl;
cout << (10>>2) << endl;

// pre and post increment

int  i1 =7;
int  i2 =7;
int sum1 = 0;
int sum2 =0;
cout << "sum pre incr ++i " << (sum1 = a +(i1++)) << endl;
cout << "sum post inc ++i " << (sum2 = a +(++i2)) << endl;


}
