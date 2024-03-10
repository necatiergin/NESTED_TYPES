struct Data {
	//...
	int get()const;
};

class Nec {
	Data mdata;
	void foo();
	using Data = int;
	Data mval{};
};

void Nec::foo()
{
	mdata = 5; // invalid;
	mval = 5;  //valid
	auto x = mdata.get(); //valid
	auto y = mval.get(); //invalid
}
