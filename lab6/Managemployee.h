#pragma once
#include "Subemployee.h"

template <typename T, int i>
class Managemployee : public Subemployee
{
	using Subemployee::operator =;
private: 
	Subordinates subordinates;
	T arr[i];
public:
	Managemployee(Experience exp, Hours h, Jobtitle j, int managerid, Subordinates subordinates, T arr[i]) : Subemployee(exp, h, j, managerid) {
		this->subordinates = subordinates;
		for (int j = 0; j < i; j++) {
			this->arr[j] = arr[j];
		}
	}
	Managemployee(int allfields) : Subemployee(allfields) {
		if (allfields >= 1) {
			Subordinates subs(allfields);
			subordinates = subs;
		}
		else {
			Subordinates subs;
			subordinates = subs;
		}
		for (int j = 0; j < i; j++) {
			arr[j] = allfields;
		}
	}
	Managemployee() : Subemployee() {
		Subordinates subs;
		subordinates = subs;
		for (int j = 0; j < i; j++) {
			arr[j] = 0;
		}
	}
	void output() override {
		this->Subemployee::output();
		subordinates.output();
		cout << "Массив подчиненных:\n";
		for (int j = 0; j < i; j++) {
			cout << arr[j] << endl;
		}
	}
	void input() override {
		this->Subemployee::input();
		subordinates.input();
		for (int j = 0; j < i; j++) {
			cout << "Введите подчиненного: ";
			cin >> arr[j];
		}
	}
	int getsalary(Salary sal) override {
		int salary = this->Employee::getsalary(sal);
		salary += sal.allmoney(salary, subordinates);
		return salary;
	}
	Managemployee operator=(Subemployee sub) {
		Subemployee::operator=(sub);
		return *this;
	}
};

