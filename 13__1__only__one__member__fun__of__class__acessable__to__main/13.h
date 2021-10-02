#ifndef header
#define header

struct A
{
	private:
		int a,b;
	public:
		A();
		void set_data(int,int);
		int sum(void);
		void display(void);
};

struct B: private A
{
	
	private:
		int c,d;
	public:
		B();
		using A::display;
		
};
#endif
