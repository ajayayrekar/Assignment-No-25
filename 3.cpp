/*3. Define a class Factorial and define an instance member function to find the Factorial
of a number using class.*/

#include <iostream>
using namespace std;

class Factorial {
    public:
        int findFactorial(int n) {
            int fact = 1;
            for (int i = 1; i <= n; i++) {
                fact *= i;
            }
            return fact;
        }
};

int main() {
    Factorial f1;
    int n = 5;
    cout << "Factorial of " << n << " = " << f1.findFactorial(n) << endl;
    return 0;
}
