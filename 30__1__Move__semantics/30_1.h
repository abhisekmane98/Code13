#ifndef header
#define header

struct A
{
	private:
		int p;
		char *s;
	public:
		A();
		A(int,const char*);
		void set_data(int,const char*);
		void display(void);
		
	//	A(A&);                                 //  copy ctor
	//	A(A&);                                 //  auto_ptr Move ctor
		A(A&&);                                //  unique_ptr Move ctor
		
	//	A& operator=(A&);                      //  overloaded = operator
	//	A& operator=(A&&);                     //  Move overloaded Assignment operator
		
	//	~A();                                  //   Dctor
};

#endif
