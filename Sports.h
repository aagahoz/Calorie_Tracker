#ifndef librarySports_h_
#define librarySports_h_

#include <iostream>
using namespace std;

class Basketball
{		
	int calForMin = 6; 	
	int totalCalForExercise = 0;
	
	public:
		static int count;
		
		Basketball();
		Basketball(int calForMin, int totalCalForExercise);
		Basketball(const Basketball &newObje);
		Basketball& operator = (const Basketball &newObje);
		
		friend ostream& operator << (ostream &out, const Basketball &obj);
		//Basketball operator + (Basketball const &obj);

		void setCalForMin(int tempCal);
		int getCalForMin();
		void setTotalCal(int tempCal);
		int getTotalCal();
		int amountCalForExercise(int min);
};

class Football
{		
	int calForMin = 5; 	
	int totalCalForExercise = 0;
	
	public:
		static int count;
		
		Football();
		Football(int calForMin, int totalCalForExercise);
		Football(const Football &newObje);
		Football& operator = (const Football &newObje);
		
		friend ostream& operator << (ostream &out, const Football &obj);
		//Football operator + (Football const &obj);
		
		void setCalForMin(int tempCal);
		int getCalForMin();
		void setTotalCal(int tempCal);
		int getTotalCal();
		int amountCalForExercise(int min);
};

class Tennis
{		
	int calForMin = 5; 	
	int totalCalForExercise = 0;
	
	public:
		static int count;
		Tennis();
		Tennis(int calForMin, int totalCalForExercise);
		Tennis(const Tennis &newObje);
		Tennis& operator = (const Tennis &newObje);
		
		friend ostream& operator << (ostream &out, const Tennis &obj);
		//Tennis operator + (Tennis const &obj);
		
		void setCalForMin(int tempCal);
		int getCalForMin();
		void setTotalCal(int tempCal);
		int getTotalCal();
		int amountCalForExercise(int min);
};
#endif
