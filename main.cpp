#include <iostream>
#include "Sports.h"
#include "Meals.h"
#include "User.h"


int main() 
{
	
	int genelIslem = 1;
	int altIslem = 1;
	while(genelIslem)
	{
		cout << " *Developer mode		`1`" << endl;
		cout << " *User mode			`2`" << endl;
		cout << " *to exit			`0`" << endl;
		cout << "Enter > ";
		cin >> genelIslem;
		switch(genelIslem)
		{
			case 1:
				{	
					while (altIslem)
					{
						cout << "To turn before menu `0`" << endl;
						cout << "To test  `1`" << endl;
						cout << "To test  `2`" << endl;
						cout << "To test  `3`" << endl;
						cout << "To test  `4`" << endl;
						cout << "To test  `5`" << endl;
						cout << "Enter > ";
						cin >> altIslem;
						switch (altIslem)
						{
							case(1):
								break;
							case(2):
								break;
							case(3):
								break;
							case(4):
								break;
							case(5):
								break;
						}
					}
					break;
				}
			case 2:
				{
					break;
				}
		}
	}
	return 0;
}
