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
		
		void set_private_A(int,int);
		void display_private_A();
};

struct B: protected A
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
		
		void set_private_A_via_B(int,int);
		void set_protected_n_public_A_via_B(int,int,int,int);
		
		void display_private_A_via_B(void);
		void display_protected_n_public_A_via_B(void);
		void display_A_via_B(void);
};


struct C: protected B
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
		
		void modify_A_protected_n_public_via_C();
		void display_A_via_C();

};

#endif

