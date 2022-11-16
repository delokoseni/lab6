#include "Subemployee.h"
#include "Employee.h"
#include <fstream>
using namespace std;

//конструктор класса employee без параметров
Subemployee::Subemployee() : Employee() {
	managerid = 0;
}


//конструктор класса employee со всеми параметрами
Subemployee::Subemployee(Experience e, Hours h, Jobtitle j, int managerid) : Employee(e, h, j) {
	this->managerid = managerid;
}

//конструктор класса employee с одним параметром
Subemployee::Subemployee(int allfields) : Employee(allfields){
	if (allfields >= 0) {
		managerid = allfields;
	}
	else {
		managerid = 0;
	}
}

//переопределение метода binding 
void Subemployee::binding(ofstream& file, string filename) {

}

//метод вывода Subemployee
void Subemployee::output() {
	this->Employee::output();
	cout << "ID Управляющего: " << managerid << endl;
}

//метод ввода
void Subemployee::input(){
	this->Employee::input();
	cout << "Введите ID Управляющего: ";
	cin >> managerid;
}

//перегрузка оператора +
Subemployee Subemployee::operator + (Subemployee e1) {
	//Employee* e, *th;
	/*exp = exp + e1.exp;
	hour = hour + e1.hour;
	jt = jt + e1.jt;*/
	managerid = e1.managerid;
	return *this;
}

//перегрузка оператора ++ префиксный
Subemployee& Subemployee::operator++() {
	//this->exp++;
	//this->hour++;
	//this->jt++;
	this->managerid++;
	return *this;
}

//перегрузка оператора ++ постфиксный
Subemployee Subemployee::operator++(int) {
	Subemployee temp = *this;
	++* this;
	return temp;
}