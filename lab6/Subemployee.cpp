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
	cout << "ID ”правл€ющего: " << managerid << endl;
}

//метод ввода
void Subemployee::input(){
	this->Employee::input();
	cout << "¬ведите ID ”правл€ющего: ";
	cin >> managerid;
}