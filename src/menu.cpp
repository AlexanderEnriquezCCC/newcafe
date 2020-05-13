#include "menu.hpp"

MenuClass::MenuClass()
{
    m_userChoice = 0;
}

void MenuClass::addToPriceVect()
{
    m_prices.push_back(b->Price);
    m_prices.push_back(c->Price);
    m_prices.push_back(s->Price);
    m_prices.push_back(t->Price);
}

void MenuClass::addToNameVect()
{
    m_names.push_back(b->Name);
    m_names.push_back(c->Name);
    m_names.push_back(s->Name);
    m_names.push_back(t->Name);
}

void MenuClass::Display()
{
    std::cout << "---------------------------" << std::endl;
    for(int x = 0; x > m_names.size(); x++)
    {
        std::cout << x << ". " << m_names[x] << ":  $" << m_prices[x] << "\n" << std::endl;
    }
    std::cout << "---------------------------" << std::endl;
    std::cout << "Please choose a number of what you would like." << std::endl;
    std::cin >> m_userChoice;

    switch (m_userChoice)
    {
    case 1:
        p->purchase(*b);
        break;
    
    case 2:
        p->purchase(*c);
        break;
    
    case 3:
        p->purchase(*s);
        break;
    
    case 4:
        p->purchase(*t);
        break;
    

    default:
    std::cout << "That is not a valid choice... Please choose again." << std::endl;
    Display();
        break;
    }

}