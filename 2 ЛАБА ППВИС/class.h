#pragma once

#ifndef _CLASS_H
#define _CLASS_H

#include <iostream>
#include <math.h>

class human
{
public:
	void set_growth(int human_growth);
	void set_weight(int human_weight);
	void set_age(int human_age);
	int get_growth() { return growth; }
	int get_weight() { return weight; }
	int get_age() { return age; }
private:
	int growth;
	int weight;
	int age;
};
#endif 