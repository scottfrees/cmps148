#include <iostream>
using namespace std;


int main() {
    double radius, width, height;
    double area;
    char input;
    
    cout << "Area calculator:  " << endl;
    cout << "Enter (c) for circle" << endl << "      (s) for square" << endl << "      (r) for rectangle" <<endl;
    
    cout << "Choice:  ";
    cin >> input;
    
    
    
    if (input == 'c') {
        cout << "You chose circle" << endl;
        cout << "Please enter radius:  " ;
        cin  >> radius;
        area = 3.14159 * radius * radius;
        
    }
    else if (input == 's') {
        cout << "You chose square" << endl;
        cout << "Please enter width:  ";
        cin  >> width;
        area = width * width;
    }
    else if (input == 'r') {
        cout << "You chose rectangle" << endl;
        cout << "Please enter width:  ";
        cin  >> width;
        cout << "Please enter height:  ";
        cin  >> height;
        area =  width * height;
    }
    else {
        cout << "You chose poorly" << endl;
        return 0;
    }
    
    cout << "Area is = " << area << endl;   
}