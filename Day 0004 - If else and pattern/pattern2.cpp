#include<iostream>
using namespace std;
int main(){

int n;
cout << "Enter the number n : ";
cin >> n;


/* //------------1234\1234\1234\1234 or 123\123\123
int i = 1;

    while(i <= n){
        int j=1;
        while(j<=n){
            cout << j;
            j=j+1;
        }
        cout << endl;
        i = i+1;
    } */

// ---------------Reverese of above pattren 321\321\321

/* int i = 1;

    while(i <= n){
        int j=1;
        while(j<=n){
            cout << n+1-j;
            j=j+1;
        }
        cout << endl;
        i = i+1;
    }
 */

/* //---------------- 123\456\789

int i = 1;
int sum = 0;
    while(i <= n){
        
        int j=1;
        while(j<=n){
            sum = sum +1;
            cout << sum << " " ;
            j = j+1;
        }
    cout << endl;
    i = i + 1;
    } */

//---------- *\**\***\**** n = 4

/* int i =1;
int sum = 0;
    while (i<=n){
        
        int j = 1;
        while(j<=i){
        cout << "* ";
        j = j +1;
        }
        i = i+1;
        cout << endl;
    }
 */

/* // ----------- 1\22\333\4444 for n = 4

int i =1;
while (i <=n){

    int j = 1;
    while (j<=i){
        cout << i << " ";
    j = j +1;
    }
    cout<< endl;
    i = i+1;
}
 */



/* // --------------- 1\23\456\78910 for n = 4

int i =1;
int sum = 1;
while (i <=n){

    int j = 1;
    while (j<=i){
        cout << sum << " ";
        sum  = sum+1 ;
        j = j+1;
    }
    cout<< endl;
    i = i+1;
} */



/* //-------- 1\23\345\456 n=4


int i = 1 ;
while (i <= n){

    int j = 0;
    while (j<i){
        cout << i+j << " ";
        j = j+1;
    }
    cout<< endl;
    i = i+1;
}
 */

//-------1\21\321\4321


/* int i = 1 ;
while (i <= n){
    int c  = i+1 ;
    int j = 0;
    while (j<i){
        cout << c-j-1 << " ";
        j = j+1;
    }
    cout<< endl;
    i = i+1;
}
*/
// 2nd method
int i = 1 ;
while (i <= n){
    int j = 1;
    while (j<=i){
        cout << i-j+1 << " ";
        j = j+1;
    }
    cout<< endl;
    i = i+1;
}

}
