#include "class.h"

void human::set_growth(int human_growth)
{
	(human_growth < 0) ? growth = 0 : growth = human_growth;
}

void human::set_weight(int human_weight)
{
	(human_weight < 0) ? weight = 0 : weight = human_weight;
	weight = human_weight;
}

void human::set_age(int human_age)
{
	(human_age < 0) ? age = 0 : age = human_age;
}


