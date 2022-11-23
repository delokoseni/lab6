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