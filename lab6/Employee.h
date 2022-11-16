#pragma once
#include "Experience.h"
#include "Hours.h"
#include "Jobtitle.h"
#include "Subordinates.h"
#include "checkfileextension.h"
#include <iostream>
#include <fstream>
using namespace std;

class Employee {
	friend class Subemployee;
public:
	Employee();
	Employee(int allfields);
	Employee(Experience e, Hours h, Jobtitle j);
	virtual void binding(ofstream& file, string filename) = 0;
	virtual void output();
	virtual void input();
	/**
	virtual int getsalary(Salary sal);
	virtual string getpremium(int houramount);
	**/
	void printcounter();
	void minuscounter();
	void minuscounter(int number);
	void editjtitle(string jtitle, string add);
	Employee* get();
	Employee& getadress();
	Employee* operator + (Employee& e1);
	Employee& operator++(); //префиксный
	Employee* operator++(int); //постфиксный
	/**
	virtual void tofile(ofstream& file, string filename);
	virtual void getfromfile(ifstream& file, string filename);**/
private:
	static int counter;
	int id; //индивидуальный номер
	Experience exp; //стаж
	Hours hour; //отработанные за мес€ц часы
	Jobtitle jt; //должность
};

