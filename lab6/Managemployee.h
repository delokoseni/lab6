#pragma once
#include "Subemployee.h"

class Managemployee : public Subemployee
{
private: 
	Subordinates subordinates;
public:
	Managemployee(Experience exp, Hours h, Jobtitle j, int managerid, Subordinates subordinates);
	Managemployee(int allfields);
	Managemployee();
	void output() override;
	void input() override;
};

