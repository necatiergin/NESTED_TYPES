struct Word {
	short x, y;
};

class Nec {
	Word mx;
	using Word = int;
	Word my;

	void foo()
	{
		mx.x = 5;
		my = 20;
	}
};
