#include <iostream>
using namespace std;

int main() {

    char op, choice;
    double a;
    double b;
    double total;
  
    do{
    cout << "Enter num1:";
    cin >> a;
    cout << "Enter num2:";
    cin >> b;

    cout << "Enter your operator" << endl;
    cout << "Enter + for addition" << endl;
    cout << "Enter - for subtraction" << endl;
    cout << "Enter * for multiplication" << endl;
    cout << "Enter / for division" << endl;
    cin >>op;
    
    switch(op){
        case '+':
            total = a + b;
            cout << "Total is: " << total << endl;
            break;
        case '-':
            total = a - b;
            cout << "Total is: " << total << endl;
            break;
        case '*':
            total = a * b;
            cout << "Total is: " << total << endl;
            break;
        case '/':
            total = a / b;
            cout << "Total is: " << total << endl;
            break;
        default:
            cout << "Please enter a Valid Operator!!!";
    }
    
    cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;
    }while(choice == 'y' || choice == 'Y');
    cout << "Goodbye Thanks!!!";
    return 0;
}