#pragma once

#ifndef _CLASS_H
#define _CLASS_H

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

class human
{
public:
	human(int growth1 = 0, int weight1 = 0, int age1 = 0): growth(growth1), weight(weight1), age(age1)
	{

	}
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

class staff
{
public:
	staff(int salary1 = 0): salary(salary1)
	{
	
	}
	//void set_position(string human_position);
	//void set_salary(int human_salary);
	//string get_position() { return position; }
	//int get_salary() { return salary; }
private:
	string position;
	int salary;
};

#endif 