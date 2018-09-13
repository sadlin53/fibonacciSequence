#include <iostream>
#include <cmath>
#include <iomanip>
int main() {
    double n;
    double x;
    double y;
    double z;
    double frac;
    double frac2;
    double rootF = pow(5, 0.5);



        std::cout << "Enter a number to see the number at that position on the Fibonacci Sequence: ";
        std::cin >> n;

        x = 1 / rootF;
        frac = (1 + rootF) / 2;
        frac2 = (1 - rootF) / 2;
        y = pow(frac, n);
        z = pow(frac2, n);

        n = x * (y - z);

        std::cout.setf(std::ios::fixed);
        std::cout << "This is the number at that position on the Fibonacci Sequence: " << std::setprecision(0) << n;



    return 0;
}