#pragma once

#ifndef _CLASS_H
#define _CLASS_H

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

class Human
{
public:
	Human(int growth1 = 0, int weight1 = 0, int age1 = 0): growth(growth1), weight(weight1), age(age1)
	{

	}//za ulu protiv luki
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

class CommunityMember {};

class Employee
{
public:
	Employee(int salary1 = 0,string position1="trainee"): salary(salary1),position(position1)
	{
	
	}
	void set_position(string human_position);
	void set_salary(int human_salary);
	string get_position() { return position; }
	int get_salary() { return salary; }
private:
	string position;
	int salary;
};

class Student 
{
public:
	Student(int course1=1,string specially1 = "not indicated") : course(course1),specially(specially1)
	{

	}
	int get_course() { return course; }
	string get_specially() { return specially; }
	void set_course(int student_course);
	void set_specially(string student_specially);
private:
	int course;
	string specially;
};

class Alumnus 
{
private:
	int year_of_issue;
	bool red_diploma;
};

class Stuff {};

class Faculty{};

class Administrator {};

class Teacher {};

class AdministratorTeacher {};
#endif 