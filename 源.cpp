
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<cstring>
#pragma warning (disable:4996)
using namespace std;

class Trigonometric
{//���Ǻ���ʵ��
private:
	double number;//Ҫ��������
	char ch2;//ѡ�����
public:
	void print1();//�������
	void set1(double num)//��ֵ����������
	{
		number = num;
	}
};
void Trigonometric::print1()
{
	cout << "\t\t������һ����������" << endl;
	cin >> number;
	set1(number);
	cout << "\t\t 1.��sin(a)" << endl;
	cout << "\t\t 2.��cos(a)" << endl;
	cout << "\t\t 3.��tan(a)" << endl;
	cout << "\t\t 4.��ȫ����" << endl;
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
		cout << "\t\t��������������ѡ��" << endl;
		cin >> ch2;
		goto back3;
	}

}

/************************************************************/
class HexBinDecOct
{//����ת��
private:
	char str2[10];//�洢������
	char str8[10];//�洢�˽���
	char str16[10];//�洢ʮ������
	char ch2;//ѡ�����
	int number;//Ҫת������
public:
	void print2();
	void set2(double num)
	{
		number = num;
	}
	void conversionAll(int number);//ȫ��ת��
	char sixteen(int number);//ת��Ϊʮ������
	char eight(int number);//ת��Ϊ�˽���
	char two(int number);//ת��Ϊ������

};
void HexBinDecOct::print2()
{
	cout << "\t\t������һ��ʮ��������" << endl;
	cin >> number;
	set2(number);
	cout << "\t\t ***********************************" << endl;
	cout << "\t\t * 1.ʮ����ת��Ϊ������ *" << endl;
	cout << "\t\t * 2.ʮ����ת��Ϊ�˽��� *" << endl;
	cout << "\t\t * 3.ʮ����ת��Ϊʮ������ *" << endl;
	cout << "\t\t * 4.ʮ����ת��Ϊ�����ˡ�ʮ������ *" << endl;
	cout << "\t\t *��ѡ��1-4 *" << endl;
	cout << "\t\t ***********************************" << endl;
	cin >> ch2;

back4:

	if (ch2 == '1')//1.ʮ����ת��Ϊ������
		cout << "\t\t" << number << "\tת��Ϊ�����ƣ�" << two(number) << endl;

	else if (ch2 == '2')//ʮ����ת��Ϊ�˽���
		cout << "\t\t" << number << "\tת��Ϊ�˽��ƣ�" << eight(number) << endl;

	else if (ch2 == '3')//ʮ����ת��Ϊʮ������
		cout << "\t\t" << number << "\tת��Ϊʮ�����ƣ�" << sixteen(number) << endl;

	else if (ch2 == '4')//ʮ����ת��Ϊ�����ˡ�ʮ������
		conversionAll(number);
	else
	{
		cout << "\t\t��������������ѡ��" << endl;
		cin >> ch2;//����ѡ��
		goto back4;//����ת��
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
	cout << "\t\t* 1.ת��Ϊ������ *" << str2 << endl;
	cout << "\t\t* 2.ת��Ϊ�˽��� *" << str8 << endl;
	cout << "\t\t* 3.ת��Ϊʮ������*" << str16 << endl;
	cout << "\t\t* ��ѡ��1-3 *" << endl;
	cout << "\t\t********************" << endl;
}
/************************************************************/
class Calculate
{//һ�����
private:
	double sum;//�洢������
	char ch2;//ѡ�����
	double num1, num2;//����������
public:
	void set3(double num1, double num2)//��ֵ
	{
		num2 = num2; num1 = num1;
	}
	void print3();
	double add(double num1, double num2);//��
	double subtract(double num1, double num2);//��
	double multiplication(double num1, double num2);//��
	double divide(double num1, double num2);//��
	double mod(double num1, double num2);//ȡ��
};

void Calculate::print3()
{
	cout << "\t\t��������������" << endl;
	cin >> num1 >> num2;
	set3(num1, num2);
	cout << "\t\t*******************" << endl;
	cout << "\t\t* 1.�ӷ����� *" << endl;
	cout << "\t\t* 2.�������� *" << endl;
	cout << "\t\t* 3.�˷����� *" << endl;
	cout << "\t\t* 4.�������� *" << endl;
	cout << "\t\t* 5.ȡ������ *" << endl;
	cout << "\t\t*******************" << endl;
	cout << "\t\t������˵���(1-6)��";
	cin >> ch2;
back2:

	if (ch2 == '1')
	{// 1.�ӷ����� 
		cout << "\t\t" << num1 << '+' << num2 << '=' << add(num1, num2) << endl;
	}
	else if (ch2 == '2')
	{// 2.�������� 
		cout << "\t\t" << num1 << '-' << num2 << '=' << subtract(num1, num2) << endl;
	}
	else if (ch2 == '3')
	{// 3.�˷����� 
		cout << "\t\t" << num1 << '*' << num2 << '=' << multiplication(num1, num2) << endl;
	}
	else if (ch2 == '4')
	{// 4.�������� 
		cout << "\t\t" << num1 << '/' << num2 << '=' << divide(num1, num2) << endl;
	}
	else if (ch2 == '5')
	{// 5.ȡ������ 
		cout << '\t\t' << num1 << '%' << num2 << '=' << mod(num1, num2) << endl;
	}

	else
	{
		cout << "\t\t��������������ѡ��" << endl;
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
	Trigonometric tri;//���Ǻ�������
	HexBinDecOct hex;//����ת������
	Calculate cal;//һ��������
	char ch1, ch3;
back1:
	{
		do {
			cout << "\t\t*****���˵�**********" << endl;
			cout << "\t\t* *" << endl;
			cout << "\t\t* 1. �������� *" << endl;
			cout << "\t\t* 2. ���Ǻ��� *" << endl;
			cout << "\t\t* 3. ����ת�� *" << endl;
			cout << "\t\t* *" << endl;
			cout << "\t\t* ��ѡ��1---3 *" << endl;
			cout << "\t\t*********************" << endl;
			cin >> ch1;
			if (ch1 == '1')
			{// 1.�������� 
				cal.print3();
			}
			else if (ch1 == '2')
			{// 2.���Ǻ��� 
				tri.print1();
			}
			else if (ch1 == '3')
			{// 3.����ת�� 
				hex.print2();
			}
			else
			{
				cout << "��������" << endl;
				goto back1;
			}
			cout << "again?(y/n)" << endl;
			cin >> ch3;
		} while (ch3 == 'y' || ch3 == 'Y');
	};
	return 0;
}
