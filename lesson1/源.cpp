#include<iostream>
using namespace std;
class Shape {//基类（父类）
public:
	void setWidth(int w)
	{
		width = w;
	}
	void setHeight(int h)
	{
		height = h;
	}
protected:
	int width;
	int height;
};
class Rectangle :public Shape//派生类

{
public:
	int getArea()
	{
		return(width * height);
	}
};
int main()
{
	Rectangle Rect;

	Rect.setHeight(7);
	cout << "totol area:" << Rect.getArea() << endl;//面积
	return 0;
}

#include<stdio.h>
char getIndex(char a[20], char value)
{
	int i;
	for (i = 0; i < 20; i++)
	{
		if (a[i] == value)
		{

		}
	}
}