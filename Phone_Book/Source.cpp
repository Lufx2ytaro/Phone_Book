#include<iostream>
#include"Members.h"
using namespace std;




int main()
{
	Members Person1{"Andrew","Lee","Wood",89207555994,8915042004,8800555385,"Doctor"};

	Person1.showPerson();
	cout << "---------------" << endl;

	Members y{ Person1 };
	y.setName("Kenshi");

	y.showPerson();


}