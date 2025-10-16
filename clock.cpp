#include <iostream>
#include <unistd.h>   // for sleep()
#include <cstdlib>    // for system()
using namespace std;

int main() {
    int h, m, s, a, err;
    err = a = 0;

    // Input validation loop
    while (err == 0) {
        cout << "Enter hour: ";
        cin >> h;
        cout << "Enter minutes: ";
        cin >> m;
        cout << "Enter seconds: ";
        cin >> s;

        if (h < 24 && m < 60 && s < 60)
            err++;
        else {
            cout << "Invalid time! Please re-enter.\n";
            sleep(2);
            system("clear"); // use "cls" if on Windows
        }
    }

    // Clock loop
    while (a == 0) {
        system("cls"); // or "cls" if you're on Windows
        cout << h << " : " << m << " : " << s << endl;
        sleep(1); // waits 1 second

        s++;
        if (s > 59) {
            s = 0;
            m++;
        }
        if (m > 59) {
            m = 0;
            h++;
        }
        if (h > 24) {
            h = 0;
        }
    }

    return 0;
}
