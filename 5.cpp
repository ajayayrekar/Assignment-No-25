/*5. Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.*/

#include <iostream>
using namespace std;

class ReverseNumber {
    public:
        int findReverse(int n) {
            int reverse = 0;
            while (n != 0) {
                reverse = reverse * 10 + n % 10;
                n /= 10;
            }
            return reverse;
        }
};

int main() {
    ReverseNumber r1;
    int n = 12345;
    cout << "Reverse of " << n << " = " << r1.findReverse(n) << endl;
    return 0;
}
