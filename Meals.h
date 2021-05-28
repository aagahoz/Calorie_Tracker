#ifndef libraryMeals_h_
#define libraryMeals_h_

#include <iostream>
using namespace std;

class Breakfast
{
	int calTaken;
	
	public:
		static int count;
		
		Breakfast();
		Breakfast(int calTaken);
		Breakfast(const Breakfast& obj);
		Breakfast& operator = (const Breakfast& obj);
		
		friend ostream& operator << (ostream &out, const Breakfast &obj);
		Breakfast operator + (Breakfast const &obj);
		
		void setCalTaken(int calTaken);
		int getCalTaken();
		
		void amountCalForMeal(int portion);
};

class Lunch
{
	int calTaken;

	public:
		static int count;
		
		Lunch();
		Lunch(int calTaken);
		Lunch(const Lunch& obj);
		Lunch& operator = (const Lunch& obj);
		
		friend ostream& operator << (ostream &out, const Lunch &obj);
		Lunch operator + (Lunch const &obj);
		
		void setCalTaken(int calTaken);
		int getCalTaken();
		
		void amountCalForMeal(int portion);
};

class Dinner
{
	int calTaken;
	
	public:
		static int count;
		
		Dinner();
		Dinner(int calTaken);
		Dinner(const Dinner& obj);
		Dinner& operator = (const Dinner& obj);
		
		friend ostream& operator << (ostream &out, const Dinner &obj);
		Dinner operator + (Dinner const &obj);
		
		void setCalTaken(int calTaken);
		int getCalTaken();
		
		void amountCalForMeal(int portion);
};
#endif
