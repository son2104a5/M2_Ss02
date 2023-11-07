#include<stdio.h>
int main(){
	const float PI = 3.14;
	float edge, radius, length, height;
	printf("edge = ");
	scanf("%f",&edge);
	float area = edge*edge;
	float perimeter = edge*4;
	printf("area =%f\n",area);
	printf("perimeter =%f\n",perimeter);
	printf("length = ");
	scanf("%f",&length);
	printf("height = ");
	scanf("%f",&height);
	float rectangular_area = length*height;
	float perimeter_of_a_rectangle = (length+height)*2;
	printf("rectangular area =%f\n",rectangular_area);
	printf("perimeter of a rectangle =%f\n",perimeter_of_a_rectangle);
	printf("radius = ");
	scanf("%f",&radius);
	float circle_area = PI*radius*radius;
	float diameter_of_a_circle = PI*2*radius;
	printf("circle area = %f\n", circle_area);
	printf("diameter of a circle =%f\n",diameter_of_a_circle);
}

