#include<iostream>
using namespace std;

class Radius
{
	friend class Circle;
	friend void Show_r(Radius &n);

public:
	Radius(int x)
	{
		r = x;
	}
	~Radius(){}
private:
	int r;
};

void Show_r(Radius &n)
{
	cout << "Բ�İ뾶Ϊ��" << n.r << endl;
}

class Circle
{
public:
	Circle(){}
	~Circle(){}
	double area(Radius a)
	{
		 s = a.r * a.r * 3.1413526;
		return s;
	}
private:
	double s;
};

int main(int argc, char *argv[])
{
	Radius objRadius(9);
	Circle objCircle;
	Show_r(objRadius);
	cout << "���Ϊ:" << objCircle.area(objRadius) << endl;
	return 0;
}