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
	void tofile(ofstream& file, string filename) override;
	void getfromfile(ifstream& file, string filename) override;
	Subemployee& operator= (Subemployee sub);
};

