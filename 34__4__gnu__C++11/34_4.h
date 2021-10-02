#ifndef header
#define header

struct A
{
	private:
		int p;
		char *s;
	public:
		A();    				        //  0 arg ctor
		A(int,const char*);          	//  2 arg ctor
		A(A&); 					//  copy ctor
		A(A&&);     			        //  Move ctor
		
		A& operator=(A&);  		// overloading= operator
		A operator=(A&&);  		    // overloaded Move=oprator
		
		~A();             		        // desturctor
		
		void display(void);
		
};
#endif
