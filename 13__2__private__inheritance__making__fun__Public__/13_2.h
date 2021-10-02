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

struct B: public A
{
	
	private:
		int c,d;
		using A::display;
	protected:
		
	public:
		B();		
		
};
#endif
