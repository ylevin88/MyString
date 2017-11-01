/*
Exrecize CPP: String 1
Yechiel Levin
Defins a class for using strings
*/

#include <iostream>
#include "MyString.h"

using namespace std;

/*
the main contains uses of the functions of MyString class for check them.
*/
void main()
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