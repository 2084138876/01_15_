#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//小于18未成年，18到28青年，29到48中年，48到60壮年，60到100老年，100以上老寿星
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
	{
		printf("未成年");
	}
	else if(age>=18 && age <28)
	{
		printf("青年");
	}
	else if(age>=28 && age <60)
	{
		printf("中年");
	}
	else if (age >= 60 && age < 100)
	{
		printf("老年");
	}
	else
	{
		printf("老寿星");
	}
	return 0;
}