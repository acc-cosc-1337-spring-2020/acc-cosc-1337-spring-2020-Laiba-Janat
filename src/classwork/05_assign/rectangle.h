/*
Create the interface for a Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/

#include<iostream>

class Rect
{

public:
	Rect(int h, int w) : height{ h }, width{ w } {calculate_area();}
	int get_Area() const { return Area; }
	friend std::ostream& operator<<(std::ostream& out, const Rect& r);
	


private:
	int Area;
	int height{ 0 };
	int width{ 0 };
	void calculate_area();



};