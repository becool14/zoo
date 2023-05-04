English:
In this example, we have implemented an object-oriented zoo system in C++.

The Animal class serves as the base class for the Lion and Snake classes.

It contains a pure virtual function makeSound() that all derived classes must implement.

The Lion and Snake classes inherit from the Animal class and implement the makeSound() method, demonstrating polymorphism.

In the main function, we create a vector of pointers to Animal class objects, add instances of Lion and Snake classes to it, and call the info() and makeSound() methods for each of them.

Polish:
W tym przykładzie zaimplementowaliśmy obiektowy system zoo w języku C++.

Klasa Animal służy jako klasa bazowa dla klas Lion i Snake. Zawiera ona czystą wirtualną funkcję makeSound(), którą muszą zaimplementować wszystkie klasy pochodne.

Klasy Lion i Snake dziedziczą po klasie Animal i implementują metodę makeSound(), demonstrując polimorfizm.

W funkcji main tworzymy wektor wskaźników do obiektów klasy Animal, dodajemy do niego instancje klas Lion i Snake i wywołujemy metody info() oraz makeSound() dla każdego z nich.
