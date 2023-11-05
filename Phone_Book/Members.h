#pragma once
#include<iostream>



class Members
{
	char* name;
	char* surname;
	char* lastName;
	long long int homePhone;
	long long int workPhone;
	long long int mobilePhone;
	char* info;

	char* text(char const* text);

public:

	Members(const char* name,const  char* surname,const char* lastName, long long int homePhone, long long int workPhone, long long int mobilePhone, const char* info) :

		name{ name ? new char[strlen(name) + 1] : nullptr },
		surname{ surname ? new char[strlen(surname)+1] : nullptr },
		lastName{ lastName ? new char[strlen(lastName) + 1] : nullptr },
		homePhone{ homePhone },
		workPhone{ workPhone },
		mobilePhone{ mobilePhone },
		info{ info ? new char[strlen(info) + 1] : nullptr }
	{
		if (name && surname && lastName && info)
		{
			strcpy_s(this->name, strlen(name)+1, name);
			strcpy_s(this->surname, strlen(surname)+1, surname);
			strcpy_s(this->lastName, strlen(lastName)+1, lastName);
			strcpy_s(this->info, strlen(info)+1, info);
		}
	}

	Members(): Members(nullptr, nullptr, nullptr, 0, 0, 0, nullptr) {};

	Members(const Members& obj) :

		name{ obj.name ? new char[strlen(obj.name) + 1] : nullptr },
		surname{ obj.surname ? new char[strlen(obj.surname)+1] : nullptr },
		lastName{ obj.lastName ? new char[strlen(obj.lastName) + 1] : nullptr },
		homePhone{ obj.homePhone },
		workPhone{ obj.workPhone },
		mobilePhone{ obj.mobilePhone },
		info{ obj.info ? new char[strlen(obj.info) + 1] : nullptr }
	{
		if (obj.name && obj.surname && obj.lastName && obj.info)
		{
			strcpy_s(this->name, strlen(obj.name) + 1, obj.name);
			strcpy_s(this->surname, strlen(obj.surname) + 1, obj.surname);
			strcpy_s(this->lastName, strlen(obj.lastName) + 1, obj.lastName);
			strcpy_s(this->info, strlen(obj.info) + 1, obj.info);
		}
	}



	~Members()
	{
		delete[]name;
		delete[]surname;
		delete[]lastName;
		delete[]info;

	}


	char* const getName()
	{
		return name;
	}

	char* const getSurname()
	{
		return surname;
	}

	char* const getLastName()
	{
		return lastName;
	}

	char* const getInfo()
	{
		return info;
	}

	int getHomePhone()
	{
		return homePhone;
	}

	int getWorkPhone()
	{
		return workPhone;
	}

	int getMobilePhone()
	{
		return mobilePhone;
	}


	Members& setName(char const* name)
	{
		delete[]this->name;
		this->name = text(name);
		return *this;
	}

	Members& setSurname(char const* surname)
	{
		delete[]this->surname;
		this->surname = text(surname);
		return *this;
	}
	
	Members& setLastName(char const* lastName)
	{
		delete[]this->lastName;
		this->lastName = text(lastName);
		return *this;
	}	
	
	Members& setInfo(char const* info)
	{
		delete[]this->info;
		this->info = text(info);
		return *this;
	}

	Members& setHomePhone(int homePhone)
	{
		this->homePhone = homePhone;
		return *this;
	}

	Members& setWorkPhone(int workPhone)
	{
		this->workPhone = workPhone;
		return *this;
	}

	Members& setMobilePhone(int mobilePhone)
	{
		this->mobilePhone = mobilePhone;
		return *this;
	}

	void showPerson();
};


