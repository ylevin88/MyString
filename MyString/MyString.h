/*
Exrecize CPP: String 1
Yechiel Levin
Defins a class for using strings
*/

#pragma once
class MyString
{
private:
	size_t m_bufferSize;
	char* m_curString;

	/*
	internal function to allocate buffer for a string
	Input:
			bufferNedded - the size of buffer to allocate
			saveData - is the existing data in the existing buffer needs to be copy to the new allocated buffer
	*/
	void AlocateBuffer(size_t bufferNedded, bool saveData = false);

public:
	/*
	constractor for the string class, will start with buffer 0
	*/
	MyString();

	/*
	destractor that will delete the pointer to the string
	*/
	~MyString();//only delete if it's not null

	/*
	will return the string in char* for print of the string
	output:
			the string of the class
	*/
	char* GetString();

	/*
	will return the length of the string
	output:
			the length of the string in the class
	*/
	size_t GetLength();

	/*
	will assign a new string insted of the existing
	input:
			otherString - the string to assign
	*/
	void Assign(char* otherString);

	/*
	to get the char in specific index
	if the index dosnt exists will return '/0'
	output:
			the string of the class
	input:
			index - the index of the char to get
	*/
	char CharAt(unsigned int index);

	/*
	appends a string to the existing one
	input:
			otherString - the string to append
	*/
	void Append(char* otherString);

	/*
	compers two strings
	output:
			true if the strings are equal, false if not
	input:
			otherString - the string to comper to
	*/
	bool Compare(char* otherString);

	/*
	checks if the string is empty
	output:
			true if the string is empty, false if not
	*/
	bool IsEmpty();

	/*
	clear the string and place it empty
	*/
	void Clear();
};

