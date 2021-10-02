#include"8.h"
#include<iostream>

int main()
{
	string_class s1,s2=" BonaPart",s3="napoleon";  // s2("bonapart");
//	s1=s3+s2; // s3.operator+(s2);
	
//	s1=s2=s3; //  s1.operator=(s2) <-  s2.operator=(s3)  
	
	
	s3=s3+s2; // s3=s3+s2   s3.operator+=(complex)
	s3.display_string();
//	s2.display_length();
//	s2.to_lower();
//	s2.to_upper();
//	s2.display_string();

	
} 
