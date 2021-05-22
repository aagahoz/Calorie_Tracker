#ifndef librarySports_h_
#define librarySports_h_

#include <iostream>
using namespace std;

class Basketball
{		
	int calForMin = 6;
	int totalCalForExercise = 0;
	
	public:
		Basketball();
		Basketball(int calForMin, int totalCalForExercise);
		Basketball(const Basketball &newObje);
		Basketball& operator = (const Basketball &newObje);
		
		friend ostream& operator << (ostream &out, const Basketball &obj);
		Basketball operator + (Basketball const &obj) {	return Basketball(this->calForMin + obj.calForMin, this->totalCalForExercise + obj.totalCalForExercise);}

		void setCalForMin(int tempCal);
		int getCalForMin();
		void setTotalCal(int tempCal);
		int getTotalCal();
		int amountCalForExercise(int min);
	
};

#endif