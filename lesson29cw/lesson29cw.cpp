#include "Employee.h"

int main()
{
    Employee a("Brazhnik Andriy", 15'000);
    a.showInfo();
    cout << "Total salary: " << a.calcSalary() << endl;
}

