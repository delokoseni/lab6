#include "Subemployee.h"
#include "Employee.h"
#include <fstream>
using namespace std;

//����������� ������ employee ��� ����������
Subemployee::Subemployee() : Employee() {
	managerid = 0;
}


//����������� ������ employee �� ����� �����������
Subemployee::Subemployee(Experience e, Hours h, Jobtitle j, int managerid) : Employee(e, h, j) {
	this->managerid = managerid;
}

//����������� ������ employee � ����� ����������
Subemployee::Subemployee(int allfields) : Employee(allfields){
	if (allfields >= 0) {
		managerid = allfields;
	}
	else {
		managerid = 0;
	}
}

//��������������� ������ binding 
void Subemployee::binding(ofstream& file, string filename) {

}

//����� ������ Subemployee
void Subemployee::output() {
	this->Employee::output();
	cout << "ID ������������: " << managerid << endl;
}

//����� �����
void Subemployee::input(){
	this->Employee::input();
	cout << "������� ID ������������: ";
	cin >> managerid;
}