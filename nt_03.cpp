class Nec {
private:
	int mx;
	void foo();
	static void sfunc();

public:
	class Nested {
		void bar(Nec nec)
		{
			nec.mx = 0;  // valid
			nec.foo();  // valid
			Nec::sfunc(); //valid
		}
	};
};
