#include "class.h"

void Human::set_growth(int human_growth)
{
	(human_growth < 0) ? growth = 0 : growth = human_growth;
}

void Human::set_weight(int human_weight)
{
	(human_weight < 0) ? weight = 0 : weight = human_weight;
	weight = human_weight;
}

void Human::set_age(int human_age)
{
	(human_age < 0) ? age = 0 : age = human_age;
}

void Employee::set_position(string human_position)
{
	position = human_position;
}

void Employee::set_salary(int human_salary)
{
	salary = human_salary;
}

void Student::set_course(int student_course)
{
	course = student_course;
}

void Student::set_specially(string student_specially)
{
	specially = student_specially;
}

