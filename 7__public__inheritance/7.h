#ifndef header
#define header

struct A
{
	private:
		int a1,a2;
	protected:
		int a3,a4;
	public:
		int a5,a6;
		
		A();
		A(int,int,int,int,int,int);
		
		int A_sum();
		void A_display(void);

};

struct B: public A
{
	private:
		int b1,b2;
	protected:
		int b3,b4;
	public:
		int b5,b6;
		
		B();
		B(int,int,int,int,int,int);
		
		int B_sum();
		void B_display(void);
		
		
		
};


struct C: public B
{
	private:
		int c1,c2;
	protected:
		int c3,c4;
	public:
		int c5,c6;
		
		C();
		C(int,int,int,int,int,int);
		
		int C_sum();
		void C_display(void);
		
};

#endif

