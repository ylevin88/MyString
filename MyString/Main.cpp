/*
Exrecize CPP: String
Yechiel Levin
Defins a class for using strings
*/

#include <iostream>
#include "MyString.h"

using namespace std;

/*
checks of ex1
*/
void ex1Checks()
{
	MyString myString;
	cout << "Length before assign: " << myString.GetLength() << endl;
	myString.Assign("Hello");
	cout << "Length after assign ot the string \"Hello\": " << myString.GetLength() << endl;
	myString.Append("World");
	cout << "Length after append ot the string \"World\": " << myString.GetLength() << endl;
	cout << "The string now is: " << myString.GetString() << endl;
	cout << "char at 5: " << myString.CharAt(5) << endl;
	if (myString.Compare("HelloWorld"))
	{
		cout << "the string is compered to hello world" << endl;
	}
	else
	{
		cout << "the string is compered to hello world" << endl;
	}
	myString.Clear();
	cout << "the sting after clear: " << myString.GetString() << "Length: " << myString.GetLength() << endl;
	if (myString.IsEmpty())
	{
		cout << "the string is empty" << endl;
	}
	else
	{
		cout << "the string is not empty" << endl;
	}
}


/*
checks of ex2
*/
void ex2Checks()
{
	MyString myString1;
	myString1.Assign("Hello");
	MyString myString2;
	myString2.Assign("World");
	myString1.Append(myString2);
	cout << "Append of two my strings: " << myString1.GetString() << endl;
	myString2.Assign(myString1);
	cout << "Assign of my string: " << myString2.GetString() << endl;
	cout << "Comere of two MyString's: " << endl;
	if (myString1.Compare(myString2))
	{
		cout << myString1.GetString() << " is equal to " << myString2.GetString() << endl;
	}
	else
	{
		cout << myString1.GetString() << " is not equal to " << myString2.GetString() << endl;
	}
}

/*
the main contains uses of the functions of MyString class for check them.
*/
void main()
{
	ex2Checks();
}