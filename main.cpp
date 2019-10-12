#include <iostream>
using namespace std;



void sum(int a, int b) {
    cout << a + b << endl;
}

void f_to_c(int f) {
    cout << ((f -32) * 5/9) << endl;
}

void c_to_f(int c) {
    cout << ((c * 9/5) + 32) << endl;
}

void simple_interest(int p, int r, int t) {
    cout << (p*r*t)/100 << endl;
}

int main() {
    sum(2,4);
    f_to_c(102);
    c_to_f(33);
    simple_interest(100000,100,200);

    // ASCII value of a char
    char input;
    cout << "Enter a character for the ASCII Value of it: ";
    cin >> input;
    cout << "The ASCII value for " << input << " is " << int(input) << endl;
    return 0;
}