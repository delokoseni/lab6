#pragma once
#include "Employee.h"

class Subemployee : public Employee
{
private:
	int managerid;
public:
	Subemployee();
	Subemployee(int allfields);
	Subemployee(Experience exp, Hours h, Jobtitle j, int managerid);
	void binding(ofstream& file, string filename) override;
	virtual void output() override;
	virtual void input() override;
	//int getsalary(Salary sal);
	//string getpremium(int houramount);
	//void printcounter();
	//void minuscounter();
	//void minuscounter(int number);
	//void editjtitle(string jtitle, string add);
	Subemployee operator + (Subemployee e1);
	Subemployee& operator++(); //префиксный
	Subemployee operator++(int); //постфиксный
	//void tofile(ofstream& file, string filename);
	//void getfromfile(ifstream& file, string filename);
};

