class Nec {
public:
	class Nested {
		void foo(Nested);
		Nested bar();
	};
};

void Nec::Nested::foo(Nested x)
{
	//...
}

//invalid
//Nested    Nec::Nested::bar() { }

Nec::Nested  Nec::Nested::bar() 
{ 
	//...
	return {};
}

