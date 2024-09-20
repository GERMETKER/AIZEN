#include <iostream>
#include <Windows.h>
//#include <cmath>
class Bebra 
{
public:
    //способы создания обЪектов
    Bebra()
    {
        Bebra(false, 0u);
    }
    Bebra(bool sign, unsigned units)
    {
        this->sign = sign;
        this->units = units;
    }
    Bebra(int number)
    {
        if (number < 0)
        {
            sign = true;
            units = abs(number);
        }
        else
        {
            sign = false;
            units = number;
        }
    }
    //способы обработки обЪектов
    void SetSign(bool sign)
    {
        this->sign = sign;
    }
    void SetUnits(unsigned units)
    {
        this->units = units;
    }
    bool GetSine()const
    {
        return sign;
    }
    unsigned GetUnits()const
    {
        return units;
    }
    //способы проверки сосотояний объекта
    bool IsOdd()
    {
        return bool(units % 2);
    }
    bool IsPositive()
    {
        return !sign;
    }
    //перезагрузки операторов

private:
    //поляданных и методы не для пользователе
    bool sign;
    unsigned units;
};


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Игорь лох!\n";
    Bebra bobr(4);
    return 0;
}
