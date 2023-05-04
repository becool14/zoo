#include <iostream>
#include <string>
#include <vector>

class Animal {
protected:
    std::string name;
    int age;

public:
    Animal(std::string n, int a) : name(n), age(a) {}

    virtual void makeSound() const = 0; 

    void info() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

class Lion : public Animal {
public:
    Lion(std::string n, int a) : Animal(n, a) {}

    void makeSound() const override {
        std::cout << "Roar!" << std::endl;
    }
};

class Snake : public Animal {
public:
    Snake(std::string n, int a) : Animal(n, a) {}

    void makeSound() const override {
        std::cout << "Hiss!" << std::endl;
    }
};

int main() {
    std::vector<Animal*> zoo;

    zoo.push_back(new Lion("Simba", 5));
    zoo.push_back(new Snake("Kaa", 7));

    for (const auto& animal : zoo) {
        animal->info();
        animal->makeSound();
    }

    
    for (auto& animal : zoo) {
        delete animal;
    }
    zoo.clear();

    return 0;
}
