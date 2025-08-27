#include <iostream>
using namespace std;

int read_int_num_in_range(int from, int to)
{
	int num;
	cout << "enter number between " << from << " and " << to << " : ";
	cin >> num;

	while (num < from || num > to)
	{
		cout << "wrong number please try again\n";
		cout << "enter number between " << from << " and " << to << " : ";
	cin >> num;
	}
	
	return num;
}

int main()
{
	read_int_num_in_range(1, 10);
}
