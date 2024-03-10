class Nec {
public:
	class Nested {
		//...
	};

	using size_type = unsigned int;
	enum class Color {White, Red, Brown, Black};
private:
	class Erg {	};
};


int main()
{
	Nec::Nested x{};
	Nec::size_type sz{};
	Nec::Color c = Nec::Color::Black;
	Nec::Erg e; //invalid - access control
}
