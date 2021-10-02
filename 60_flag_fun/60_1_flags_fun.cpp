#include<iostream>
#include<bitset>
int main()
{
	std::ios_base::fmtflags old_flag,new_flag;
	
	old_flag=std::cout.flags();
	std::cout<<old_flag<<"\n";
	
	std::cout.setf(std::ios::showpos | std::ios::showpoint |std::ios::fixed);
	std::cout<<std::left;
	std::cout<<59.20<<"\n";
	
	new_flag=std::cout.flags();
	std::cout<<new_flag<<"\n";
	
	std::cout.flags(old_flag);
	
	std::cout<<std::cout.flags()<<"\n";
	std::cout<<59.20<<"\n";
	
	std::cout<<std::bitset<32>(4098)<<"\n";
	std::cout<<std::bitset<32>(7170)<<"\n";
	std::cout<<std::bitset<32>(7174)<<"\n";
	std::cout<<std::bitset<32>(7206)<<"\n";
}
