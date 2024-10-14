#include "Manager.h"

Manager::Manager()
{
    percent = 10;
    sales = 0;
}

Manager::Manager(string name, float salary, int percent, float sales) : Employee(name, salary)
{
    this->percent = percent;
    this->sales = sales;
}

int Manager::getPercent() const
{
    return percent;
}

float Manager::getSales() const
{
    return sales;
}

void Manager::setPercent(int percent)
{
    this->percent = percent;
}

void Manager::setSales(float sales)
{
    this->sales = sales;
}

void Manager::showInfo() const
{
    Employee::showInfo();
    cout << "Percent: " << percent << endl;
    cout << "Sales: " << sales << endl;
}

float Manager::calcSalary() const
{
    return (salary+sales*percent)*0.83;
}
