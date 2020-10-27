#pragma once
class CLocation
{
public:
	CLocation(int x, int y);

	int X()
	{ 
		return m_locationX; 
	}

	void SetX(int val)
	{
		m_locationX = val;
	}

	int Y()
	{
		return m_locationY;
	}

	void SetY(int val)
	{
		m_locationY = val;
	}

private:
	int m_locationX;
	int m_locationY;
};

