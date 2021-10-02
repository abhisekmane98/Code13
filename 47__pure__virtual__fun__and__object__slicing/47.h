#ifndef header
#define header

struct A
{
	private:
	public:
		virtual void fun1(void)=0;
		void fun2(void);
};

struct B :public A
{
	private:
	public:
		void fun1(void);
		void fun2(void);
		void fun3(void);
};
#endif
