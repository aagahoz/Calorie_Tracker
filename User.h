#ifndef libraryUser_h_
#define libraryUser_h_
#include "Sports.h"
#include "Meals.h"
#include <iostream>
using namespace std;

class User
{
		int ID;
		string Name;
		string Surname;
		int age;
		int weight;
		int week;
		int totalCalori;

	public:
		User();
		User(int ID, string Name, string Surname, int age, int weight, int Week, int totalCalori);
		User(const User &obj);
		User& operator = (const User &obj);
		
		friend ostream& operator << (ostream &out, const User &obj);
		User operator + (User const &obj);

		int getID();
		string getName();
		string getSurname();
		int getAge();
		int getWeight();
		int getWeek();
		int getTotalCalori();
		void setID(int ID);
		void setName(int Name);
		void setSurname(int Surname);
		void setAge(int age);
		void setWeight(int weight);
		void setWeek(int Week);
		void setTotalCalori(int totalCalori);

		void sportCalori(int sportMin, Basketball obj);
		void sportCalori(int sportMin, Football obj);
		void sportCalori(int sportMin, Tennis obj);

		void mealCalori(Breakfast obj, int portion);
		void mealCalori(Lunch obj, int portion);
		void mealCalori(Dinner obj, int portion);

};
#endif
