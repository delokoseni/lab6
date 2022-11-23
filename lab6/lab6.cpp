#include <iostream>
#include <Windows.h>
#include "Managemployee.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Subemployee subemployee(50), subemployee1(1);
    Experience exp;
    Hours h; 
    Jobtitle j; 
    int managerid = 19; 
    Subordinates subordinates;
    Subemployee arr[4];
    cin >> arr[0];
    Managemployee<Subemployee, 4> managemployee(exp, h, j, managerid, subordinates, arr);
    managemployee.output();
    cout << endl << managemployee << endl;
    Employee* employee;
    Salary sal(3, 3, 3, 3, true, true);
    employee = &subemployee;
    employee->output();;
    cout << endl;
    employee->printcounter();
    cout << endl;
    Employee* emp;
    emp = &subemployee;
    cout << "Зарплата subemployee: " << emp->getsalary(sal) << endl;
    emp = &managemployee;
    cout << endl;
    cout << subemployee;
    cout << endl << endl;
    cout << "Зарплата managemployee: " << emp->getsalary(sal) << endl;
    cout << endl;
    managemployee = subemployee1;
    managemployee.output();
    return 0;
}