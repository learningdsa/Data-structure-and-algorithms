#include <iostream>
using namespace std;

void reversearr(int arr[],int size){
    int start = 0;
    int end = (size - 1);

    while (start <= end){
        swap (arr[start],arr[end]);
        start++;
        end--;
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


    reversearr(arr,6);
    reversearr(brr,5);

    printarr(brr,5);
    printarr(arr,6);

    return 0;
}