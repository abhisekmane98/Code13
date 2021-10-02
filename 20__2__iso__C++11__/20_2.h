#ifndef header
#define header

struct base
{
	private:
		int p,q;
	public:
		base();
		base(int,int);
		void set_value(int,int);
		
		base(const base&);              // copy constructor
		base operator=(const base&);    // overloaded= operator
		~base();
		
		void display(void);
};

struct der: public base
{
	private:    // No resources
		int x,y;
		int *p=new int[4];
	public:
		
		der();
		der(der&);
		der& operator=(const der&);
		~der();
		
		void set_value_der(int,int);
		void display_der(void);
		void set_dynamic_array(void);

}; 
#endif
