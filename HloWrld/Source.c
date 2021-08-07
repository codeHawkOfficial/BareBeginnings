#include<math.h>
#include<stdio.h>
int main() {
	//Area of Triangle

	float a, b, c, area;
	printf("Enter sides of triangle:");
	scanf_s("%f %f %f", &a, &b, &c);
	
	float s = (a + b + c) / 2;

	if (a + b > c & a + c > b & b + c > a) {
		area = sqrtf(s * (s - a) * (s - b) * (s - c));

		printf("Area of triangle is %f sq units\n", area);
	}
	else {
		printf("Please recheck sides Input\n");
		main();
	}

	system("pause");
	return 0;
}