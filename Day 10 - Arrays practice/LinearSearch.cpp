#include <iostream>
using namespace std;
bool LinearSearchh(int arr[],int size, int key ){
    for (int i = 0; i<size; i++){
            if (arr[i]== key){
                return 1;
            }
    }
    return 0;
}



int main(){
    int arr[10] = {12,13,11,15,-3,-6,0,1,7,4};
    cout << "Enter the vaue to be searched : " << endl;
    int key;
    cin >> key;
    bool boool = LinearSearchh(arr, 10, key);
    if (boool){
        cout << "Number is present!";
    }
    else{
        cout << "Number is absent";
    }
    return 0;
}