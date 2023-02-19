/*8. Define a class Rectangle and define an instance member function to find the area of
the rectangle.*/

#include <iostream>

class Rectangle {
  public:
    int findArea(int length, int breadth) {
      return length * breadth;
    }
};

int main() {
  Rectangle rect;
  std::cout << rect.findArea(5, 3) << std::endl; // Output: 15
  return 0;
}
