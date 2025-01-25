#include <iostream>
using namespace std;

int main() {
    double y;
    cout << "Welcome to the Ounce Conversion Program!\n";

    while (true) {
        cout << "Please enter the number of ounces: ";
        cin >> y;

        if (cin.fail()) {
            cout << "This is not a number.\n";
            cout << "Please try again.\n";
            cin.clear();                  // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
        } else if (y < 0) {
            cout << "This number is negative. Ounces cannot be negative.\n";
            cout << "Please try again.\n";
        } else {
            cout << "Thank you! Converting ounces to pounds.\n";
            cout << y << " oz is equivalent to " << static_cast<int>(y) / 16 << " lbs and " 
                 << static_cast<int>(y) % 16 << " oz.\n";
            cout << y << " oz is equivalent to " << y / 16 << " lbs.\n";
            cout << "Thank you for using the OCP!\n";
            break;
        }
    }

    return 0;
}

