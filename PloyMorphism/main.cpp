/* COPYRIGHT NONE
 * what does the following program print on the command line?
 * a : compiler error
 * b : Child printing Parent
 * c : ParentChild printing
 * d : ChildParent printing
*/
#include <iostream>

class Parent {
 public:
    Parent() {
        std::cout << "Parent";
    }
    virtual void print() = 0;
};

class Child : public Parent {
 public:
    Child() {
        std::cout << "Child";
    }
    void print() override {
        std::cout << "printing\n";
    }
};

int main(void) {
    Parent *obj = new Child();
    std::cout << " ";
    obj->print();
    delete obj;
    return 0;
}
