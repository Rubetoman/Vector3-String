#pragma once
class String
{
public:
	char* data;

	String();
	~String();

	String(const char& s);
	String(String& s);
};

