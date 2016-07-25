#pragma once
ref class PicLocation {
public:
	
	int gety()
	{
		return y;
	}
	int getx()
	{
		return x;
	}
	void setx(int x1)
	{
		x = x1;
	}
	void sety(int y1)
	{
		y = y1;
	}

	PicLocation::PicLocation() {
		x = 0;
		y = 0;
	}

private:
	int x;
	int y;

};
