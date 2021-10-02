#include <iostream>
#include <thread>

int main()
{
	std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);
    for (int i = 0;i<=2;i++)
    {
        char ch = 'a';
        std::cout << ch << "\n";
		    
    }
  //  std::cout<<std::flush;
    std::this_thread::sleep_for(std::chrono::seconds(10));
}
