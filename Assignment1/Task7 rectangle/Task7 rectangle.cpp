#include <iostream>
using namespace std;
// height and width of a rectangle in inches 
int width;
int height;

int area;
int perimeter;

int main() {
	height = 2.3;
	width = 6.8;

	perimeter = 2 * (height + width);
	printf("Perimeter of the rectangle = %d inches\n", perimeter);

	area = height * width;
	printf("Area of the rectangle = %d square inches\n", area);
	return 0;
}