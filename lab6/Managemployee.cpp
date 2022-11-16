#include "Managemployee.h"



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