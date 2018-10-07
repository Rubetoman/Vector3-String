#ifndef STRING_H
#define STRING_H
#include <iostream>

class String
{
private:
	int lenght;
	char* str;
public:
	//const char* data;

	String();
	String(char* ch);
	String(const char* ch);
	String(String& string);
	~String();
	char* get_string() { return str; }
	String operator+(String string);
	String operator+(const String& string)const;
	String operator=(const String& string);
};

//char* strcpy(char *destination, char *source);
char* strcpy(char* destination, char* source, int size);
char* strcat(char* destination, char* source);

//std::ostream& operator <<(std::ostream& OS, String &S);
//std::istream& operator >>(std::istream& IS, String &S);

#endif