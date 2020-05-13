#ifndef PURCHASE_H
#define PURCHASE_H
#include "items.hpp"
#include "changeCalculator.hpp"

class purchaseClass
{
    private:
    int m_pay;
    int m_purchaseAmnt;
    double m_price;
    double m_change;

    changeCalculatorClass * calculation = new changeCalculatorClass();

    public:
    purchaseClass();
    void purchase(ItemClass i);
};

#endif