#include <iostream>
#include <Windows.h>
#include "Employee.h"
#include "Managemployee.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Subemployee subemployee, subemployee1(1), subemployee2(20);
    Managemployee managemployee(50);
    Employee* employee, *emp;
    Salary sal(3, 3, 3, 3, true, true);
    employee = &subemployee;
    employee->output();;
    cout << endl;
    employee->printcounter();
    cout << endl;
    cout << "Зарплата managemployee: " << managemployee.getsalary(sal) << endl;
    cout << "Зарплата managemployee: " << managemployee.Employee::getsalary(sal) << endl;
    cout << endl;
    subemployee2 = subemployee;
    subemployee2.output();
    cout << endl;

    string fname = "text.txt";
    ofstream file;
    file.exceptions(ofstream::badbit | ofstream::failbit);
    try
    {
        file.open(fname, ios_base::app);
        subemployee1.tofile(file, fname);
        file.close();
    }
    catch (exception& ex1)
    {
        cout << ex1.what();
    }

    ifstream file1;
    file1.exceptions(ifstream::badbit | ifstream::failbit);
    try
    {
        file1.open(fname, ios_base::app);
        subemployee.getfromfile(file1, fname);
        file1.close();
        subemployee.output();
    }
    catch (exception& ex1)
    {
        cout << ex1.what();
    }

    return 0;
}