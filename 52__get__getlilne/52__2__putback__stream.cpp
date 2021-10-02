#include<iostream>
#include<conio.h>
int main()
{
	char ch;
	std::cin.get(ch); 
	std::cout<<ch;
	
	std::cin.get(ch);  // taking Enter we hit after 
	std::cout<<ch;
	
	// input stream is blank
	std::cin.putback('z');
	
	std::cin.get(ch);
	std::cout<<ch;
	
	getch();
}
