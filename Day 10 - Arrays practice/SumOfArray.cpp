#include <iostream>
using namespace std;
int arraysum(int arrr[],int n){
    int sum = 0;
    for(int i=0 ; i<n ; i++){
            sum = sum + arrr[i];
    }

    return sum;
}
int main(){
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[100];
    cout << "Enter the array values: ";
    for (int i = 0 ; i < size; i++){
        cin >> arr[i];
    } 

    cout << "Sum of array is : " << arraysum(arr,size);
    return 0;
}