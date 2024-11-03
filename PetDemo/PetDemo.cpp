#include <iostream>
#include "PetDomain.h"

int main() {
    try {
        pet::Pet p1("Бобик", "01.01.2020");
        std::cout << "Имя питомца: " << p1.getName() << std::endl;
        std::cout << "Дата рождения: " << p1.getBirthDate() << std::endl;

        pet::Pet p2("Шарик", "15.06.2019");
        p2.setName("Барсик");
        p2.setBirthDate("05.05.2021");
        std::cout << "Измененный питомец - Имя: " << p2.getName() << ", Дата рождения: " << p2.getBirthDate() << std::endl;
    }
    catch (const std::exception& ex) {
        std::cerr << "Ошибка: " << ex.what() << std::endl;
    }

    return 0;
}
