#include "Employee.h"
#include <fstream>
using namespace std;

int Employee::counter = 0;

//конструктор класса employee со всеми параметрами
Employee::Employee(Experience e, Hours h, Jobtitle j) {
	counter++;
	id = counter;
	exp = e;
	hour = h;
	jt = j;
}

//конструктор класса employee с одним параметром
Employee::Employee(int allfields) {
	counter++;
	id = counter;
	if (allfields >= 0) {
		Experience e(allfields);
		Hours h(allfields);
		Jobtitle j(allfields);
		exp = e;
		hour = h;
		jt = j;
	}
	else {
		cout << "Указано недопустимое значение allfields." << endl;
		Experience e;
		Hours h;
		Jobtitle j;
		exp = e;
		hour = h;
		jt = j;
	}
}

//конструктор класса employee без параметров
Employee::Employee() {
	counter++;
	id = counter;
	Experience e;
	Hours h;
	Jobtitle j;
	exp = e;
	hour = h;
	jt = j;
}

//метод вывода Employee
void Employee::output() {
	cout << "ID: " << id << endl;
	exp.output();
	hour.output();
	jt.output();
}

//метод ввода Employee
void Employee::input() {
	exp.input();
	hour.input();
	while (getchar() != '\n');
	jt.input();
}

//метод вывода счетчика количества сотрудников
void Employee::printcounter() {
	cout << "Количество сотрудников: " << counter << endl;
}

//метод уменьшения количества сотрудников
void Employee::minuscounter() {
	counter--;
	cout << "Количество сотрудников уменьшено на 1." << endl;
}
//метод уменьшения количества сотрудников
void Employee::minuscounter(int number) {
	int x = counter;
	counter = counter - number;
	cout << "Количество сотрудников уменьшено c " << x << " до " << counter << endl;
}