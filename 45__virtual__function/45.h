#ifndef header
#define header

struct A
{
	private:
		int x;
	public:
		virtual void f1(void);
		void f2(void);
};

struct B: public A
{
	private:
		int y;
	public:
		void f1(void);  // over-ride
		virtual void f2(int);   // over-hide
};
#endif
