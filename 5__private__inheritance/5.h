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
		
		void display_private_A(void);
};

struct B:private A
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
		
	//	int A_private_sum();
		int A_protected_sum(void);
		int A_public_sum(void);
		void display_A_via_B(void);
		
		void display_private_A_via_B(void);
};

// user 2 of Class B
struct C: private B
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
		// no thing of Class A is Acessble to Class C
		// availability manipulate i have to print a1,a2 values here
		void display_private_A_via_C_via_B(void);
		
		
};

#endif

