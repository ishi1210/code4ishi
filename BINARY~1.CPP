//Binary Operator Overloading
#include<iostream.h>
#include<conio.h>
class overloading {
    int value;
public:

    void setValue(int temp) {
        value = temp;
    }

    overloading operator+(overloading ob) {
        overloading t;
        t.value = value + ob.value;
        return (t);
    }

    void display() {
        cout << value << endl;
    }
};


void main() {
clrscr();
    overloading obj1, obj2, result;
    int a, b;

    cout << "Enter the value of Complex Numbers a,b:";
    cin >> a>>b;
    obj1.setValue(a);
    obj2.setValue(b);

    result = obj1 + obj2;

    cout << "Input Values:\n";
    obj1.display();
    obj2.display();

    cout << "Result:";
    result.display();

    getch();
   
}
