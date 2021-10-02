#ifndef header
#define header

struct A
{
	private:
		int x;
	public:
		A();
		virtual void fun(void);
		
};

struct B :public A
{
	private:
	public:
		B();
		void fun(void);
	
};
#endif
