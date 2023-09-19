# include <iostream>
using namespace std;

int main(){

    cout << " Enter two no's : " ;
    int a,b;
    char op;
    cin >> a;
    cin >> b;
    cout << "Operation : " ;
    cin >> op;

    switch (op){

        case '+': cout << (a+b);
            break;

        case '-': cout << (a-b);
            break;
            
        case '/': cout << (a/b);
            break;
            
        case '*': cout << (a*b);
            break;
            
        case '%': cout << (a%b);
            break;
            
        default : cout << " Enter a valid operation!";
            break;

    }









}