#ifndef header
#define header

struct Ex
{
	public:
		void fun();
		void open();
};

struct NewEx: public Ex
{
	public:
		void save();
		void open();
};

#endif
