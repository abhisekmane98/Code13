#ifndef header
#define header

struct base
{
	protected:
		int a;
	public:
		base();
		base(int);
		
		void display_base(void);
};

struct der: public base
{
	private:
		int p;
	public:
	//	der();
	//	der(int);
		
		void display_der(void);
};

#endif
