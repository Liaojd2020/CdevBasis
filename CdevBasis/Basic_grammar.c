#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  //标准的输入输出库
#include <stdlib.h> //调用系统的命令（cmd）
#define SIZE 10

int main001()
{
	//第一个程序打印 Hello world!
	printf("Hello world! \n");
	//调用system函数打开记事本
	system("notepad");
	//调用system函数打开微信
	system("D:/应用/微信/WeChat/WeChat.exe");
	return 0;
}

int main002()
{
	printf("char类型大小：%d \n",sizeof(char));
	printf("int类型大小：%d \n",sizeof(int));
	printf("long类型大小：%d \n", sizeof(long));
	printf("short类型大小：%d \n", sizeof(short));
	printf("float类型大小：%d \n", sizeof(float));
	printf("double类型大小：%d \n", sizeof(double));
	int int_output = 1000;
	//char型需要指定长度
	char char_output [10] = "HelloWold";
	printf("int型定义输出实例：%d,char型定义输出实例：%s", int_output, char_output);
	return 0;
}

int main003()
{
	/* 
	1、区别常量和变量,常量用const关键字修饰，不能修改常量值
	2、printf输出占位符号：%d->十进制整型;%u->无符号整型输出；%c->字符；%s->字符串，遇到\0停止，后面的不输出了；
	%X\%x->十六进制；%o->八进制；%hd->短整型；%ld->长整型；%lld->长长整型；%f->浮点型；
	%.2f->保留2位小数点浮点型,%p获取内存地址Id
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
	printf("总价为：%d \n",total);
	printf("无符号整型格式化输出：%u \n", num);
	printf("十进制格式化输出：%d \n", num);
	printf("字符格式化输出:%s \n", str);
	printf("字符格式化输出:%s \n",str2);
	printf("十六进制格式化输出：%X %x \n", num, num);
	printf("八进制格式化输出：%o \n", num);
	printf("短整型：%hd \n", shnum);
	printf("长整型：%ld \n", lnum);
	printf("长长整型：%lld \n", llnum);
	printf("浮点型：%f \n", fnum);
	printf("保留2位小数点的浮点型：%.2f \n", fnum);
	//%p打印变量内存地址ID，该地址ID为一个十六进制的无符号内存地址
	printf("%p", &num);
	//变量赋值以0开始赋值的为八进制数据,0后面的数字不能超过8
	int num1 = 0123;
	printf("num的值是：%d \n", num1);
	//变量赋值以0x（0X）开始赋值的为十六进制数据,0x后面不能超过f（F）
	//变量赋值可以定义八进制、十进制、十六进制，不能定义为二进制
	int num2 = 0x123a;
	printf("num的值是：%d \n", num2);
	return 0;
}

int main004()
{   /*
	1、scanf接收键盘输入，变量获取键盘输入需要加上&取地址符
	2、直接使用scanf会有安全报错提醒，需要在程序第一行增加#define _CRT_SECURE_NO_WARNINGS参数进行忽略
	3、也可以使用#pragma warning(disable:4996)进行忽略，该参数不需要放在程序第一行
	*/
	int age;
	char name [10];
	printf("请输入你的姓名和年龄信息：");
	scanf("%s,%d",&name,&age);
	printf("%s,%d \n", name, age);
	return 0;
}

int main005()
{
	//格式化输出putchar：putchar函数输出一个无符号字符
	//格式化输入getchar:getchar函数的返回值是用户输入的字符的ASCII码,只能接收一个无符号字符，输入多个会自动截取第一个
	char name;
	name = getchar();
	putchar(name);
	return 0;
}

int main006()
{	/*
		1、if语句实例
		2、运算实例
		3、scanf实例
	*/
	float pice = 5.78;
	float account_balance = 100;
	int weight;
	float pay_amount;
	
	printf("请输入你需要购买的重量：");
	scanf("%d", &weight);
	pay_amount = pice * weight;

	if ( pay_amount >=0 & pay_amount<=account_balance)
	{
		printf("你账户余额为：%.2f,需要支付的金额为：%.2f,账户余额：%.2f", account_balance, pay_amount, account_balance - pay_amount);
	}
	else if (pay_amount >= 0 & pay_amount > account_balance)
	{
		printf("你账户余额为：%.2f,需要支付的金额为：%.2f,账户余额不足", account_balance, pay_amount);
	}
	else
	{
		printf("你的输入有问题!");
	}

	return 0;

}

