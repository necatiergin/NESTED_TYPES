namespace nec {
	class Nec {
	public:
		enum class Color { White, Red, Brown, Black };
		//...
	};
};


int main()
{
	using enum nec::Nec::Color;

	auto c = Red;
}
