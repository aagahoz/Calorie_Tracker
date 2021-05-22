#include <iostream>
#include "User.h"
using namespace std;


User::User()
{
	ID = -1;
	Name = "Null";
	Surname = "Null";
	week = -1;
}
User::User(int ID, string Name, string Surname, int Week)
{
	this->ID = ID;
	this->Name = Name;
	this->Surname = Surname;
	this->week = week;
}
User::User(const User &obj)
{
	this->ID = obj.ID;
	this->Name = obj.Name;
	this->Surname = obj.Surname;
	this->week = obj.week;
}
User& User::operator = (const User &obj)
{
	this->ID = obj.ID;
	this->Name = obj.Name;
	this->Surname = obj.Surname;
	this->week = obj.week;
	return *this;
}

ostream& operator << (ostream &out, const User &obj)
{
	out << "ID >		" << obj.ID << endl;
	out << "Name >		" << obj.Name << endl;
	out << "Surname >	" << obj.Surname << endl;
	out << "Week >		" << obj.week << endl << endl;
	return out;
}

		
int User::getID()
{
	return this->ID;
}
string User::getName()
{
	return this->Name;
}
string User::getSurname()
{
	return this->Surname;
}
int User::getWeek()
{
	return this->week;
}

void User::setID(int ID)
{
	this->ID = ID;
}
void User::setName(int Name)
{
	this->Name = Name;
}
void User::setSurname(int Surname)
{
	this->Surname = Surname;
}
void User::setWeek(int Week)
{
	this->week = week;
}
