/*6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.*/

#include <iostream>

class Square {
  public:
    int square(int num) {
      count++;
      return num * num;
    }
    int getCount() {
      return count;
    }
  private:
    int count = 0;
};

int main() {
  Square sq;
  std::cout << sq.square(5) << std::endl; // Output: 25
  std::cout << sq.square(3) << std::endl; // Output: 9
  std::cout << sq.getCount() << std::endl; // Output: 2
  return 0;
}
