/* Print the pattern * is space 
***1
**121
*12321
1234321  for n = 4

this can be solved by splitting it into 3 triangles
reverse space, 1\12\123\1234 and *\1\21\321   */



#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number n : " ;
    cin >> n ;

    int i = 1;
    while (i<=n){

//------printing first triangle space is n-1\n-2...

    /*
        int j = 1;
        while(i+j-1<n){
            cout << "*";
            j = j+1;
        }
        cout << endl;
        i=i+1;
}
 */
// another way to print space is n-i
    
        int space = n-i;
        while(space){
            cout<< " ";
            space = space - 1;
        }

        
// --------------printing second triangle
        int j = 1;
        while(j<= i){
            cout << j;
            j=j+1;
        }


// --------------printing third triangle
        int k = i-1;
        while(k){
            cout << k;
            k = k-1;
        }
    cout << endl;
        i = i+1;
    }
}