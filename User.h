#ifndef libraryUser_h_
#define libraryUser_h_
#include "Sports.h"
#include "Meals.h"
#include <iostream>
using namespace std;

struct Counts
		{
			int countBasketball = 0;
			int countFootball = 0;
			int countTennis = 0;
			int countSwimming = 0;
			int countBreakfast = 0;
			int countLunch = 0;
			int countDinner = 0;
		};
typedef struct Counts counts;

class User
{
		int ID;
		string Name;
		string Surname;
		int age;
		int weight;
		int week;
		int burnedCalory;
		int takenCalory;
		counts count;

	public:
		User();
		User(int ID, string Name, string Surname, int age, int weight, int Week, int burnedCalory, int takenCalory);
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
		int getBurnedCalory();
		int getTakenCalory();
		void setID(int ID);
		void setName(int Name);
		void setSurname(int Surname);
		void setAge(int age);
		void setWeight(int weight);
		void setWeek(int Week);
		void setBurnedCalory(int burnedCalory);
		void setTakenCalory(int takenCalory);
		
		void enterInfo();

		void sportCalori(int sportMin, int sportType);
		void mealCalori(int mealType, int portion);
		
		void mealInfoWeekly();
		void sportInfoWeekly();
		void totalCalorisInfoWeekly();
};
#endif
