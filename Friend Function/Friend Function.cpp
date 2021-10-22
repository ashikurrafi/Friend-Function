#include<iostream>
#include<math.h>
using namespace std;
class complex_number
{
	float x, y;
public:
	complex_number()
	{
		x = 0;
		y = 0;
	}
	complex_number(float a, float b)
	{
		x = a;
		y = b;
	}
	~complex_number()
	{

	}
	friend void magnitude(complex_number c);
	friend complex_number operator + (complex_number, complex_number);
	void print();
};
void magnitude(complex_number c)
{
	float temp;
	temp = sqrt(c.x * c.x + c.y * c.y);
	cout << "magnitude=" << temp;
}
complex_number operator+(complex_number p, complex_number q)
{
	complex_number temp;
	temp.x = p.x + q.x;
	temp.y = p.y + q.y;
	return(temp);
}
void complex_number::print()
{
	cout << x << "+i" << y;
}
int main()
{
	float t, s, u, v;
	cout << "Enter value of 'x' from complex number 1 : ";
	cin >> t;
	cout << "Enter value of 'y' from complex number 1 : ";
	cin >> s;
	cout << "Enter value of 'x' from complex number 2 : ";
	cin >> u;
	cout << "Enter value of 'y' from complex number 2 : ";
	cin >> v;
	complex_number c1(t, s);
	complex_number c2(u, v);
	complex_number c3;
	magnitude(c2);
	c3 = operator+(c1, c2);
	c3.print();
	return 0;
}