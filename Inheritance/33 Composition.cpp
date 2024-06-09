#include<iostream>
#include<string>
class Engine {
public:
    void start() {
        std::cout << "Engine starting..." << std::endl;
    }
};
class Car {
private:
    std::string model;
    Engine engine;

public:
    Car(const std::string& model) : model(model) {}
    void start() {
        std::cout << "Car " << model << " starting..." << std::endl;
        engine.start();
    }
};

int main() {
    Car myCar("Toyota");
    myCar.start();

    return 0;
}
