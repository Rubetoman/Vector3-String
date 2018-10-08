#include "String.h"


String::String()
{
	len = 0;
	str = new char[len];
}

String::String(char ch)
{
	len = 1;
	str = new char(ch);
}

String::String(const char* ch)
{
	if (ch) {
		unsigned i = 0;
		while (ch[i] != '\0') i++;
		len = i;
		str = new char[i];
		for (unsigned j = 0; j < i; j++)
			str[j] = ch[j];
	}
	else {
		len = 0;
		str = new char[len];
	}
}

String::String(const String& string)
{
	len = string.length();
	str = new char[len];
	for (unsigned j = 0; j < len; j++)
		str[j] = string[j];
}

String::~String()
{
	if (this->str)
		delete[] this->str;
}

unsigned String::length() const {
	return len;
}

void String::clear() {
	len = 0;
}

char String::operator[] (unsigned j) const
{
	if (j >= len) throw 1;
	return str[j];
}

char& String::operator[] (unsigned j)
{
	if (j >= this->len) throw 1;
	return str[j];
}

String& String::operator+= (const String& s)
{
	unsigned total_length = len + s.length();
	char*    newstr = new char[total_length];

	for (unsigned j = 0; j < len; j++)
		newstr[j] = str[j];

	for (unsigned i = 0; i < s.length(); i++)
		newstr[len + i] = s[i];

	delete str;
	len = total_length;
	str = newstr;
	return *this;
}

String operator+(const String& string_a, const String& string_b) {
	return String(string_a) += String(string_b);
}

std::ostream& operator<< (std::ostream& os, const String& s)
{
	if (s.length() > 0)
	{
		for (unsigned j = 0; j < s.length(); j++)
			os << s[j];
	}
	else os << "";

	return os;
}

std::istream& operator>> (std::istream& is, String& s)
{
	char* c = new char[1000];
	is >> c;
	s = String(c);
	delete[] c;

	return is;
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
}

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
*/