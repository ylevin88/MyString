#include <iostream>

#include "MyString.h"



char* MyString::GetString()
{
	return m_curString;
}


void MyString::AlocateBuffer(size_t bufferNedded, bool saveData)
{
	char* existingStr = NULL;

	if (m_bufferSize < bufferNedded)//needs realocation
	{
		if (saveData)
		{
			existingStr = new char[ strlen(m_curString) + 1 ];
			strcpy(existingStr, m_curString);
		}

		delete m_curString;
		m_curString = new char[ bufferNedded ];
		m_bufferSize = bufferNedded;

		if (saveData)
		{
			strcpy(m_curString, existingStr);
			delete existingStr;
		}
	}
}

MyString::MyString()
{
	m_bufferSize = 0;
	m_curString = NULL;
}


MyString::~MyString()
{
	if (m_curString != NULL)
	{
		delete m_curString;
	}
}


size_t MyString::GetLength()
{
	size_t stringSize = 0;
	if (m_bufferSize != 0 && m_curString != NULL)
	{
		stringSize = strlen(m_curString);
	}
	return stringSize;
}


void MyString::Assign(char* otherString)
{
	AlocateBuffer(strlen(otherString) + 1);
	strcpy(m_curString, otherString);
}


char MyString::CharAt(unsigned int index)
{
	char retChar = '\0';
	if (index >= 0 && m_curString != NULL && index < strlen(m_curString))
	{
		retChar = m_curString[ index ];
	}
	return retChar;
}


void MyString::Append(char* otherString)
{
	AlocateBuffer(strlen(m_curString) + strlen(otherString) + 1, true);
	strcat(m_curString, otherString);
}


bool MyString::Compare(char* otherString)
{
	bool comareRes = false;
	if (m_curString != NULL && otherString != NULL)
	{
		if (strcmp(m_curString, otherString) == 0)
		{
			comareRes = true;
		}
	}
	return comareRes;
}


bool MyString::IsEmpty()
{
	bool emptyRes = false;
	if (m_curString != NULL)
	{
		if (strlen(m_curString) == 0)
		{
			emptyRes = true;
		}
	}
	return emptyRes;
}


void MyString::Clear()
{
	strcpy(m_curString, "\0");
}
