#ifndef header
#define header

struct A
{
	private:
	public:
};

struct B: private A
{
	private:
		int a,b;
	protected:
		int c,d;
	public:
		int e,f;
}
#endif
