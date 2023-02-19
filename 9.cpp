/*9. Define a class Circle and define an instance member function to find the area of the
circle.*/

#include <iostream>
#define PI 3.14159

class Circle {
  public:
    float findArea(float radius) {
      return PI * radius * radius;
    }
};

int main() {
  Circle cir;
  std::cout << cir.findArea(5.0) << std::endl; // Output: 78.5397
  return 0;
}
