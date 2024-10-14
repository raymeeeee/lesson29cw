#include "Teacher.h"

int main()
{
    /*Employee a("Brazhnik Andriy", 15'000);
    a.showInfo();
    cout << "Total salary: " << a.calcSalary() << endl;*/

    Teacher b("Kaluzhniy Artem", 10'000, 500, 20);
    b.showInfo();
    cout << "Total salary: " << b.calcSalary() << endl;
}

