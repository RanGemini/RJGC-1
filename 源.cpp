
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<cstring>
#pragma warning (disable:4996)
using namespace std;

class Trigonometric
{//三角函数实现
private:
	double number;//要操作的数
	char ch2;//选择控制
public:
	void print1();//界面输出
	void set1(double num)//传值给操作函数
	{
		number = num;
	}
};
void Trigonometric::print1()
{
	cout << "\t\t请输入一个弧度数：" << endl;
	cin >> number;
	set1(number);
	cout << "\t\t 1.求sin(a)" << endl;
	cout << "\t\t 2.求cos(a)" << endl;
	cout << "\t\t 3.求tan(a)" << endl;
	cout << "\t\t 4.求全部！" << endl;
	cin >> ch2;

back3:

	if (ch2 == '1')
		cout << "sin(" << number << ")=" << sin(number) << endl;
	else if (ch2 == '2')
		cout << "cos(" << number << ")=" << cos(number) << endl;
	else if (ch2 == '3')
		cout << "tan(" << number << ")=" << tan(number) << endl;
	else if (ch2 == '4')
	{
		cout << "sin(" << number << ")=" << sin(number) << endl;
		cout << "cos(" << number << ")=" << cos(number) << endl;
		cout << "tan(" << number << ")=" << tan(number) << endl;
	}
	else
	{
		cout << "\t\t输入有误！请重新选择：" << endl;
		cin >> ch2;
		goto back3;
	}

}

/************************************************************/
class HexBinDecOct
{//进制转换
private:
	char str2[10];//存储二进制
	char str8[10];//存储八进制
	char str16[10];//存储十六进制
	char ch2;//选择控制
	int number;//要转换的数
public:
	void print2();
	void set2(double num)
	{
		number = num;
	}
	void conversionAll(int number);//全部转换
	char sixteen(int number);//转换为十六进制
	char eight(int number);//转换为八进制
	char two(int number);//转换为二进制

};
void HexBinDecOct::print2()
{
	cout << "\t\t请输入一个十进制数：" << endl;
	cin >> number;
	set2(number);
	cout << "\t\t ***********************************" << endl;
	cout << "\t\t * 1.十进制转换为二进制 *" << endl;
	cout << "\t\t * 2.十进制转换为八进制 *" << endl;
	cout << "\t\t * 3.十进制转换为十六进制 *" << endl;
	cout << "\t\t * 4.十进制转换为二、八、十六进制 *" << endl;
	cout << "\t\t *请选择：1-4 *" << endl;
	cout << "\t\t ***********************************" << endl;
	cin >> ch2;

back4:

	if (ch2 == '1')//1.十进制转换为二进制
		cout << "\t\t" << number << "\t转换为二进制：" << two(number) << endl;

	else if (ch2 == '2')//十进制转换为八进制
		cout << "\t\t" << number << "\t转换为八进制：" << eight(number) << endl;

	else if (ch2 == '3')//十进制转换为十六进制
		cout << "\t\t" << number << "\t转换为十六进制：" << sixteen(number) << endl;

	else if (ch2 == '4')//十进制转换为二、八、十六进制
		conversionAll(number);
	else
	{
		cout << "\t\t输入有误！请重新选择：" << endl;
		cin >> ch2;//重新选择
		goto back4;//重新转换
	}

}
char HexBinDecOct::two(int number)
{
	itoa(number, str2, 2);
	return *str2;
}
char HexBinDecOct::eight(int number)
{
	itoa(number, str8, 8);
	return *str8;
}
char HexBinDecOct::sixteen(int number)
{
	itoa(number, str16, 16);
	return *str16;
}
void HexBinDecOct::conversionAll(int number)
{
	itoa(number, str2, 2);
	itoa(number, str8, 8);
	itoa(number, str16, 16);
	cout << "\t\t********************" << endl;
	cout << "\t\t* 1.转换为二进制 *" << str2 << endl;
	cout << "\t\t* 2.转换为八进制 *" << str8 << endl;
	cout << "\t\t* 3.转换为十六进制*" << str16 << endl;
	cout << "\t\t* 请选择：1-3 *" << endl;
	cout << "\t\t********************" << endl;
}
/************************************************************/
class Calculate
{//一般计算
private:
	double sum;//存储运算结果
	char ch2;//选择控制
	double num1, num2;//两个操作数
public:
	void set3(double num1, double num2)//赋值
	{
		num2 = num2; num1 = num1;
	}
	void print3();
	double add(double num1, double num2);//加
	double subtract(double num1, double num2);//减
	double multiplication(double num1, double num2);//乘
	double divide(double num1, double num2);//除
	double mod(double num1, double num2);//取余
};

