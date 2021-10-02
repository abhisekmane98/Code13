#include <iostream>
#include <iomanip>
int main()
{
    int n {314};

    auto flag={std::ios::showbase, std::ios::basefield};
    
//  std::cout.setf(std::ios::hex, std::ios::basefield);
//	std::cout.setf(std::ios::showbase);

    std::cout.setf(flag);
    std::cout<<n<<"\n";

    std::cout.unsetf(flag);
    std::cout<<n<<"\n";

}
