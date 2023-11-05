#include "Members.h"
#include<iostream>

using namespace std;


char* Members::text(char const* text)
{
	char* temp = new char[strlen(text) + 1];
	strcpy_s(temp, strlen(text) + 1, text);
	return temp;
}

void Members::showPerson()
{
	cout << "Name " << name << endl;
	cout << "Surname " << surname << endl;
	cout << "lastname " << lastName << endl;
	cout << "His Home Phone - " << homePhone << endl;
	cout << "His Work Phone - " <<workPhone<< endl;
	cout << "His Mobile Number - " << mobilePhone << endl;
	cout << "INFO -" << info << endl;
}