void Calculate::print3()
{
	cout << "\t\t请输入两个数：" << endl;
	cin >> num1 >> num2;
	set3(num1, num2);
	cout << "\t\t*******************" << endl;
	cout << "\t\t* 1.加法运算 *" << endl;
	cout << "\t\t* 2.减法运算 *" << endl;
	cout << "\t\t* 3.乘法运算 *" << endl;
	cout << "\t\t* 4.除法运算 *" << endl;
	cout << "\t\t* 5.取余运算 *" << endl;
	cout << "\t\t*******************" << endl;
	cout << "\t\t请输入菜单项(1-6)：";
	cin >> ch2;
back2:

	if (ch2 == '1')
	{// 1.加法运算 
		cout << "\t\t" << num1 << '+' << num2 << '=' << add(num1, num2) << endl;
	}
	else if (ch2 == '2')
	{// 2.减法运算 
		cout << "\t\t" << num1 << '-' << num2 << '=' << subtract(num1, num2) << endl;
	}
	else if (ch2 == '3')
	{// 3.乘法运算 
		cout << "\t\t" << num1 << '*' << num2 << '=' << multiplication(num1, num2) << endl;
	}
	else if (ch2 == '4')
	{// 4.除法运算 
		cout << "\t\t" << num1 << '/' << num2 << '=' << divide(num1, num2) << endl;
	}
	else if (ch2 == '5')
	{// 5.取余运算 
		cout << '\t\t' << num1 << '%' << num2 << '=' << mod(num1, num2) << endl;
	}

	else
	{
		cout << "\t\t输入有误！请重新选择：" << endl;
		cin >> ch2;
		goto back2;
	}

}
double Calculate::add(double num1, double num2)
{
	return sum = num1 + num2;
}
double Calculate::subtract(double num1, double num2)
{
	return sum = num1 - num2;
}
double Calculate::multiplication(double num1, double num2)
{
	return sum = num1 * num2;
}
double Calculate::divide(double num1, double num2)
{
	if (num2 == 0)
		return sum = num1 / num2;
	else return 0;
}
double Calculate::mod(double num1, double num2)
{
	if (num2 == 0)
		return sum = (int)num1 % (int)num2;
	else return 0;
}int main()
{
	//int num1=0,num2=0,number=0;
	Trigonometric tri;//三角函数对象
	HexBinDecOct hex;//进制转换对象
	Calculate cal;//一般计算对象
	char ch1, ch3;
back1:
	{
		do {
			cout << "\t\t*****主菜单**********" << endl;
			cout << "\t\t* *" << endl;
			cout << "\t\t* 1. 基本运算 *" << endl;
			cout << "\t\t* 2. 三角函数 *" << endl;
			cout << "\t\t* 3. 进制转换 *" << endl;
			cout << "\t\t* *" << endl;
			cout << "\t\t* 请选择：1---3 *" << endl;
			cout << "\t\t*********************" << endl;
			cin >> ch1;
			if (ch1 == '1')
			{// 1.基本运算 
				cal.print3();
			}
			else if (ch1 == '2')
			{// 2.三角函数 
				tri.print1();
			}
			else if (ch1 == '3')
			{// 3.进制转换 
				hex.print2();
			}
			else
			{
				cout << "输入有误！" << endl;
				goto back1;
			}
			cout << "again?(y/n)" << endl;
			cin >> ch3;
		} while (ch3 == 'y' || ch3 == 'Y');
	};
	return 0;
}
