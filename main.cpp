#include <iostream>
#include "Sports.h"
#include "Meals.h"
#include "User.h"

int main() 
{
	int genelIslem = 1;
	int altIslem = 1;
	int sportType = 0;
	int sportTime = 0;
	int mealType = -1;
	int mealSize = -1;
	User user(1, "Agah", "Ozdemir", 23, 70, 25, 0, 0);
	user.sportCalori(25,2);
	user.mealCalori(2, 3);

	cout << "** Program Started **" << endl << endl;
	while(genelIslem)
	{
		cout << " > to exit----------`0`" << endl;
		cout << " > Developer mode----`1`" << endl;
		cout << " > User mode----------`2`" << endl;
		cout << "Enter > ";
		cin >> genelIslem;
		system("cls");
		switch(genelIslem)
		{
			case 1:
				{	
					while (altIslem)
					{
						cout << " >> To turn before menu--------`0`" << endl << endl;
						cout << " >> To test User Class----------`1`" << endl << endl;
						cout << " >> To test Basketball Class-----`2`" << endl;
						cout << " >> To test Football Class--------`3`" << endl;
						cout << " >> To test Tennis Class-----------`4`" << endl << endl;
						cout << " >> To test Swimming Class----------`5`" << endl << endl;
						cout << " >> To test Breakfast Class----------`6`" << endl;
						cout << " >> To test Lunch Class---------------`7`" << endl;
						cout << " >> To test Dinner Class---------------`8`" << endl << endl;
						cout << "Enter >> ";
						cin >> altIslem;
						system("cls");
						switch (altIslem)
						{
							case 1:
								{
									User u1;
									cout << u1;
									u1.enterInfo();
									cout << u1;
									
									User u2;
									
									u1 = u1 + u2;
									cout << u1;
									
									u1.mealCalori(1,3);
									u1.sportCalori(43,2);
									
									cout << u1;
									
									break;	
								}
							case 2:
								{
									Basketball b1;
									cout << b1;
									b1.setCalForMin(11);
									cout << b1;
									
									b1.setTotalCal(150);
									b1 = b1 + b1;
									cout << b1;
									
									cout << "Kalori > " << b1.amountCalForExercise(30) << endl;
									cout << endl << endl;
									break;	
								}
							case 3:
								{
									Football f1;
									cout << f1;
									f1.setTotalCal(30);
									cout << f1.getTotalCal() << endl;
									
									cout << f1;
									
									Football f2 = f1;
									cout << f1;
									break;	
								}
							case 4:
								{
									Tennis t1;
									cout << t1;
									t1.setCalForMin(3);
									cout << t1;
									
									t1.setTotalCal(110);
									t1 = t1 + t1;
									cout << t1;
									
									cout << "Kalori > " << t1.amountCalForExercise(33) << endl;
									cout << endl << endl;
									break;	
								}
							case 5:
								{
									Swimming s1;
									cout << s1;
									s1.setCalForMin(5);
									cout << s1;
									
									s1.setTotalCal(220);
									s1 = s1 + s1;
									cout << s1;
									
									cout << "Kalori > " << s1.amountCalForExercise(23) << endl;
									cout << endl << endl;
									
									break;	
								}
							case 6:
								{
									Breakfast b1;
									b1.setCalTaken(20);
									cout << "Cal Taken "<< b1.getCalTaken() << endl;
									
									b1 = b1 + b1;
									cout << b1;
									break;	
								}
							case 7:
								{
									Lunch l1;
									l1.setCalTaken(43);
									cout << l1.getCalTaken();
									
									l1 = l1 + l1;
									cout << l1;
									break;	
								}
							case 8:
								{
									Dinner d1;
									
									d1.setCalTaken(12);
									
									cout << d1.getCalTaken();
									
									d1 = d1 + d1;
									
									cout << d1;
									
									break;	
								}
								
							default:
								cout << " >> Hatali Giris!" << endl << endl;
						}
					}
					altIslem = 1;
					break;
				}
			case 2:
				{
					while(altIslem)
					{
						cout << endl;
						cout << " >> To turn before menu-----------------------------`0`" << endl << endl;
						cout << " >> To create a new Profile--------------------------`1`" << endl;
						cout << " >> To print User info--------------------------------`2`" << endl << endl;
						cout << " >> To add the sports activity done--------------------`3`" << endl;
						cout << " >> To add information a meal eaten---------------------`4`" << endl << endl;
						cout << " >> To print the number of meals eaten-------------------`5`" << endl;
						cout << " >> To print the number of sports done--------------------`6`" << endl;
						cout << " >> To print the totals of calories consumed and burned----`7`" << endl << endl;
						cout << "Enter (0:7) >> ";
						cin >> altIslem;
						system("cls");
						switch(altIslem)
						{
							case 1:
									user.enterInfo();
									cout << " >> Saved!" << endl;
									break;
							case 2:
									cout << user;
									break;
							case 3:
									cout << endl;
									cout << "Please Enter sport type done" << endl;
									cout << " >>> Basketball--`1`" << endl;
									cout << " >>> Football-----`2`" << endl;
									cout << " >>> Tennis--------`3`" << endl;
									cout << " >>> Swimming-------`4`" << endl;
									cout << "Enter >>> ";
									cin >> sportType;
									
									cout << "Please Enter the duration of the sport > ";
									cin >> sportTime;
									user.sportCalori(sportTime, sportType);
									cout << " >>> Saved!" << endl;
									break;
							case 4:
									cout << endl;
									cout << "Please Enter Meal type eaten" << endl;
									cout << " >>> Breakfast---`1`" << endl;
									cout << " >>> Lunch--------`2`" << endl;
									cout << " >>> Dinner--------`3`" << endl;
									cout << "Enter >>> ";
									cin >> mealType;
									
									cout << "Please Enter the size of the meal (Small : 1, Medium : 2, Large : 3)" << endl;
									cout << "Enter >>> ";
									cin >> mealSize;
									user.mealCalori(mealType, mealSize);
									cout << " >>> Saved!" << endl;
									break;
							case 5:
								user.mealInfoWeekly();
								break;
							case 6:
								user.sportInfoWeekly();
								break;
							case 7:
								user.totalCalorisInfoWeekly();
								break;
							default:
								cout << " >> Hatali Giris!" << endl << endl;
						}
					}
					altIslem = 1;
					break;
				}
		default:
			cout << " > Hatali Giris!" << endl << endl;		
		}
	}
	return 0;
}
