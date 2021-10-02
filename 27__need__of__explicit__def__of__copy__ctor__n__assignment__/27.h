#ifndef header
#define header

struct A
{
	private:
		char *s;
		int n;	
	public:
		A();
		A(const char*,int);
		void display(void);
};
#endif
