#ifndef header
#define header
#include<string>

struct Base
{
	private:	
	public:
		int a;
		Base();
		Base(int);
		void display_Base(void);
		
};
struct Der: public Base
{
	private:	
	public:
		int b;
		float c;
		char ch,str[20];
		
		Der();
		Der(int);
		void display_Der(void);
		void display_b_Der(void);
		void display_c_Der(void);
};
#endif
