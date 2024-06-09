#include <iostream>
class Base {
public:
    virtual void print() const {
        std::cout << "Base class" << std::endl;
    }
    virtual ~Base() {}
};
class Derived : public Base {
public:
    void print() const override {
        std::cout << "Derived class" << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    if (derivedPtr) {
        // Dynamic cast succeeded, safe to use the derived pointer
        derivedPtr->print();
    } else {
        std::cout << "Dynamic cast failed" << std::endl;
    }
    delete basePtr;
    return 0;
}
