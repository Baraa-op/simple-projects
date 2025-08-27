#include <iostream>
using namespace std;


int main()
{
	for(int i=65 ; i<=90 ; i++)
	{
		cout << "\nLetter: "  << (char)i << endl ; ;
		for(int j=65; j<=90 ; j++)
		{
			
			cout <<(char) i << (char)j << endl ;
		}
		cout<<"\n____________________________\n" ;
	}
}



/**
2- 

int main()
{
	for(int i=10 ; i >= 1 ; i--)
	{
		for(int g=1 ; g <= i ; g++)
		{
			cout << "*" ; 
		}
		cout << endl ;
	}
}

**/

/**

3-

int main()
{
	for(int i =1 ; i<=10 ; i++)
	{
		for(int j = 1 ; j<=i ; j++)
		{
			cout << j ;
		}
		cout << endl;
	}
}

**/

/**

4-

int main()
{
	int c = 1 ;
	for (int i = 10; i >= 1 ;  i--)
	{
		
		for (int j = 1 ; j <= i ; j++)
		{
			cout << j;
		}

		cout << endl;
	}
}

**/

/**

5-
int main()
{
	for (int i = 1; i <= 6; i++)
	{
		
		int x = 65 ;
		

		for (int j = 1; j <= i; j++)
		{
			
			cout << (char)x ; 
			x++ ;
		}

		cout << endl;
	}
}
**/



/**
6-

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int k = i ; k <= 10 ; k++)
		{
			cout  << " "<< k;
		}
		cout << endl;
	}
}
**/
