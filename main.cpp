#include <iostream>
#include "Sports.h"
#include "Meals.h"
#include "User.h"



int main() 
{
	Basketball b1(100, 20);
	Basketball b2(150, 30);	
	Basketball b3(0,0);
	
	User user1(1, "Agah", "Ozdemir", 23);
	cout << user1;
	User user2(2, "Agah", "Ozdemir", 12);
	
	User user3;
	user3 = user1 + user2;
	
	cout << user3;
	
	return 0;
}