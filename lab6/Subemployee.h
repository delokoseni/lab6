#pragma once
#include "Employee.h"

class Subemployee : public Employee
{
	friend ostream& operator<< (ostream& os, Subemployee& subemployee);
private:
	int managerid;
public:
	Subemployee();
	Subemployee(int allfields);
	Subemployee(Experience exp, Hours h, Jobtitle j, int managerid);
	void binding(ofstream& file, string filenamesubs, string filenamemanag, int managerid) override;
	virtual void output() override;
	virtual void input() override;
	void tofile(ofstream& file, string filename) override;
	void getfromfile(ifstream& file, string filename) override;
	Subemployee operator= (Subemployee sub);
};

