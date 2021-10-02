#ifndef header
#define header

struct roman
{
	private:
		unsigned long int num;
	public:
		roman (unsigned long int n);
		friend void operator<<(std::ostream&,roman&&);
};
#endif
