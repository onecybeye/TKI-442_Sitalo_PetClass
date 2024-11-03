#pragma once
#ifndef PET_H
#define PET_H

#include <iostream>
#include <string>

namespace pet {

    /**
    * @brief Класс Питомец.
    *
    * Этот класс предоставляет методы для работы с питомцем, включая получение его имени и даты рождения.
    */
    class Pet {
    private:
        std::string name;
        std::string birthDate;

    public:
        /**
        * @brief Инициализирует новый объект класса Pet.
        *
        * @param n Имя питомца.
        * @param bd Дата рождения питомца в формате "дд.мм.гггг".
        * @throws std::invalid_argument Если имя пустое или дата рождения не соответствует формату.
        */
        Pet(const std::string& n, const std::string& bd);

        /**
        * @brief Вернуть имя питомца.
        *
        * @return Имя питомца.
        */
        std::string getName() const;

        /**
        * @brief Вернуть дату рождения питомца.
        *
        * @return Дата рождения питомца.
        */
        std::string getBirthDate() const;

        /**
        * @brief Установить имя питомца.
        *
        * @param n Новое имя питомца.
        * @throws std::invalid_argument Если имя пустое.
        */
        void setName(const std::string& n);

        /**
        * @brief Установить дату рождения питомца.
        *
        * @param bd Новая дата рождения питомца.
        * @throws std::invalid_argument Если дата не соответствует формату "дд.мм.гггг".
        */
        void setBirthDate(const std::string& bd);
    };
}

#endif // PET_H
