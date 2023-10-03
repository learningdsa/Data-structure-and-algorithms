#include <iostream>
using namespace std;


int ncr (int n , int r){
    int nn = 1;
    for (int i = 1; i<=n; i++){
        nn = nn * i;
    }
    int rr = 1;
    for (int i = 1; i<=r ; i++){
        rr = rr * i;
    }
    int nr = 1;
    for (int i = 1; i<=(n-r) ; i++) {
        nr = nr * i;
    }
    int answer = nn/(rr*nr);
    return answer;
    }


int main(){
    int n , r;
    cout << "Enter the n ";
    cin >> n;
    cout << "Enter value of r ";
    cin >> r;


    int ans = ncr (n , r);
    cout << "Answer is : " << ans ;
    return 0;
}