#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  //��׼�����������
#include <stdlib.h> //����ϵͳ�����cmd��
#define SIZE 10

int main001()
{
	//��һ�������ӡ Hello world!
	printf("Hello world! \n");
	//����system�����򿪼��±�
	system("notepad");
	//����system������΢��
	system("D:/Ӧ��/΢��/WeChat/WeChat.exe");
	return 0;
}

int main002()
{
	printf("char���ʹ�С��%d \n",sizeof(char));
	printf("int���ʹ�С��%d \n",sizeof(int));
	printf("long���ʹ�С��%d \n", sizeof(long));
	printf("short���ʹ�С��%d \n", sizeof(short));
	printf("float���ʹ�С��%d \n", sizeof(float));
	printf("double���ʹ�С��%d \n", sizeof(double));
	int int_output = 1000;
	//char����Ҫָ������
	char char_output [10] = "HelloWold";
	printf("int�Ͷ������ʵ����%d,char�Ͷ������ʵ����%s", int_output, char_output);
	return 0;
}

int main003()
{
	/* 
	1���������ͱ���,������const�ؼ������Σ������޸ĳ���ֵ
	2��printf���ռλ���ţ�%d->ʮ��������;%u->�޷������������%c->�ַ���%s->�ַ���������\0ֹͣ������Ĳ�����ˣ�
	%X\%x->ʮ�����ƣ�%o->�˽��ƣ�%hd->�����ͣ�%ld->�����ͣ�%lld->�������ͣ�%f->�����ͣ�
	%.2f->����2λС���㸡����,%p��ȡ�ڴ��ַId
	*/
	const int price = 8;
	char str[10] = "string";
	char str2[20] = "hell\0o wold";
	int num = 12;
	short shnum = 12;
	long lnum = 100;
	long long llnum = 2000;
	float fnum = 3.1353;
	int total;
	total = price * num;
	printf("�ܼ�Ϊ��%d \n",total);
	printf("�޷������͸�ʽ�������%u \n", num);
	printf("ʮ���Ƹ�ʽ�������%d \n", num);
	printf("�ַ���ʽ�����:%s \n", str);
	printf("�ַ���ʽ�����:%s \n",str2);
	printf("ʮ�����Ƹ�ʽ�������%X %x \n", num, num);
	printf("�˽��Ƹ�ʽ�������%o \n", num);
	printf("�����ͣ�%hd \n", shnum);
	printf("�����ͣ�%ld \n", lnum);
	printf("�������ͣ�%lld \n", llnum);
	printf("�����ͣ�%f \n", fnum);
	printf("����2λС����ĸ����ͣ�%.2f \n", fnum);
	//%p��ӡ�����ڴ��ַID���õ�ַIDΪһ��ʮ�����Ƶ��޷����ڴ��ַ
	printf("%p", &num);
	//������ֵ��0��ʼ��ֵ��Ϊ�˽�������,0��������ֲ��ܳ���8
	int num1 = 0123;
	printf("num��ֵ�ǣ�%d \n", num1);
	//������ֵ��0x��0X����ʼ��ֵ��Ϊʮ����������,0x���治�ܳ���f��F��
	//������ֵ���Զ���˽��ơ�ʮ���ơ�ʮ�����ƣ����ܶ���Ϊ������
	int num2 = 0x123a;
	printf("num��ֵ�ǣ�%d \n", num2);
	return 0;
}

int main004()
{   /*
	1��scanf���ռ������룬������ȡ����������Ҫ����&ȡ��ַ��
	2��ֱ��ʹ��scanf���а�ȫ�������ѣ���Ҫ�ڳ����һ������#define _CRT_SECURE_NO_WARNINGS�������к���
	3��Ҳ����ʹ��#pragma warning(disable:4996)���к��ԣ��ò�������Ҫ���ڳ����һ��
	*/
	int age;
	char name [10];
	printf("���������������������Ϣ��");
	scanf("%s,%d",&name,&age);
	printf("%s,%d \n", name, age);
	return 0;
}

int main005()
{
	//��ʽ�����putchar��putchar�������һ���޷����ַ�
	//��ʽ������getchar:getchar�����ķ���ֵ���û�������ַ���ASCII��,ֻ�ܽ���һ���޷����ַ������������Զ���ȡ��һ��
	char name;
	name = getchar();
	putchar(name);
	return 0;
}

int main006()
{	/*
		1��if���ʵ��
		2������ʵ��
		3��scanfʵ��
	*/
	float pice = 5.78;
	float account_balance = 100;
	int weight;
	float pay_amount;
	
	printf("����������Ҫ�����������");
	scanf("%d", &weight);
	pay_amount = pice * weight;

	if ( pay_amount >=0 & pay_amount<=account_balance)
	{
		printf("���˻����Ϊ��%.2f,��Ҫ֧���Ľ��Ϊ��%.2f,�˻���%.2f", account_balance, pay_amount, account_balance - pay_amount);
	}
	else if (pay_amount >= 0 & pay_amount > account_balance)
	{
		printf("���˻����Ϊ��%.2f,��Ҫ֧���Ľ��Ϊ��%.2f,�˻�����", account_balance, pay_amount);
	}
	else
	{
		printf("�������������!");
	}

	return 0;

}

int main007()
{	/*
	switch���
	*/
	int fens;
	printf("��������ķ�����");
	scanf("%d", &fens);
	switch (fens / 10)
	{
	case 10:
		printf("����");
		break;
	case 9:
		printf("����");
		break;
	case 8:
		printf("����");
		break;
	case 7:
		printf("����");
		break;
	case 6:
		printf("����");
		break;
	default:
		printf("������");
		break;
	}

}

