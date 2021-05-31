#include <iostream>
#include "User.h"
using namespace std;

User::User()
{
	ID = 0;
	Name = "Null";
	Surname = "Null";
	age = 0;
	weight = 0;
	week = 0;
	takenCalory = 0;
	burnedCalory = 0;
}
User::User(int ID, string Name, string Surname, int age, int weight, int week, int burnedCalory, int takenCalory)
{
	this->ID = ID;
	this->Name = Name;
	this->Surname = Surname;
	this->age = age;
	this->weight = weight;
	this->week = week;
	this->burnedCalory = burnedCalory;
	this->takenCalory = takenCalory;
}
User::User(const User &obj)
{
	this->ID = obj.ID;
	this->Name = obj.Name;
	this->Surname = obj.Surname;
	this->age = obj.age;
	this->weight = obj.weight;
	this->week = obj.week;
	this->burnedCalory = obj.burnedCalory;
	this->takenCalory = obj.takenCalory;
	
}
User& User::operator = (const User &obj)
{
	this->ID = obj.ID;
	this->Name = obj.Name;
	this->Surname = obj.Surname;
	this->age = obj.age;
	this->weight = obj.weight;
	this->week = obj.week;
	this->burnedCalory = obj.burnedCalory;
	this->takenCalory = obj.takenCalory;
	return *this;
}
User User::operator + (const User &obj)
{
	return User(0, "Null", "Null", 0, 0, 0, this->burnedCalory + obj.burnedCalory, this->takenCalory + obj.takenCalory);
}
ostream& operator << (ostream &out, const User &obj)
{
	out << "ID >			" << obj.ID << endl;
	out << "Name >			" << obj.Name << endl;
	out << "Surname >		" << obj.Surname << endl;
	out << "Age >			" << obj.age << endl;
	out << "Weight >		" << obj.weight << endl;
	out << "Week >			" << obj.week << endl;
	out << "Burned Calori >		" << obj.burnedCalory << endl;
	out << "Taken Calori >		" << obj.takenCalory << endl << endl;
	return out;
}

int User::getID()							{	return this->ID;				}
string User::getName()						{	return this->Name;				}
string User::getSurname()					{	return this->Surname;			}
int User::getWeek()							{	return this->week;				}
int User::getAge()							{	return this->age;				}
int User::getWeight()						{	return this->weight;			}
int User::getBurnedCalory()					{	return this->burnedCalory;		}
int User::getTakenCalory()					{	return this->takenCalory;		}

void User::setID(int ID)					{	this->ID = ID;						}
void User::setName(int Name)				{	this->Name = Name;					}
void User::setSurname(int Surname)			{	this->Surname = Surname;			}
void User::setAge(int Week)					{	this->week = week;					}
void User::setWeight(int Week)				{	this->week = age;					}
void User::setWeek(int Week)				{	this->week = weight;				}
void User::setBurnedCalory(int burnedCalory){	this->burnedCalory = burnedCalory;	}
void User::setTakenCalory(int takenCalory)	{	this->takenCalory = takenCalory;	}

//////////////////////////////////////////////////////////////////////////////////////////

void User::enterInfo()
{
	cout << "Enter new User Info!" << endl;
	cout << "Name >	" ; 		cin >> this->Name;
	cout << "Surname > " ; 		cin >> this->Surname;
	cout << "Age > " ; 			cin >> this->age;
	cout << "Weight > " ; 		cin >> this->weight;
	cout << "Week > " ; 		cin >> this->week;
	cout << "Taken Calory > " ;	cin >> this->burnedCalory;
	cout << "Burned Calory > " ;cin >> this->takenCalory;

}

void User::sportCalori(int sportMin, int sportType)
{
	if(sportType == 1)	
	{
		Basketball obj;	
		obj.amountCalForExercise(sportMin);
		this->burnedCalory += obj.getTotalCal();
		this->count.countBasketball++; 
	}
	
	if(sportType == 2)	
	{
		Football obj;
		obj.amountCalForExercise(sportMin);
		this->burnedCalory += obj.getTotalCal();
		this->count.countFootball++;
	}
	if(sportType == 3)	
	{
		Tennis obj;
		obj.amountCalForExercise(sportMin);
		this->burnedCalory += obj.getTotalCal();
		this->count.countTennis++;
	}
	if(sportType == 4)	
	{
		Swimming obj;
		obj.amountCalForExercise(sportMin);
		this->burnedCalory += obj.getTotalCal();
		this->count.countSwimming++;
	}
}


////////////////////////////////////////////////////////////////////////////////////////////

void User::mealCalori(int mealType, int portion)
{
	if(mealType == 1)
	{
		Breakfast obj;
		obj.amountCalForMeal(portion);
		this->takenCalory += obj.getCalTaken();
		this->count.countBreakfast++;
	}
	if(mealType == 2)
	{
		Lunch obj;
		obj.amountCalForMeal(portion);
		this->takenCalory += obj.getCalTaken();
		this->count.countLunch++;
	}
	if(mealType == 3)
	{
		Dinner obj;
		obj.amountCalForMeal(portion);
		this->takenCalory += obj.getCalTaken();
		this->count.countDinner++;
	}
}

void User::mealInfoWeekly()
{
	cout << "Breakfast	-->  " << this->count.countBreakfast << endl;
	cout << "Lunch		-->  " << this->count.countLunch << endl;
	cout << "Dinner		-->  " << this->count.countDinner << endl;
}
void User::sportInfoWeekly()
{
	cout << "Basketball	-->  " << this->count.countBasketball << endl;
	cout << "Football	-->  " << this->count.countFootball << endl;
	cout << "Tennis		-->  " << this->count.countTennis << endl;
	cout << "Swimming	-->  " << this->count.countSwimming << endl;

}
void User::totalCalorisInfoWeekly()
{
	cout << "Consumed Calory	-->  " << this->takenCalory << endl;
	cout << "Burned Calory	-->  " << this->burnedCalory << endl;
}
