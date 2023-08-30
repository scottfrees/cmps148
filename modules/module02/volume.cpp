#include <iostream>
using namespace std;


int main() {
    int input;
    bool invalid = true; // Just a flag to control whether to continue
                         // to ask the user for a selection.
    const double PI = 3.1459;
    double radius, height, volume;
    
    cout << "Volume Calculator" << endl << "-----------------------" << endl;
    do {
        cout << "1.  Sphere" << endl;
        cout << "2.  Cylinder" << endl;
        cout << "3.  Cone" << endl;
        cout << "4.  Cube" << endl;
        cout << "Enter your numeric selection:  ";
        cin  >> input;
        switch (input) {
            case 1:
                invalid = false;
                cout << "Please enter radius:  ";
                cin  >> radius;
                
                // important:   4/3 is 1. 4.0/3 is 1.333..!
                volume = 4.0 / 3 * PI * radius * radius * radius;
                break;
            case 2:
                invalid = false;
                cout << "Please enter radius:  ";
                cin  >> radius;
                cout << "Please enter height:  ";
                cin  >> height;
                
                volume = PI * radius * radius * height;
                break;
            case 3:
                invalid = false;
                cout << "Please enter radius:  ";
                cin  >> radius;
                cout << "Please enter height:  ";
                cin  >> height;
                
                volume = 1.0 / 3 * PI * radius * radius * height;
                break;
            case 4:
                invalid = false;
                cout << "Please enter radius:  ";
                cin  >> radius;
                cout << "Please enter height:  ";
                cin  >> height;
                
                volume = height * height * height;
                break;
        }
        
    } while (invalid);
    
    cout << "The volume = " << volume << endl;
}