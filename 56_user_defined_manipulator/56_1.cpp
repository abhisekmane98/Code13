#include<iostream>
std::ostream& tab(std::ostream&);
int main()
{
	std::cout<<tab<<"k";
}
std::ostream& tab(std::ostream &o)
{
	o<<'\t';
	return o;
}
