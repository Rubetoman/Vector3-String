#include "String.h"

String::String()
	: lenght(0), str('\0')
{
}

String::String(char* ch)
	: lenght(strlen(ch)),
	str(new char[lenght])
{
	strcpy(str, ch, lenght);
}

String::String(const char* ch)
	: lenght(strlen(ch)),
	str(new char[lenght])
{
	strcpy(str, ch, lenght);
}

String::String(String& string)
{
	str = new char[255];
	strcpy(this->str, string.str);
}

String::~String()
{
	if (this->str)
		delete[] this->str;
}

String String::operator+(String string) {
	String s;
	strcpy(s.str, this->str);
	strcat(s.str, string.str);
	return s;
}

String String::operator+(const String& string)const {
	String s;
	strcpy(s.str, this->str);
	strcat(s.str, string.str);
	return s;
}

String String::operator=(const String& string) {
	if (this->str)
		delete[] this->str;
	strcpy(this->str, string.str);
	return *this;
}

/*char* strcpy(char* destination, char* source)
{
	char* start = destination;

	while (*source != '\0')
	{
		*destination++ = *source++;
	}

	*destination = '\0'; // add '\0' at the end
	return start;
}*/

char* strcpy(char* destination, char* source, int size) {
	for (int i = 0; i < size; i++)
		destination[i] = source[i];
}

char* strcat(char* destination, char* source)
{
	char* start = destination;

	while (*destination != '\0')
	{
		destination++;
	}
	while (*source != '\0')
	{
		*destination++ = *source++;
	}

	*destination = '\0'; // add '\0' at the end
	return start;
}

/*std::ostream& operator <<(std::ostream& OS, String &S)
{
	OS << S.get_string();
	return OS;
}*/