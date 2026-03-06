//#include <iostream>
//using namespace std;
//
//class Counter {
//public:
//    static int c1;
//    static int c2;
//
//    Counter() {
//        c1 = 5;
//        c2 = 10;
//    }
//
//    void increase_count_c1();
//    void increase_count_c2();
//};
//
//int Counter::c1;
//int Counter::c2;
//void Counter::increase_count_c1() { ++c1; }
//void Counter::increase_count_c2() { ++c2; }
//
//int main() {
//    Counter dummyobj;
//
//    cout << "Initial values of C1=" << Counter::c1 << endl;
//    cout << "Initial values of C2=" << Counter::c2 << endl;
//
//    dummyobj.increase_count_c1();
//    cout << "Value after incrementing in C1=" << Counter::c1 << endl;
//
//    dummyobj.increase_count_c2();
//    dummyobj.increase_count_c2();
//    cout << "Value after incrementing in C2=" << Counter::c2 << endl;
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Overloading {
//    int a;   // single number
//
//public:
//    // Constructor
//    Overloading(int x = 0) { a = x; }
//
//    // Inline operator overloading functions
//    Overloading operator+(const Overloading& obj) {
//        return Overloading(a + obj.a);
//    }
//
//    Overloading operator-(const Overloading& obj) {
//        return Overloading(a - obj.a);
//    }
//
//    Overloading operator*(const Overloading& obj) {
//        return Overloading(a * obj.a);
//    }
//
//    Overloading operator/(const Overloading& obj) {
//        if (obj.a == 0) {
//            cout << "Error: Division by zero!" << endl;
//            return Overloading(0);
//        }
//        return Overloading(a / obj.a);
//    }
//
//    // Getter
//    int getValue() const { return a; }
//};
//
//int main() {
//    int x, y;
//
//    cout << "Enter the number = ";
//    cin >> x;
//    cout << "Enter another number = ";
//    cin >> y;
//    Overloading obj1(x), obj2(y), result;
//    cout << "\nArithmetic Operations:\n";
//    cout << "1. Addition\n";
//    cout << "2. Subtraction\n";
//    cout << "3. Multiplication\n";
//    cout << "4. Division\n";
//    cout << "Enter your choice (1-4): ";
//
//    int choice;
//    cin >> choice;
//
//    switch (choice) {
//    case 1: result = obj1 + obj2;
//        cout << "Addition of numbers = " << result.getValue() << endl;
//        break;
//    case 2: result = obj1 - obj2;
//        cout << "Subtraction of numbers = " << result.getValue() << endl;
//        break;
//    case 3: result = obj1 * obj2;
//        cout << "Multiplication of numbers = " << result.getValue() << endl;
//        break;
//    case 4: result = obj1 / obj2;
//        cout << "Division of numbers = " << result.getValue() << endl;
//        break;
//    default: cout << "Invalid choice!" << endl;
//    }
//
//    return 0;
//}


#include <iostream>
#include <string>
using namespace std;

class MyString {
    string str;

public:
    // Constructor
    MyString(string s = "") { str = s; }

    // Setter
    void setString(const string& s) {
        str = s;
    }

    // Getter
    string getString() const {
        return str;
    }

    // Overload + operator
    MyString operator+(const MyString& obj) {
        return MyString(str + " " + obj.str);
    }
};

int main() {
    string s1, s2;
    cout << "Enter the first string: ";
    getline(cin, s1);
    cout << "Enter the second string: ";
    getline(cin, s2);

    MyString obj1, obj2;
    obj1.setString(s1);
    obj2.setString(s2);

    cout << "\nInitial strings:\n";
    cout << "String: " << obj1.getString() << endl;
    cout << "String: " << obj2.getString() << endl;

    MyString result = obj1 + obj2;

    cout << "\nAfter concatenation:\n";
    cout << "String: " << result.getString() << endl;

    return 0;
}