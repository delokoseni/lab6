//#include "Managemployee.h"

//конструкторы класса


//template <typename T>
//Managemployee<T>::Managemployee(int allfields) : Subemployee(allfields) {
//	if (allfields >= 0) {
//		Subordinates subs(allfields);
//		subordinates = subs;
//	}
//	else {
//		Subordinates subs;
//		subordinates = subs;
//	}
//}
//template <typename T>
//Managemployee<T>::Managemployee(Experience exp, Hours h, Jobtitle j, int managerid, Subordinates subordinates) : Subemployee(exp, h, j, managerid) {
//	this->subordinates = subordinates;
//}
//
////метод вывода Managemployee
//template <typename T>
//void Managemployee<T>::output() {
//	this->Subemployee::output();
//	subordinates.output();
//}
//
////метод ввода
//template <typename T>
//void Managemployee<T>::input() {
//	this->Subemployee::input();
//	subordinates.input();
//}
//
////метод подсчета зарплаты
//template <typename T>
//int Managemployee<T>::getsalary(Salary sal) {
//	int salary = this->Employee::getsalary(sal);
//	salary += sal.allmoney(salary, subordinates);
//	return salary;
//}
//
////перегрузка оператора присваивания
//template <typename T>
//Managemployee<T> Managemployee<T>::operator=(Subemployee sub) {
//	Subemployee::operator=(sub);
//	return *this;
//}