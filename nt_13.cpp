
struct Word {
	short x, y;
};

class Nec {
	void func()
	{
		Word wx;
		//wx.x = 5; //error
		wx = 7; // valid
	}
	using Word = int;
};
