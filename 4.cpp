/*4. Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.*/

#include <iostream>
using namespace std;

class LargestNumber {
    public:
        int findLargest(int a, int b, int c) {
            int largest = a;
            if (b > largest) {
                largest = b;
            }
            if (c > largest) {
                largest = c;
            }
            return largest;
        }
};

int main() {
    LargestNumber l1;
    int a = 10, b = 20, c = 5;
    cout << "Largest number = " << l1.findLargest(a, b, c) << endl;
    return 0;
}