int main008()
{
	/*
	 whileѭ��
	*/
	int i = 0;
	while (i <= 10)
	{
		if (i % 2 == 0)
		{
			printf("%d \n",i);
		}
		i++;
	}
	return 0;
}

int main009()
{
	/*
	do whileѭ��
	*/
	int i = 0;
	do
	{
		if (i % 2 == 0)
		{
			printf("%d \n", i);
		}
		i++;
	} while (i <= 10);
	return 0;
}

int main010()
{	/*
	for ѭ��
	*/
	for (int i = 0; i <= 10; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d \n", i);
		}
	}
	return 0;
}

int main011()
{	/*
	continue��break��goto
	*/
	for (int i = 0; i <= 10; i++)
	{
		if (i % 2 == 0)
		{	
			if (i == 4) {
				printf("��4��ѭ������ \n");
				continue;
			}
			printf("%d \n", i);
		}
	}

	printf("Hello World01 \n");
	printf("Hello World02 \n");
	goto flag;
	printf("Hello World03 \n");
	printf("Hello World04 \n");
	printf("Hello World05 \n");
	flag:
	printf("Hello World06 \n");

	for (int j = 0; j <= 10; j++)
	{
		if (j % 2 == 0)
		{
			if (j == 4) {
				printf("ѭ����4ʱ����ѭ���������� \n");
				break;
			}
			printf("%d \n", j);
		}
	}
	return 0;
}

int main012()
{
	/*
	����
	*/
	int arr[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++) {
		printf("%d \n", arr[i]);
	}
	//��ȡ����ĳ���:sizeof(arr)/sizeof(arr[0])
	printf("������Ԫ�ظ���Ϊ��%d \n", sizeof(arr) / sizeof(arr[0]));
	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++) {
		printf("�����%d��Ԫ�ص�ֵ�ǣ�%d \n", j, arr[j]);
	}
	return 0;
}

int main013()
{
	/*
	���鲻ͬ���巽ʽ�Ա�
	*/
	int arr1[3] = { 1,2,3 };
	printf("������arr1��\n");
	for (int j = 0; j < sizeof(arr1) / sizeof(arr1[0]); j++) 
	{
		printf("����arr1��%d��Ԫ�ص�ֵ�ǣ�%d \n", j, arr1[j]);
	}
	//��ָ��Ԫ�ظ���
	int arr2[] = { 1,2,3,4 };
	printf("������arr2��\n");
	for (int j = 0; j < sizeof(arr2) / sizeof(arr2[0]); j++) 
	{
		printf("����arr2��%d��Ԫ�ص�ֵ�ǣ�%d \n", j, arr2[j]);
	}
	//����һ�����飬Ԫ�ض���0
	int arr3[3] = { 0 };
	printf("������arr3��\n");
	for (int j = 0; j < sizeof(arr3) / sizeof(arr3[0]); j++) 
	{
		printf("����arr3��%d��Ԫ�ص�ֵ�ǣ�%d \n", j, arr3[j]);
	}
	//����һ�����飬����һ��Ԫ��Ϊ1������Ԫ��Ϊ0
	int arr4[3] = { 1 };
	printf("������arr4��\n");
	for (int j = 0; j < sizeof(arr4) / sizeof(arr4[0]); j++) 
	{
		printf("����arr4��%d��Ԫ�ص�ֵ�ǣ�%d \n", j, arr4[j]);
	}
	//����һ�����飬�����Ѿ������Ԫ�أ�����Ԫ�ض�Ϊ0
	int arr5[10] = { 1,2,3 };
	printf("������arr5��\n");
	for (int j = 0; j < sizeof(arr5) / sizeof(arr5[0]); j++) 
	{
		printf("����arr5��%d��Ԫ�ص�ֵ�ǣ�%d \n", j, arr5[j]);
	}
	return 0;
}

int main014()
{
	/*
	����10�������������
	*/
	int arr[SIZE];
	int max = 0;
	//��������ַ�������һ������
	for (int i = 0; i < SIZE; i++) {
		scanf("%d", &arr[i]);
	}
	//�Ƚ�������ÿ�����ֵĴ�С�����ջ�ȡ���ֵ
	for (int j = 0; j < SIZE; j++) {
		if (arr[j] > max) {
			max = arr[j];
		}
	}
	printf("��������ֵ�ǣ�%d", max);
	return 0;
}

int main015()
{
	/*
	���鵹��
	*/
	int arr1[9] = { 1,2,3,4,5,6,7,8,9 };
	int valuetmp;
	int i = 0;
	int j = sizeof(arr1) / sizeof(arr1[0])-1;
	
	while (i < j) 
	{
		valuetmp = arr1[i];
		arr1[i] = arr1[j];
		arr1[j] = valuetmp;
		i++;
		j--;
	}

	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("���������arr1�ĵ�%d��Ԫ���ǣ�%d \n", i, arr1[i]);
	}
	return 0;
}

int main()
{
	/*
	ð������
	*/
	int arr[10] = { 1,0,4,7,3,8,9,2,6,5 };
	int num = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < num; i++) {
		for (int j = i+1; j < num ; j++) {
			if 
			int valuetmp = arr[i];
			arr[i] = arr[j];
			arr[j] = valuetmp;
		}
	
	}

}

