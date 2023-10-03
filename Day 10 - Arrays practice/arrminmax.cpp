#include <iostream>
#include <climits>
using namespace std;
// Min and max element in an array
int getmax(int arr[], int n ){

    int maxx = INT_MIN ; // Max value is set to min value
    for (int i = 0; i<n; i++){
        if(arr[i] > maxx){
            maxx = arr[i];
        }
    
    }
    return maxx;
}

int getmin(int arr[], int n ){

    int minn = INT_MAX ; // Max value is set to min value
    for (int i = 0; i<n; i++){
        if(arr[i] < minn){
            minn = arr[i];
        }
    
    }
    return minn;
}



int main(){
    int size;
    cout << "Enter the size of array : ";
    cin>> size;

    int arrr[1000]; // Max possible values are 1000

    for (int i = 0; i<size; i++){
        cin >> arrr[i];
        }



    int maxx = getmax(arrr, size);
    cout << "max value is " << maxx << endl ;
    cout << "Min value is " << getmin(arrr, size);
    return 0;
}