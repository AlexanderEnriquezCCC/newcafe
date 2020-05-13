#include "changeCalculator.hpp"

changeCalculatorClass::changeCalculatorClass()
{
    this->m_Quarters = 25;
    this->m_Dime = 10;
    this->m_Nickel = 5;
    this->m_Penny = 1;
    this->m_Coins = 0;
}

void changeCalculatorClass::calculateChange(double i)
{
    int dollars = floor(i);
    i = i-dollars;
    m_Coins = i*100; //turns what's left of i, compatible to an int, making it divisable with the changes
    std::cout << "Your cash is $" << dollars << " dollars," << std::endl;
    std::cout << m_Coins/m_Quarters << " quarters," << std::endl;
    m_Coins = m_Coins%m_Quarters;
    std::cout << m_Coins/m_Dime << " dimes," << std::endl;
    m_Coins = m_Coins%m_Dime;
    std::cout << m_Coins/m_Nickel << " nickles," << std::endl;
    m_Coins = m_Coins%m_Nickel;
    std::cout << "and " << m_Coins/m_Penny << " pennies." << std::endl;
}