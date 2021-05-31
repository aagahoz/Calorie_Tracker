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

Basketball Basketball::operator + (Basketball const &obj)
{
	return Basketball(this->calForMin, this->totalCalForExercise + obj.totalCalForExercise);
}
		
void Basketball::setCalForMin(int tempCal)							{		this->calForMin = tempCal;				}
int Basketball::getCalForMin()										{		return this->calForMin;					}
void Basketball::setTotalCal(int tempCal)							{		this->totalCalForExercise = tempCal;	}		
int Basketball::getTotalCal()										{		return this->totalCalForExercise;		}

int Basketball::amountCalForExercise(int min)
{
		totalCalForExercise = min*this->calForMin;
		return totalCalForExercise;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

Football::Football()
{
	this->calForMin = 5;
	this->totalCalForExercise = 0;
}
Football::Football(int calForMin, int totalCalForExercise)
{
		this->calForMin = calForMin;
		this->totalCalForExercise = totalCalForExercise;
}
Football::Football(const Football &newObje)
{
	this->calForMin = newObje.calForMin;
	this->totalCalForExercise = newObje.totalCalForExercise;
}
Football& Football::operator = (const Football &newObje)
{
		this->calForMin = newObje.calForMin;
		this->totalCalForExercise = newObje.totalCalForExercise;
		return *this;
}
		
ostream& operator << (ostream &out, const Football &obj)
{
	out << "Birim Calori > ";
	out << obj.calForMin << endl;
	out << "Toplam Calori > ";
	out << obj.totalCalForExercise << endl << endl;
	return out;
}

Football Football::operator + (Football const &obj)
{
	return Football(this->calForMin, this->totalCalForExercise + obj.totalCalForExercise);
}
		
void Football::setCalForMin(int tempCal)						{		this->calForMin = tempCal;				}
int Football::getCalForMin()									{		return this->calForMin;					}
void Football::setTotalCal(int tempCal)							{		this->totalCalForExercise = tempCal;	}
int Football::getTotalCal()										{		return this->totalCalForExercise;		}

int Football::amountCalForExercise(int min)
{
		totalCalForExercise = min*this->calForMin;
		return totalCalForExercise;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

Tennis::Tennis()
{
	this->calForMin = 5;
	this->totalCalForExercise = 0;
}
Tennis::Tennis(int calForMin, int totalCalForExercise)
{
		this->calForMin = calForMin;
		this->totalCalForExercise = totalCalForExercise;
}
Tennis::Tennis(const Tennis &newObje)
{
	this->calForMin = newObje.calForMin;
	this->totalCalForExercise = newObje.totalCalForExercise;
}
Tennis& Tennis::operator = (const Tennis &newObje)
{
		this->calForMin = newObje.calForMin;
		this->totalCalForExercise = newObje.totalCalForExercise;
		return *this;
}
		
ostream& operator << (ostream &out, const Tennis &obj)
{
	out << "Birim Calori > ";
	out << obj.calForMin << endl;
	out << "Toplam Calori > ";
	out << obj.totalCalForExercise << endl << endl;
	return out;
}

Tennis Tennis::operator + (Tennis const &obj)
{
	return Tennis(this->calForMin, this->totalCalForExercise + obj.totalCalForExercise);
}
		
void Tennis::setCalForMin(int tempCal)			{		this->calForMin = tempCal;				}
int Tennis::getCalForMin()						{		return this->calForMin;					}
void Tennis::setTotalCal(int tempCal)			{		this->totalCalForExercise = tempCal;	}		
int Tennis::getTotalCal()						{		return this->totalCalForExercise;		}

int Tennis::amountCalForExercise(int min)
{
		totalCalForExercise = min*this->calForMin;
		return totalCalForExercise;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

Swimming::Swimming()
{
	this->calForMin = 5;
	this->totalCalForExercise = 0;
}
Swimming::Swimming(int calForMin, int totalCalForExercise)
{
		this->calForMin = calForMin;
		this->totalCalForExercise = totalCalForExercise;
}
Swimming::Swimming(const Swimming &newObje)
{
	this->calForMin = newObje.calForMin;
	this->totalCalForExercise = newObje.totalCalForExercise;
}
Swimming& Swimming::operator = (const Swimming &newObje)
{
		this->calForMin = newObje.calForMin;
		this->totalCalForExercise = newObje.totalCalForExercise;
		return *this;
}
		
ostream& operator << (ostream &out, const Swimming &obj)
{
	out << "Birim Calori > ";
	out << obj.calForMin << endl;
	out << "Toplam Calori > ";
	out << obj.totalCalForExercise << endl << endl;
	return out;
}

Swimming Swimming::operator + (Swimming const &obj)
{
	return Swimming(this->calForMin, this->totalCalForExercise + obj.totalCalForExercise);
}
		
void Swimming::setCalForMin(int tempCal)		{		this->calForMin = tempCal;				}
int Swimming::getCalForMin()					{		return this->calForMin;					}
void Swimming::setTotalCal(int tempCal)			{		this->totalCalForExercise = tempCal;	}		
int Swimming::getTotalCal()						{		return this->totalCalForExercise;		}

int Swimming::amountCalForExercise(int min)
{
		totalCalForExercise = min*this->calForMin;
		return totalCalForExercise;
}
