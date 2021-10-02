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
		
		void display(void);
};

struct der: public base
{
	private:    // No resources
		int x,y;
		int *p=new int[4];
	public:
		void set_value_der(int,int);
		void display_der(void);
		void set_dynamic_array(void);
		void call_base_class_3(der);

}; 
#endif
