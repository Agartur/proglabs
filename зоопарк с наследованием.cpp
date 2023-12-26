#include <iostream>
#include <string>

class Animal {
public:
    int age;
    std::string name_of_animal;
    std::string diet;

    virtual void feed() {
        std::cout << "ты покормил " << name_of_animal << " этим " << diet << std::endl;
    };

    virtual void drink() {
        std::cout << "у тебя есть попить " << name_of_animal << " водичку" << std::endl;
    };
};

class Bird : public Animal {
public:
    void fly() {
        std::cout << "ты можешь " << name_of_animal << " летать" << std::endl;
    };
};

class Lion : public Animal {
public:
    void roar() {
        std::cout << "ты можешь " << name_of_animal << " рычать" << std::endl;
    };
};

class Horse : public Animal {
public:
    void ride() {
        std::cout << "ты едешь " << name_of_animal << std::endl;
    };
};

int main() {
    std::string animal, action;
    Bird Bobik;
    Bobik.name_of_animal = "Bobik";
    Bobik.age = 3;
    Bobik.diet = "зерна";

    Lion Simba;
    Simba.name_of_animal = "Пумба";
    Simba.age = 5;
    Simba.diet = "мяско";

    Horse spirit;
    spirit.name_of_animal = "дух";
    spirit.age = 7;
    spirit.diet = "травка";

    std::cout << "Выбери животное: птичка,лев,лошадь? ";
    std::cin >> animal;

    if (animal == "птичка") {
        std::cout << "Имя птички " << Bobik.name_of_animal << "." << std::endl;
        std::cout << "Выбери действие покормить,напоить,полетать: ";
        std::cin >> action;

        if (action == "кормить") {
            Bobik.feed();
        }
        else if (action == "пить") {
            Bobik.drink();
        }
        else if (action == "летать") {
            Bobik.fly();
        }
    }
    else if (animal == "Лев") {
        std::cout << "Имя льва " << Simba.name_of_animal << "." << std::endl;
        std::cout << "Выбери действие покормить, напоить, порычать: ";
        std::cin >> action;

        if (action == "feed") {
            Simba.feed();
        }
        else if (action == "напоить") {
            Simba.drink();
        }
        else if (action == "рычать") {
            Simba.roar();
        }
    }
    else if (animal == "лошадка") {
        std::cout << "Имя лошадки " << spirit.name_of_animal << "." << std::endl;
        std::cout << "Выбери дейтсвие: покормить, напоить, покататься: ";
        std::cin >> action;

        if (action == "кормить") {
            spirit.feed();
        }
        else if (action == "напоить") {
            spirit.drink();
        }
        else if (action == "покататься") {
            spirit.ride();
        }
    }

    return 0;
}
