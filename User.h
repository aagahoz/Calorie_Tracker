#ifndef libraryUser_h_
#define libraryUser_h_

#include <iostream>
using namespace std;


class User
{
		int ID;
		string Name;
		string Surname;
		int week;
	public:
		User();
		User(int ID, string Name, string Surname, int Week);
		User(const User &obj);
		User& operator = (const User &obj);
		
		friend ostream& operator << (ostream &out, const User &obj);
		User operator + (User const &obj) {	return User(ID + obj.ID, "Null", "Null", week + obj.week);}


		int getID();
		string getName();
		string getSurname();
		int getWeek();
		void setID(int ID);
		void setName(int Name);
		void setSurname(int Surname);
		void setWeek(int Week);

};






#endif