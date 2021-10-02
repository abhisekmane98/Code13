#include"8.h"
#include<iostream>
#include<cstring>

string_class::string_class()
{
	str[0]='\0';
}
string_class::string_class(const char *str2)
{
	strcpy(str,str2);
}
string_class& string_class::operator+(string_class s)
{
	std::cout<<"overloade+operator\n";
	static string_class s2;
	
	strcpy(s2.str,str);
	strcat(s2.str,s.str);
	return s2;
}
string_class& string_class::operator=(string_class s)
{
	std::cout<<"overloade=operator\n";
	strcpy(str,s.str);
	return *this;
}
string_class& string_class::operator+=(string_class s)
{
	std::cout<<"overloaded+=operator\n";
//	strcat(str,s.str);
//	return *this;

	*this=*this+s;
	return *this;
}
void string_class::display_length()
{
	std::cout<<strlen(str)<<"\n";
}
void string_class::to_lower()
{
	strlwr(str);
}
void string_class::to_upper()
{
	strupr(str);
}
void string_class::display_string()
{
	std::cout<<str<<"\n";
}
