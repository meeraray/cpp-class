/*
Ronuk Ray
1/22/18
Period 2

P9.2 : Rectangle class that handles height, width, scaling, finding perimeter and area
*/
#include <iostream>

using namespace std;

class Rectangle 
{
	public:
		Rectangle(int w, int h);
		int get_perimeter() const;
		int get_area() const;
		void resize(double factor);
	
	private:
		int width;
		int height;
};

Rectangle::Rectangle(int w, int h) 
{
	width = w;
	height = h;
}

int Rectangle::get_perimeter() const 
{
	return width * 2 + height * 2;
}

int Rectangle::get_area() const 
{	
	return width * height;
}

void Rectangle::resize(double factor) 
{
	width *= factor;
	height *= factor;
}

int main() 
{
	Rectangle rect(10, 20);
	cout << "Perimeter: " << rect.get_perimeter() << endl;
	cout << "Area: " << rect.get_area() << endl;
	rect.resize(2);
	cout << "New Perimeter: " << rect.get_perimeter() << endl;
	cout << "New Area: " << rect.get_area() << endl;
	return 0;
}