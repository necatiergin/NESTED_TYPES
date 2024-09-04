class Encloser {
	struct Nested {
		int get_sizeof_x() const
		{
			return sizeof(mx); // valid - unavaluated context
		}

		int get_x() const
		{
			//return mx; // invalid
		}

		int get_x(Encloser& enc)
		{
			//...
			return enc.mx; // valid since C++11
		}
	};
	int mx;
};
