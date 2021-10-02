#ifndef header
#define header

struct string_class
{
	private:
		char str[30];
	public:
		string_class();
		string_class(const char*);
		
		string_class& operator+(string_class);
		string_class& operator=(string_class);
		string_class& operator+=(string_class);
		
		void display_length(void);
	//	void display_size(void);
		void to_lower(void);
		void to_upper(void);
		
		void display_string();
};
#endif
