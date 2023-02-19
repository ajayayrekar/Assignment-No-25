/*10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc.*/

#include <iostream>
#define PI 3.14159

class Area {
  public:
    int findSquareArea(int num) {
      return num * num;
    }
    int findRectangleArea(int length, int breadth) {
      return length * breadth;
    }
    float findCircleArea(float radius) {
      return PI * radius * radius;
    }
};

int main() {
  Area a;
  std::cout << a.findSquareArea(5) << std::endl; // Output: 25
  std::cout << a.findRectangleArea(5, 3) << std::endl; // Output: 15
  std::cout << a.findCircleArea(5.0) << std::endl; // Output: 78.5397
  return 0;
}
