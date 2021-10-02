#ifndef header
#define header

struct A
{
	private:
		int a;
	public:
		A();
		A(int);
		void fun1(void);
};
struct B: private A
{
	private:
		int b;
	public:
		B();
		B(int);
		void fun2(void);
};
#endif
