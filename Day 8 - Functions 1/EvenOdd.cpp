#include <iostream>
using namespace std;

bool isEven (int a){
    if (a & 1){  // last bit of odd number is 1
        return 0;
        }
    else{
        return 1;
        }
}

int main(){
    
    cout << " Enter the number ";
    int num;
    cin >> num;

    if (isEven(num)){
        cout << "Even Number" << endl;
                    }
    else{
        cout << "Odd Number" << endl;
                    }
    return 0;
}