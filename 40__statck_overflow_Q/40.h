#ifndef header
#define header

struct A
{
	private:
		int p,q;
	public:
		A();    				        //  0 arg ctor
		A(int,int);                 	//  2 arg ctor
		
		A(A&); 				        	//  copy ctor
		A& operator=(A&);  		        // overloading= operator    `OVA`
		~A();             		        // dctor
		
		void display(void);
		
};
#endif
