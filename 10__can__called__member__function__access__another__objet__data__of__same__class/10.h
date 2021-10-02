#ifndef header
#define header

struct complex
{
	private:
		int r,i;
	public:
		complex();
		complex(int,int);
		void display(void);
		void fun(complex);
};

#endif
