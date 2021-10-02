#include<iostream>
#include <thread>
int main()
{
	char ch='a';
	std::cout<<ch;
	std::this_thread::sleep_for(std::chrono::seconds(60));
}
