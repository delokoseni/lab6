#include "Managemployee.h"

//конструкторы класса

Managemployee::Managemployee() : Subemployee() {
	Subordinates subs;
	subordinates = subs;
}

Managemployee::Managemployee(int allfields) : Subemployee(allfields) {
	if (allfields >= 0) {
		Subordinates subs(allfields);
		subordinates = subs;
	}
	else {
		Subordinates subs;
		subordinates = subs;
	}
}

Managemployee::Managemployee(Experience exp, Hours h, Jobtitle j, int managerid, Subordinates subordinates) : Subemployee(exp, h, j, managerid) {
	this->subordinates = subordinates;
}

//метод вывода Managemployee
void Managemployee::output() {
	this->Subemployee::output();
	subordinates.output();
}

//метод ввода
void Managemployee::input() {
	this->Subemployee::input();
	subordinates.input();
}

//метод подсчета зарплаты
int Managemployee::getsalary(Salary sal) {
	int salary = this->Employee::getsalary(sal);
	salary += sal.allmoney(salary, subordinates);
	return salary;
}