int main007()
{	/*
	switch语句
	*/
	int fens;
	printf("请输入你的分数：");
	scanf("%d", &fens);
	switch (fens / 10)
	{
	case 10:
		printf("优秀");
		break;
	case 9:
		printf("优秀");
		break;
	case 8:
		printf("良好");
		break;
	case 7:
		printf("良好");
		break;
	case 6:
		printf("及格");
		break;
	default:
		printf("不及格");
		break;
	}

}

int main008()
{
	/*
	 while循环
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
	do while循环
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
	for 循环
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
	continue、break、goto
	*/
	for (int i = 0; i <= 10; i++)
	{
		if (i % 2 == 0)
		{	
			if (i == 4) {
				printf("第4次循环跳过 \n");
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
				printf("循环到4时跳出循环结束程序 \n");
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
	数组
	*/
	int arr[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++) {
		printf("%d \n", arr[i]);
	}
	//获取数组的长度:sizeof(arr)/sizeof(arr[0])
	printf("数组总元素个数为：%d \n", sizeof(arr) / sizeof(arr[0]));
	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++) {
		printf("数组第%d个元素的值是：%d \n", j, arr[j]);
	}
	return 0;
}

int main013()
{
	/*
	数组不同定义方式对比
	*/
	int arr1[3] = { 1,2,3 };
	printf("【数组arr1】\n");
	for (int j = 0; j < sizeof(arr1) / sizeof(arr1[0]); j++) 
	{
		printf("数组arr1第%d个元素的值是：%d \n", j, arr1[j]);
	}
	//不指定元素个数
	int arr2[] = { 1,2,3,4 };
	printf("【数组arr2】\n");
	for (int j = 0; j < sizeof(arr2) / sizeof(arr2[0]); j++) 
	{
		printf("数组arr2第%d个元素的值是：%d \n", j, arr2[j]);
	}
	//定义一个数组，元素都是0
	int arr3[3] = { 0 };
	printf("【数组arr3】\n");
	for (int j = 0; j < sizeof(arr3) / sizeof(arr3[0]); j++) 
	{
		printf("数组arr3第%d个元素的值是：%d \n", j, arr3[j]);
	}
	//定义一个数组，除第一个元素为1，其他元素为0
	int arr4[3] = { 1 };
	printf("【数组arr4】\n");
	for (int j = 0; j < sizeof(arr4) / sizeof(arr4[0]); j++) 
	{
		printf("数组arr4第%d个元素的值是：%d \n", j, arr4[j]);
	}
	//定义一个数组，除了已经定义的元素，其他元素都为0
	int arr5[10] = { 1,2,3 };
	printf("【数组arr5】\n");
	for (int j = 0; j < sizeof(arr5) / sizeof(arr5[0]); j++) 
	{
		printf("数组arr5第%d个元素的值是：%d \n", j, arr5[j]);
	}
	return 0;
}

int main014()
{
	/*
	输入10个数返回最大数
	*/
	int arr[SIZE];
	int max = 0;
	//将输入的字符串生成一个数组
	for (int i = 0; i < SIZE; i++) {
		scanf("%d", &arr[i]);
	}
	//比较数组中每个数字的大小，最终获取最大值
	for (int j = 0; j < SIZE; j++) {
		if (arr[j] > max) {
			max = arr[j];
		}
	}
	printf("输入的最大值是：%d", max);
	return 0;
}

int main015()
{
	/*
	数组倒序
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
		printf("倒序后数组arr1的第%d个元素是：%d \n", i, arr1[i]);
	}
	return 0;
}

int main()
{
	/*
	冒泡排序
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

