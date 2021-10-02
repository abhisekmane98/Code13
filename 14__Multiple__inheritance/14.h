#ifndef header
#define header

struct B1
{
	private:
		int a,b;
	public:
		B1();
		~B1();
};
struct B2
{
	private:
		int c,d;
	public:
		B2();
		~B2();
};
struct C: private B2,private B1
{
	private:
		int e,f;
	public:
		C();
		~C();
};
#endif
