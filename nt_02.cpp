class Nec {
public:
	class Nested {
	public:
		void foo();
	private:
		void bar();
		int mx{};
	};

	void necfunc()
	{
		Nested ns;
		ns.foo(); //valid;
		ns.bar(); //invalid - access control
		ns.mx = 5; //invalid- access control
	}
};
