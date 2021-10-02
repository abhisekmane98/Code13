#include"5.h"
#include<iostream>

int main()
{
	A a1;
	B b1(7,8,9,10,11,12);
	
//	int k1=b1.A_private_sum();
	int k2=b1.A_protected_sum();
	int k3=b1.A_public_sum();
	
	std::cout<<k2<<" "<<k3<<"\n";
	b1.display_A_via_B();

// user 1 of class B

//	b1.b1=3;
//	b1.b2=5;
	b1.b5=7;
	
//	b1.a1=3;
//	b1.a3=5;
//	b1.a5=7;

// end

//	a1.a1=3;
//	a1.a3=5;
	a1.a5=7;
	
	C c1(2,3,1,4,6,1);
	c1.display_private_A_via_C_via_B();

	
	
	
	
}
