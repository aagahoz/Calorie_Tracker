#include <iostream>
#include "Sports.h"
using namespace std;

Basketball::Basketball()
{
	this->calForMin = 6;
	this->totalCalForExercise = 0;
}
Basketball::Basketball(int calForMin, int totalCalForExercise)
{
		this->calForMin = calForMin;
		this->totalCalForExercise = totalCalForExercise;
}
Basketball::Basketball(const Basketball &newObje)
{
	this->calForMin = newObje.calForMin;
	this->totalCalForExercise = newObje.totalCalForExercise;
}
Basketball& Basketball::operator = (const Basketball &newObje)
{
		this->calForMin = newObje.calForMin;
		this->totalCalForExercise = newObje.totalCalForExercise;
		return *this;
}
		
ostream& operator << (ostream &out, const Basketball &obj)
{
	out << "Birim Calori > ";
	out << obj.calForMin << endl;
	out << "Toplam Calori > ";
	out << obj.totalCalForExercise << endl << endl;
	return out;
}
		
void Basketball::setCalForMin(int tempCal)
{
		this->calForMin = tempCal;
}

int Basketball::getCalForMin()
{
		return this->calForMin;
}

void Basketball::setTotalCal(int tempCal)
{
		this->totalCalForExercise = tempCal;
}
		
int Basketball::getTotalCal()
{
		return this->totalCalForExercise;
}

int Basketball::amountCalForExercise(int min)
{
		totalCalForExercise = min*this->calForMin;
		return totalCalForExercise;
}

