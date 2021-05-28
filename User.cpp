#include <iostream>
#include "User.h"
using namespace std;

User::User()
{
	ID = -1;
	Name = "Null";
	Surname = "Null";
	week = -1;
	totalCalori = 0;
}
User::User(int ID, string Name, string Surname, int age, int weight, int Week, int totalCalori)
{
	this->ID = ID;
	this->Name = Name;
	this->Surname = Surname;
	this->age = age;
	this->weight = weight;
	this->week = week;
	this->totalCalori = totalCalori;
}
User::User(const User &obj)
{
	this->ID = obj.ID;
	this->Name = obj.Name;
	this->Surname = obj.Surname;
	this->age = obj.age;
	this->weight = obj.weight;
	this->week = obj.week;
	this->totalCalori = obj.totalCalori;
	
}
User& User::operator = (const User &obj)
{
	this->ID = obj.ID;
	this->Name = obj.Name;
	this->Surname = obj.Surname;
	this->age = obj.age;
	this->weight = obj.weight;
	this->week = obj.week;
	this->totalCalori = obj.totalCalori;
	return *this;
}
User User::operator + (const User &obj)
{
	return User(0, "Null", "Null", 0, 0, 0, this->totalCalori + obj.totalCalori);
}
ostream& operator << (ostream &out, const User &obj)
{
	out << "ID >		" << obj.ID << endl;
	out << "Name >		" << obj.Name << endl;
	out << "Surname >	" << obj.Surname << endl;
	out << "Age >		" << obj.age << endl;
	out << "Weight >	" << obj.weight << endl;
	out << "Week >		" << obj.week << endl;
	out << "Calori >	" << obj.totalCalori << endl << endl;
	return out;
}

int User::getID()							{	return this->ID;				}
string User::getName()						{	return this->Name;				}
string User::getSurname()					{	return this->Surname;			}
int User::getWeek()							{	return this->week;				}
int User::getAge()							{	return this->age;				}
int User::getWeight()						{	return this->weight;				}
int User::getTotalCalori()					{	return this->totalCalori;		}

void User::setID(int ID)					{	this->ID = ID;					}
void User::setName(int Name)				{	this->Name = Name;				}
void User::setSurname(int Surname)			{	this->Surname = Surname;		}
void User::setAge(int Week)					{	this->week = week;				}
void User::setWeight(int Week)				{	this->week = age;				}
void User::setWeek(int Week)				{	this->week = weight;				}
void User::setTotalCalori(int totalCalori)	{	this->totalCalori = totalCalori;}

//////////////////////////////////////////////////////////////////////////////////////////

void User::sportCalori(int sportMin, Basketball obj)
{
	obj.amountCalForExercise(sportMin);
	this->totalCalori += obj.getTotalCal();
}
void User::sportCalori(int sportMin, Football obj)
{
	obj.amountCalForExercise(sportMin);
	this->totalCalori += obj.getTotalCal();
}
void User::sportCalori(int sportMin, Tennis obj)
{
	obj.amountCalForExercise(sportMin);
	this->totalCalori += obj.getTotalCal();
}

////////////////////////////////////////////////////////////////////////////////////////////

void User::mealCalori(Breakfast obj, int portion)
{
	obj.amountCalForMeal(portion);
	this->totalCalori -= obj.getCalTaken();
}
void User::mealCalori(Lunch obj, int portion)
{
	obj.amountCalForMeal(portion);
	this->totalCalori -= obj.getCalTaken();
}
void User::mealCalori(Dinner obj, int portion)
{
	obj.amountCalForMeal(portion);
	this->totalCalori -= obj.getCalTaken();
}
