#include "pch.h"
#include "CppUnitTest.h"
#include "PetDomain.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(PetTest)
    {
    public:

        // Тестирование создания питомца
        TEST_METHOD(TestCreatePet)
        {
            pet::Pet p("Барсик", "10.03.2018");
            Assert::AreEqual(std::string("Барсик"), p.getName());
            Assert::AreEqual(std::string("10.03.2018"), p.getBirthDate());
        }

        // Тестирование установки имени
        TEST_METHOD(TestSetName)
        {
            pet::Pet p("Барсик", "10.03.2018");
            p.setName("Мурзик");
            Assert::AreEqual(std::string("Мурзик"), p.getName());
        }

        // Тестирование установки даты рождения
        TEST_METHOD(TestSetBirthDate)
        {
            pet::Pet p("Барсик", "10.03.2018");
            p.setBirthDate("25.12.2020");
            Assert::AreEqual(std::string("25.12.2020"), p.getBirthDate());
        }

        // Тестирование исключения для пустого имени
        TEST_METHOD(TestEmptyNameException)
        {
            Assert::ExpectException<std::invalid_argument>(
                [] { pet::Pet p("", "10.03.2018"); });
        }

        // Тестирование исключения для неверного формата даты рождения
        TEST_METHOD(TestInvalidBirthDateException)
        {
            Assert::ExpectException<std::invalid_argument>(
                [] { pet::Pet p("Барсик", "10-03-2018"); });
        }
    };
}
