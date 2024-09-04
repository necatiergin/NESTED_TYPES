#include <iostream>

class Encloser {
	struct Nested
	{
		void func()
		{
			std::cout << "Nested::foo()\n";
		}
	};
public:
	static Nested make_Nested()
	{
		return Nested();
	}
};

int main()
{
	//Encloser::Nested nx;   //error - access control
	//Encloser::Nested ny = Encloser::make_Nested();  //error - access control
	auto nes = Encloser::make_Nested(); //legal. no name no access control
	nes.func();
}
