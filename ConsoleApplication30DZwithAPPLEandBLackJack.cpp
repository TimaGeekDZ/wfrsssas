// ConsoleApplication30.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iostream>
#include <cstdint>
using namespace std;

class Fruit {
    std::string name;
    std::string color;
public:
    Fruit(std::string name, std::string color) : name(name), color(color) { }
    std::string getName() const { return name; }
    std::string getColor() const { return color; }
};

class Apple : public Fruit {
public:
    Apple(std::string color = "red", std::string name = "Apple") : Fruit(name, color) { }
};

class Banana : public Fruit {
public:
    Banana(std::string name = "Banana", std::string color = "yellow") : Fruit(name, color) { }
};

class GrannySmith : public Apple {
public:
    GrannySmith() : Apple("green", "GrannySmith") { }
};
int main()
{
    Apple a("red");
    Banana b;
    GrannySmith c;

    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

    return 0;
}

DZ 3.
 //Что нам нужно для игры в BlackJack
    1. Игрок. (т.е класс Person)
    2. AI  (раздающий карты в рандомном порядке. 3 условие и 2 выхода: ,больше 21 - то проиграл, меньше 21 или равно то выиграл)
    3. AI игрок (Person управляющийся компьютером, можно сделать что-то похожее как при игре в крестики нолики) ОЧЕНЬ СЛОЖНО, мне бы еще все что я задумал написать.
    4. Карты(естественно), 52 карты (можно заменить цифрами, но если вывести обозначение карт на экран приложения, то можно облегчить себе работу)
   
// Если сказать проще:
3 класса.: AI, Person(игрок)(производные: только имя), Карты(производные : номинал, видел что некоторые пишут что нужна масть, но зачем себе усложнять),