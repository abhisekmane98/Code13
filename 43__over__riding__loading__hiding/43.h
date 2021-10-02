#ifndef header
#define header

struct base
{
	private:
	
	public:
		void f1(void);
		void f2(void);
};

struct der: public base
{
	private:
		
	public:
		void f1(void);  // over-riding
		void f2(int);   // hiding
		
};
#endif
