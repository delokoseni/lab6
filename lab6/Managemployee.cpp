#include "Managemployee.h"



//����� ������ Managemployee
void Managemployee::output() {
	this->Subemployee::output();
	subordinates.output();
}

//����� �����
void Managemployee::input() {
	this->Subemployee::input();
	subordinates.input();
}