#include <iostream>
using namespace std;
// Swap alternate values!
void swapalternate(int arr[],int size){
    int start  = 0;
    while(start < size-1){
        swap(arr[start],arr[start +1]);
        start = start+2;
    }
}


void printarr(int arr[],int size ){
    for (int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[6] = {1,4,0,5,-2,18};
    int brr[5] = {1,2,3,4,5};

    printarr(brr,5);
    printarr(arr,6);


    swapalternate(arr,6);
    swapalternate(brr,5);

    printarr(brr,5);
    printarr(arr,6);

    return 0;
}