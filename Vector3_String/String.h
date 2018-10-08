#ifndef STRING_H
#define STRING_H
#include <iostream>

class String
{
	char* str;
	unsigned len;

public:
	String();
	String(char ch);
	String(const char* ch);
	String(const String& string);
	~String();
	unsigned length() const;
	void clear();

	String& operator+= (const String& s);
	friend String operator+(const String& string_a, const String& string_b);
	char  operator[] (unsigned j) const;
	char& operator[] (unsigned j);
	friend std::ostream& operator<< (std::ostream& so, const String& s);
	friend std::istream& operator>> (std::istream& so, String& s);
};

//char* strcpy(char *destination, char *source);
//char* strcpy(char* destination, char* source, int size);
//char* strcat(char* destination, char* source);

#endif