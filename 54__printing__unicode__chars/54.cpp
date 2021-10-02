#include<iostream>
#include<io.h>
#include<fcntl.h>

int main()
{
	_setmode( _fileno(stdout), _O_U16TEXT);
	std::wcout<<L"\x0411 \x0414 \x0416 \x0419 \x041B\n";
	std::wcout<<L"\x0905 \x0906 \x0907 \x0908 \x0909\n";
	
}
