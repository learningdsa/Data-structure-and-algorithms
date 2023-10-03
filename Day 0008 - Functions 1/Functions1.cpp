#include <iostream>
using namespace std;

// creaton of a funciton
int power(int a, int b){
    
    int ans = 1;

    for (int i =1; i<= b; i++){
        ans = ans * a;
    }
    return ans;
}


int main() {

    int a,b;
    cout <<"Enter number" << endl;
    cin >> a;
    cout <<"Enterpower" << endl;
    cin >> b;
    
    int answer = power(a,b);
    cout << "answer is " << answer << endl;
        
}