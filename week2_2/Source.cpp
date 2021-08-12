#include<stdio.h>
float BMI(float w, float h)
{
	return w / (h * h);
}
int main()
{
	float w, h;
	printf("Enter your weight(kg):");
	scanf_s("%f", &w);
	printf("Enter your height(m):");
	scanf_s("%f", &h);
	printf("BMI = %.1f\n", BMI(w, h));
	if (BMI(w,h) < 18.5)
	{
		printf("Underweight");
	}
	else if (BMI(w,h) <= 24.9)
	{
		printf("Normal");
	}
	else if (BMI(w,h) <= 29.9)
	{
		printf("Overweight");
	}
	else if (BMI(w,h) <= 34.9)
	{
		printf("Obese");
	}
	else if (BMI(w,h) >= 35.0)
	{
		printf("Extremly Obese");
	}
	return 0;
}