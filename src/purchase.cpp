#include "purchase.hpp"

purchaseClass::purchaseClass()
{
    this->m_change = 0;
    this->m_price = 0;
    this->m_purchaseAmnt;
    this->m_pay = 0;
}

void purchaseClass::purchase(ItemClass i)
{
    std::cout << "How much would you like to buy?" << std::endl;
    std::cin >> m_purchaseAmnt;
    m_price = m_purchaseAmnt*i.Price;

    std::cout << "How much would you like to pay? We only take bills." << std::endl;
    std::cin >> m_pay;

    if(m_pay < m_price)
    {
        std::cout << "This is not enough to pay for your order..." << std::endl;
    }
    else
    {
        m_change = m_pay-m_price;
        calculation->calculateChange(m_change);
    }
}