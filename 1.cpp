#include <iostream>
#include <string>
using namespace std;

struct strinfo
{
	string first_name;
	string last_name;
	int age;
	string phone_num;
};

void read_info(strinfo &person)
{
	cout << "enter first name : ";
	cin >> person.first_name;

	cout << "enter last name : ";
	cin >> person. last_name;

	cout << "enter age : ";
	cin >> person.age;

	cout << "enter phone_num : ";
	cin >> person.phone_num;
}

void print_person_info(strinfo &person)
{
	cout << "******************"
		 << "\n";
	cout << "first name is : " << person.first_name << endl;
	cout << "last name is : " << person. last_name << endl;
	cout << "age : " << person.age << "years\n";
	cout << "phon number : " << person.phone_num << endl;
	cout << "******************"
		 << "\n";
	cout << "\n";
}

/**
void num_of_persons(int &NumofPerson , int &var)
{
	strinfo person[1000] ;
	
	cout << "enter number of persons: " ;
	cin >> NumofPerson ; 
	for(int i = 0 ; i < NumofPerson ; i++)
	{
		read_info(person[i]);
		print_person_info(person[i]) ;
    	
	}
}

**/

void read_all(strinfo person[100])
{
	

	int NumofPerson;
	cout << "enter number of persons: ";
	cin >> NumofPerson;
	if(NumofPerson > 100)
	{
		cout << "Please enter the smallest number\n\n" ;
		read_all(person);
	}

	for (int i = 0; i < NumofPerson; i++)
	{
		read_info(person[i]);
		print_person_info(person[i]);
	}

	/**
	read_info(person[0]);
	read_info(person[1]);
	**/
}

/**
void print_all(strinfo person[100])
{
	
	print_person_info(person[0]) ;
	print_person_info(person[1]) ;
	

}

**/

int main()
{
	strinfo person[100];
	read_all(person);
} 
