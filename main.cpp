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

double area_of_circle(double r) {
    double PI = 3.14;
    return ((PI)*(r)*(r));
}

void positive_or_negative(int num) {
    cout << ((num > 0) ? "Positive" : "Negative") << endl;
}

void even_or_odd(int num) {
    cout << ((num % 2 == 0) ? "Even" : "Odd") << endl;
}

void next_char(char c) {
    cout << "Enter a character: \n";
    cin >> c;
    c++;
    cout << "Next character is " << c << endl;
}

void days(int num_days) {
    int y, m, d;
    y = num_days/365;
    num_days%=365;
    m = num_days/30;
    d = num_days%30;
    cout << "Years: " << y << "\nMonths: " << m << "\nDays: " << d << endl;
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

    cout << "Area of a circle is " << area_of_circle(2.14) << endl;

    positive_or_negative(-11);
    positive_or_negative(10);

    even_or_odd(10);
    even_or_odd(11);

    next_char('b');

    days(1023);
    return 0;
}