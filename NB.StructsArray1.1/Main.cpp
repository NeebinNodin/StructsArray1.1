//Neebin Buswa
//Structs and Arrays Demo

/*
struct = a collection of variables of different types under a single name
		 struct is a user-defined data type in C/C++.
		 struct is used to group items of possibly different types into a single type.
		 struct is a convenient way to group data for storage in a structured format.
		 collection of related members ("variables")
		 they can be of different data types
		 listed under one name in a block of memory
		 VERY SIMILAR to classes in other languages (but no methods)
*/

// Struct
//#include <iostream>
//#include <conio.h>
//
//using namespace std;
//
//struct Student
//{
//	string Name;
//	float GPA = 0;
//};
//
//int main()
//{
//	Student jim;
//	jim.Name = "Jim";
//	jim.GPA = 4;
//
//	(void)_getch();
//	return 0;
//}

//#include <iostream>
//#include <conio.h>
//
//using namespace std;
//
//struct Student
//{
//	string Name;
//	float GPA = 0;
//};
//
//void PrintStudent(const Student& student)
//{
//	cout << student.Name << " has a GPA of " << student.GPA << "\n";
//}
//
//int main()
//{
//	Student jim = { "Jim", 4};
//	PrintStudent(jim);
//
//	(void)_getch();
//	return 0;
//}


//arrays


//#include <iostream>
//#include <conio.h>
//
//using namespace std;
//
//struct Student
//{
//	string Name;
//	float GPA = 0;
//};
//
//int main()
//{
//	Student jim;
//	jim.Name = "Jim";
//	jim.GPA = 4;
//
//	int numbers[99];
//
//	for (int i = 0; i <99; i++)
//	{
//		cout << numbers[i] << "\n";// print each number (whatever happens to be in memory)
//	}
//
//	(void)_getch();
//	return 0;
//}

//#include <iostream>
//#include <conio.h>
//
//using namespace std;
//
//struct Student
//{
//	string Name;
//	float GPA = 0;
//};
//
//int main()
//{
//	Student jim;
//	jim.Name = "Jim";
//	jim.GPA = 4;
//
//	const int SIZE = 3;
//	int numbers[SIZE]; // { 12, 45, 31, -6, 0, 22, 50 };
//
//	// get the usper input
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << (i + 1) << ". Enter a integer: ";
//		cin >> numbers[i];
//	}
//
//	// print out the array
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << numbers[i] << "\n";
//	}
//
//	(void)_getch();
//	return 0;
//}
//exercise 1

#include <iostream>
#include <conio.h>

using namespace std;

//struct Student
//{
//	string Name;
//	float GPA = 0;
//};

//void PrintArray(int n)
//{
//	const int NUM_SUITS = 4;
//	string suits[NUM_SUITS] = { "Hearts", "Diamonds", "Clubs", "Spades" };
//
//	int choice;
//	cout << "Select a suit from the list below: \n";
//	for (int i = 0; i < NUM_SUITS; i++)
//	{
//		cout << (i + 1) << ". " << suits[i] << "\n";
//	}
//	cout << "\nEnter a number between 1 and 4: ";
//	cin >> choice;
//	cout << "You selected " << suits[choice - 1] << "\n";
//}
//
//int main()
//{
//	PrintArray(4);
//
//	(void)_getch();
//	return 0;
//}

int main()
{
	const int NUM_SUITS = 4;
	string suits[NUM_SUITS] = { "Hearts", "Diamonds", "Clubs", "Spades" };

	int choice;
	cout << "Select a suit from the list below: \n";
	for (int i = 0; i < NUM_SUITS; i++)
	{
		cout << (i + 1) << ". " << suits[i] << "\n";
	}
	cout << "\nEnter a number between 1 and 4: ";
	cin >> choice;
	cout << "You selected " << suits[choice - 1] << "\n";

	(void)_getch();
	return 0;
}