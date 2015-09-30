#include <iostream>

using namespace std;
double num1 = 0; //num1 is determined by cin and num3.
double num2; //num2 is always determined by cin.
double num3; //num3 is final number
char action; //this is the operation variable.
bool go = true; //this is for the action switch.
bool go2 = true;// this for the do while loop.
string answerornum; // this for the final answer and next number

std::string::size_type sz; //this makes an alias of size_t.

int main() {
    do {
        if (num1 == 0) {
            cout << "C++ Calculator\nEnter a number." << endl;
            cin >> num1;
            cout << "Enter the other number." << endl;
            cin >> num2;
        }
        cout << "Enter the operation. \n (+ for addition, - for subtraction, * for multiplication, and / for division)" << endl;
        while (go == true) {
            cin >> action;

            switch (action) {
                case '+':
                    num3 = num1 + num2;
                    go = false;
                    break;
                case '-':
                    num3 = num1 - num2;
                    go = false;
                    break;
                case '*':
                    num3 = num1 * num2;
                    go = false;
                    break;
                case '/':
                    num3 = num1 / num2;
                    go = false;
                    break;
                default:
                    cout << "That is not an valid operation. Please enter another operation." << endl;
            }
        }
        cout << "Enter '=' for the answer. Or a number in order to continue." << endl;
        cin >> answerornum;
        //this either converts the string to a double. Or it gives the answer.
        if (answerornum == "=") {
            cout << "The answer is: " << num3 << endl;
            go2 = false;
        }
        else {
            num1 = num3;
            num2 = stod(answerornum, &sz);
            go = true;

        }

    }while (go2 == true);
}