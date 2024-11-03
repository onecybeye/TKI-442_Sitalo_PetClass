#include "pch.h"
#include "PetDomain.h"
#include <regex>

namespace pet {

    Pet::Pet(const std::string& n, const std::string& bd) : name(n), birthDate(bd) {
        if (name.empty()) {
            throw std::invalid_argument("Имя питомца не может быть пустым.");
        }
        std::regex datePattern("\\d{2}\\.\\d{2}\\.\\d{4}");
        if (!std::regex_match(birthDate, datePattern)) {
            throw std::invalid_argument("Дата рождения должна быть в формате дд.мм.гггг.");
        }
    }

    std::string Pet::getName() const {
        return name;
    }

    std::string Pet::getBirthDate() const {
        return birthDate;
    }

    void Pet::setName(const std::string& n) {
        if (n.empty()) {
            throw std::invalid_argument("Имя питомца не может быть пустым.");
        }
        name = n;
    }

    void Pet::setBirthDate(const std::string& bd) {
        std::regex datePattern("\\d{2}\\.\\d{2}\\.\\d{4}");
        if (!std::regex_match(bd, datePattern)) {
            throw std::invalid_argument("Дата рождения должна быть в формате дд.мм.гггг.");
        }
        birthDate = bd;
    }
}
