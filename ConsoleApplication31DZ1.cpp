#include <iostream>
#include <cstring>
#include <cstdint>
#include <iostream>
#include <string>

using namespace std;
class Person {
    std::string name;
    std::uint8_t age;
    std::string gender;
    std::uint8_t weight;
protected:
    Person(std::string _name, std::string _gender, std::uint8_t _age, std::uint8_t _weight) :
        name(_name), gender(_gender), age(_age), weight(_weight) { }
public:

    
    void setName(std::string name) { this->name = name; }
    void setAge(std::uint8_t age) { this->age = age; }
    void setWeight(std::uint8_t weight) { this->weight = weight; }
    std::string getInfo() const {
        return "Чувак " + name + "  " + gender + " возраст " + std::to_string(age) + " весом " + std::to_string(weight) + " ";
    }
};

class Student : public Person {
    std::uint16_t learnYear;
    static std::uint8_t counter;
public:
    Student(std::string _name, std::string _gender, std::uint8_t _age, std::uint8_t _weight, std::uint16_t learnYear) :
        Person(_name, _gender, _age, _weight) {
        Student::counter++;
        this->learnYear = learnYear;
    }
    static std::uint8_t get_counter() {
        return Student::counter;
    }
    void set_learnYear(std::uint16_t learnYear) { this->learnYear = learnYear; }
    std::uint16_t get_learnYear() const { return learnYear; }
    std::string getInfo() const {
        return Person::getInfo() + "учится с " + std::to_string(learnYear) + " ";
    }
};
std::uint8_t Student::counter = 0;

int main(int argc, const char** argv) { 
    setlocale(LC_ALL, "Russian");
    Student s("Тамердан", "мужик", 36, 110, 2021);
    std::cout << s.getInfo() << std::to_string(s.get_counter()) << std::endl;
    Student t("Дарт Вейдер", "мужик", 35, 100, 2021);
    std::cout << t.getInfo() << std::to_string(Student::get_counter()) << std::endl;
    Student u("Ким Чен Ын", "мужик", 34, 90, 2021);
    std::cout << u.getInfo() << std::to_string(u.get_counter()) << std::endl;
    std::cout << std::to_string(Student::get_counter()) << std::endl;
    return 0;
}