#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//С��18δ���꣬18��28���꣬29��48���꣬48��60׳�꣬60��100���꣬100����������
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
	{
		printf("δ����");
	}
	else if(age>=18 && age <28)
	{
		printf("����");
	}
	else if(age>=28 && age <60)
	{
		printf("����");
	}
	else if (age >= 60 && age < 100)
	{
		printf("����");
	}
	else
	{
		printf("������");
	}
	return 0;
}