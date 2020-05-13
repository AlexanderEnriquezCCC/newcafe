#ifndef MENU_H
#define MENU_H

#include <vector>
#include <string>

#include "items.hpp"
#include "burger.hpp"
#include "tea.hpp"
#include "coffee.hpp"
#include "sandwhich.hpp"
#include "purchase.hpp"

class MenuClass
{
    private:

    purchaseClass * p = new purchaseClass();
    BurgerClass * b = new BurgerClass();
    CoffeeClass * c = new CoffeeClass();
    SandwhichClass * s = new SandwhichClass();
    TeaClass * t = new TeaClass();

    std::vector<double> m_prices;
    std::vector<std::string> m_names;

    int m_userChoice;

    public:
    MenuClass();
    void addToPriceVect(); //adds to m_prices;
    void addToNameVect(); //adds to m_name;
    void Display();

};

#endif