#pragma once
#include "Experience.h"
#include "Hours.h"
#include "Jobtitle.h"
#include "Subordinates.h"
#include "checkfileextension.h"
#include <fstream>
using namespace std;

class Employee {
public:
	virtual void output();
	virtual void input();
	virtual int getsalary(Salary sal);
	virtual string getpremium(int houramount);
	virtual void printcounter();
	virtual void minuscounter();
	virtual void minuscounter(int number);
	virtual void editjtitle(string jtitle, string add);
	virtual Employee* get();
	virtual Employee& getadress();
	virtual Employee operator + (Employee e1);
	virtual Employee& operator++(); //префиксный
	virtual Employee operator++(int); //постфиксный
	virtual void tofile(ofstream& file, string filename);
	virtual void getfromfile(ifstream& file, string filename);
private:
	static int counter;
	int id; //индивидуальный номер
	Experience exp; //стаж
	Hours hour; //отработанные за мес€ц часы
	Jobtitle jt; //должность
};

