/*2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.*/

#include <iostream>
using namespace std;

class Time {
    private:
        int hour;
        int minute;
        int second;
    public:
        void setTime(int h, int m, int s) {
            hour = h;
            minute = m;
            second = s;
        }
        void displayTime() {
            cout << "Time = " << hour << ":" << minute << ":" << second << endl;
        }
};

int main() {
    Time t1;
    t1.setTime(3, 45, 20);
    t1.displayTime();
    return 0;
}
