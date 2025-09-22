#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;

    double t = 23 * x * x;           // 1 умножение (x*x), 1 умножение (23*) = 2 операции
    double A = x * (t + 32);         // 1 сложение, 1 умножение = 2 операции
    double B = 3 * t + 8;            // 1 умножение, 1 сложение = 2 операции

    double P1 = A + B;               // 1 сложение
    double P2 = B - A;               // 1 вычитание

    cout << P1 << " " << P2 << endl;

    return 0;
}