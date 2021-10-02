#include"5.h"
#include<iostream>

A::A()
{
	a1=a2=a3=a4=a5=a6=0;
}
A::A(int k1,int k2,int k3,int k4,int k5,int k6)
{
	a1=k1; a2=k2; a3=k3; a4=k4; a5=k5; a6=k6;	
}
int A::A_sum()
{
	return (a1+a2+a3+a4+a5+a6);
}
void A::A_display()
{
	std::cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<a5<<" "<<a6<<"\n";
}
void A::display_private_A()
{
	std::cout<<a1<<" "<<a2<<"\n";
}



B::B()
{
	b1=b2=b3=b4=b5=b6=0;
}
B::B(int k1,int k2,int k3,int k4,int k5,int k6): A(11,12,13,14,15,16)
{
	b1=k1; b2=k2; b3=k3; b4=k4; b5=k5; b6=k6;	
}
int B::B_sum()
{
	return (b1+b2+b3+b4+b5+b6);
}
void B::B_display()
{
	std::cout<<b1<<" "<<b2<<" "<<b3<<" "<<b4<<" "<<b5<<" "<<b6<<"\n";
}


/*int B::A_private_sum()
{
	return (a1+a2);	
}*/	
int B::A_protected_sum()
{
	return (a3+a4);
}
int B::A_public_sum()
{
	return (a5+a6);
}
void B::display_A_via_B()
{
	A_display();  // directly Accessing public function of class A
}
void B::display_private_A_via_B()
{
	display_private_A();
}


C::C()
{
	c1=c2=c3=c4=c5=c6=0;
}
C::C(int k1,int k2,int k3,int k4,int k5,int k6): B(1,2,3,4,5,6)
{
	c1=k1; c2=k2; c3=k3; c4=k4; c5=k5; c6=k6;	
}
int C::C_sum()
{
	return (c1+c2+c3+c4+c5+c6);
}
void C::C_display()
{
	std::cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<" "<<c5<<" "<<c6<<"\n";
}
void C::display_private_A_via_C_via_B()
{
	display_private_A_via_B();
}
	
	
	
