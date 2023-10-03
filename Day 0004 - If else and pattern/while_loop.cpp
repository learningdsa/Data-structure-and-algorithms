#include<iostream>
using namespace std;

int main() {
/* // -------------Numbers till n

int a;
cout<< "Enter a number : " ;
cin>> a;

int i = 1;
while(i<=a){
    cout<< i << endl;
    i=i+1;
} */

// ---------------- Sum 1 to n

/* int a;
cout<< "Enter a number : " ;
cin>> a;
int i = 1;
int sum = 0;
while(i<=a){
    sum = sum + i;
    i= i+1;
} 
cout << sum ;
 */


//---------- Sum of even numbers till n

int n;
cin>> n;
int i =1;
int sum =0;

while (i<=n){
    if(i%2==0){
        sum = sum +i;
            }
    i=i+1;}

cout<< sum;

}