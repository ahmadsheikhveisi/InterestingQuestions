/* COPYRIGHT NONE
 * what does the following program print on the command line?
 * a : a: 3 b: 4 c: 2
 * b : a: 3 b: 1 c: 2
 * c : a: 1 b: 2 c: 3
 * d : a: 2 b: 3 c: 1
 * e : a: 2 b: 1 c: 3
 * f : compiler error
*/

#include <string>
#include <sstream>
#include <iostream>

class MyType {
 private:
    int a;
    int b;
    int c;

 public:
    explicit MyType(int t) : c(t++), a(t++), b(t++) {}

    std::string Print() {
        std::ostringstream temp;
        temp << std::dec << "a: " << a << " b: " << b << " c: " << c << '\n';
        return temp.str();
    }
};

class EmpParent {
};

class Child : public EmpParent {
    char c;
};

class vEmpChild : virtual public EmpParent {
};

class vChild : virtual public EmpParent {
    char c;
};


int main(void) {
    MyType obj(1);
    std::cout << obj.Print();

    // bonus
    EmpParent obj2;
    std::cout << sizeof(obj2) << '\n';
    Child obj3;
    std::cout << sizeof(obj3) << '\n';
    vEmpChild obj4;
    std::cout << sizeof(obj4) << '\n';
    vChild obj5;
    std::cout << sizeof(obj5) << '\n';
    return 0;
}
