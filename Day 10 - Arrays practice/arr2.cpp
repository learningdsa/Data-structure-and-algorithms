#include <iostream>
using namespace std;



// Using arrays with functions
void printarray(int arr[], int size){

cout << "Printing the array." <<  endl;
for (int i = 0; i<size; i++)
{
    cout << arr[i]<< " ";
}
cout << endl << "Printing complete.";

}

int main(){

int arr3 [15] = {2,7};
printarray(arr3, 15);       // Calling the function.
}