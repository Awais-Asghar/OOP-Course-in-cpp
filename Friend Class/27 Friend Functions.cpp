#include <iostream>
class MyClass {
private:
    int privateValue;
public:
    MyClass(int value) : privateValue(value) {}
    friend void showPrivateValue(const MyClass& obj);
};

void showPrivateValue(const MyClass& obj) {
    std::cout << "Private value accessed by friend function: " << obj.privateValue << std::endl;
}

int main() {
    MyClass obj(42);
    showPrivateValue(obj);
    return 0;
}
