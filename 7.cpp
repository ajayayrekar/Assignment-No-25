/*7. Define a class Greatest and define instance member function to find Largest among
3 numbers using classes.*/

#include <iostream>

class Greatest {
  public:
    int findGreatest(int num1, int num2, int num3) {
      if (num1 > num2 && num1 > num3) {
        return num1;
      } else if (num2 > num1 && num2 > num3) {
        return num2;
      } else {
        return num3;
      }
    }
};

int main() {
  Greatest gr;
  std::cout << gr.findGreatest(5, 10, 3) << std::endl; // Output: 10
  return 0;
}
