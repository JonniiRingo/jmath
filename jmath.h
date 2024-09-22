#include <iostream>
#include <cmath>
using namespace std;

void quadraticFormula(double a, double b, double c)
{
    double discriminant = pow(b, 2) - 4*a*c;
    double x1 = (-b + sqrt(discriminant)) / (2*a);
    double x2 = (-b - sqrt(discriminant)) / (2*a);
    
    cout << "The roots are: " << x1 << " and " << x2 << endl;
}


double pwr(double a, double b) {
    if (b == 0) {
        return 1;  // Any number raised to the power of 0 is 1.
    } else if (b < 0) {
        // Handle negative exponent by taking the reciprocal of the result.
        return 1.0 / (a * pwr(a, -b - 1));
    } else {
        return a * pwr(a, b - 1);
    }
}