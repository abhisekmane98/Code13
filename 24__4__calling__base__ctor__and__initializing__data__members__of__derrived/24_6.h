#ifndef header
#define header

struct A
{
	private:
		int p;
	public:
		A(int);
};
struct B:public A
{
	private:
		int q;
	public:
		B(int,int);
		void display(void);
		
};

#endif
