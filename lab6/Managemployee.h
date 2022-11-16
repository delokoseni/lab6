#pragma once
#include "Subemployee.h"

class Managemployee : public Subemployee
{
private: 
	Subordinates subordinates;
public:
	void output() override;
	void input() override;
};

