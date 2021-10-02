#ifndef header
#define header

struct A
{
	private:
		int p,q;
	public:
		void set_value(int,int);
		void display(void);
		A& return_reference(void);
};

#endif
