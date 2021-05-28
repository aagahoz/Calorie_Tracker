#include <iostream>
#include "Meals.h"
using namespace std;


Breakfast::Breakfast()
{
	calTaken = 0;
}
Breakfast::Breakfast(int calTaken)
{
	this->calTaken = calTaken;
}
Breakfast::Breakfast(const Breakfast& obj)
{
	this->calTaken = obj.calTaken;
}
Breakfast& Breakfast::operator = (const Breakfast& obj)
{
	this->calTaken = obj.calTaken;
	return *this;
}
void Breakfast::setCalTaken(int calTaken)
{
	this->calTaken = calTaken;
}
int Breakfast::getCalTaken()
{
	return this->calTaken;
}

void Breakfast::amountCalForMeal(int portion)
{
	if(portion == 1)	this->calTaken = 200; 
	if(portion == 2)	this->calTaken = 400; 
	if(portion == 3)	this->calTaken = 600; 
}

////////////////////////////////////////////////////////////////////////////////////////////////////

Lunch::Lunch()
{
	calTaken = 0;
}
Lunch::Lunch(int calTaken)
{
	this->calTaken = calTaken;
}
Lunch::Lunch(const Lunch& obj)
{
	this->calTaken = obj.calTaken;
}
Lunch& Lunch::operator = (const Lunch& obj)
{
	this->calTaken = obj.calTaken;
	return *this;
}

void Lunch::setCalTaken(int calTaken)
{
	this->calTaken = calTaken;
}
int Lunch::getCalTaken()
{
	return this->calTaken;
}

void Lunch::amountCalForMeal(int portion)
{
	if(portion == 1)	this->calTaken = 200; 
	if(portion == 2)	this->calTaken = 400; 
	if(portion == 3)	this->calTaken = 600; 
}

////////////////////////////////////////////////////////////////////////////////////////////////////

Dinner::Dinner()
{
	calTaken = 0;
}
Dinner::Dinner(int calTaken)
{
	this->calTaken = calTaken;
}
Dinner::Dinner(const Dinner& obj)
{
	this->calTaken = obj.calTaken;
}
Dinner& Dinner::operator = (const Dinner& obj)
{
	this->calTaken = obj.calTaken;
	return *this;

}

void Dinner::setCalTaken(int calTaken)
{
	this->calTaken = calTaken;
}
int Dinner::getCalTaken()
{
	return this->calTaken;
}

void Dinner::amountCalForMeal(int portion)
{
	if(portion == 1)	this->calTaken = 200; 
	if(portion == 2)	this->calTaken = 400; 
	if(portion == 3)	this->calTaken = 600; 
}
