#ifndef header
#define header

struct A
{
	private:
		int p;
	public:
		A();    	//  0 arg ctor
		A(int); 	//  1 arg ctor
		A(A&); 		//  copy ctor
		
		void display(void);
		A& sum(A);
};
#endif
