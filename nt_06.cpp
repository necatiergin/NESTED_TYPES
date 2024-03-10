class Nec {

	class Nested {
		//private members
		int x;
		void foo();
		//friend Nec;
		friend class Nec;
	};


	void f(Nested n)
	{
		n.foo(); //valid
		n.x = 5; //valid
	}
};
