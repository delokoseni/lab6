#include <iostream>
#include <Windows.h>
#include "Employee.h"
#include "Managemployee.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Subemployee subemployee, subemployee1(1);
    Managemployee managemployee;
    Employee* employee, *emp;
    employee = &subemployee;
    employee->output();;
    cout << endl;
    employee->printcounter();
    cout << endl;
    //subemployee = subemployee + subemployee1;
    employee->output();
    //employee = employee + emp;
    return 0;
}