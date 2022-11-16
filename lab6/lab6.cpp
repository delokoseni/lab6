#include <iostream>
#include <Windows.h>
#include "Employee.h"
#include "Managemployee.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Subemployee subemployee;
    Managemployee managemployee;
    Employee* employee;
    employee = &subemployee;
    employee->output();
    cout << endl;
    employee = &managemployee;
    employee->output();
    cout << endl;
    employee->printcounter();
    return 0;
}