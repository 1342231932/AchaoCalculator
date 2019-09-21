
#include <iostream>
#include <fstream>
using namespace std;




int judgeone(int x, int y, int z)
{
	if (x + y - z > 0)
		return 1;
	else
		return 0;
}
int judgetwo(int z, int b, int y, double o)
{
	if (z != 0)
	{
		b = y / z;
		o = (double)y / z;
		if (b == o)
			return 1;
		else
			return 0;
	}
	else
		return 0;
}
int judgethree(int x, int y)
{
	if (x - y > 0)
		return 1;
	else
		return 0;
}
int judgefour(int x, int y, int z)
{
	if (x - y > 0 && x - y - z > 0)
		return 1;
	else
		return 0;
}
int judgefive(int x, int y, int z)
{
	if (x - y * z > 0)
		return 1;
	else
		return 0;
}
int judgesix(int x, int y, int z, int b, double o)
{
	if (z != 0)
	{
		b = y / z;
		o = (double)y / z;
		if (b == o && x - y / z > 0)
			return 1;
		else
			return 0;
	}
	else
		return 0;

}
int judgeseven(int x, int y, int z)
{
	if (x * y - z > 0)
		return 1;
	else
		return 0;
}
int judgeeight(int x, int y, int z, double o, int b)
{
	if (z != 0)
	{
		b = x * y / z;
		o = (double)x * y / z;
		if (o == b)
			return 1;
		else
			return 0;
	}
	else
		return 0;
}
int judgenine(int x,int y,int b,double o)
{
	if (y != 0)
	{
		b = x / y;
		o = (double)x / y;
		if (b == o)
			return 1;
		else
			return 0;
	}
	else
		return 0;
}




void calutaor(int n, ofstream& subject)
{
	int judge;
	int a = 0;
	int x, y, z;//用于生成三个随机数随机数
	int j, k;
	int b, h;//辅助变量
	double o, p;//用于检验除法中是否存在小数
	for (a = 0; a < n; a++)
	{
		x = rand() % 100;
		y = rand() % 100;
		z = rand() % 100;// 随机产生三个0-100的整数
		j = 1 + rand() % 4;
		k = 1 + rand() % 4;// 随机产生 1，2，3，4来模拟加减		
		switch (j)
		{
			case 1:
			{
				if (k == 1) {
				cout << x << "+" << y << "+" << z << "=" << x + y + z << endl;
				subject << x << "+" << y << "+" << z << "=" << x + y + z << endl;//写入subjecttxt
			}
				if (k == 2) {
				judge = judgeone(x, y, z);

				if (judge)
				{
					cout << x << "+" << y << "-" << z << "=" << x + y - z << endl;
					subject << x << "+" << y << "-" << z << "=" << x + y - z << endl;//写入subject.txt
				}
				else
					n = n + 1;
			}
				if (k == 3) {
				cout << x << "+" << y << "-" << z << "=" << x + y * z << endl;
				subject << x << "+" << y << "-" << z << "=" << x + y * z << endl;//写入subject.txt
			}
				if (k == 4) {
				judge = judgetwo(z, b, y, o);
				if (judge)
				{
					cout << x << "+" << y << "/" << z << "=" << x + y / z << endl;
					subject << x << "+" << y << "/" << z << "=" << x + y / z << endl;

				}
				else
					n = n + 1;
			}
			}
			break;

			case 2:
			{
				if (k == 1) {
				judge = judgethree(x, y);
				if (judge)
				{
					cout << x << "-" << y << "+" << z << "=" << x - y + z << endl;
					subject << x << "-" << y << "+" << z << "=" << x - y + z << endl;
				}
				else
					n = n + 1;
			}
				if (k == 2)
			{
				judge = judgefour(x, y, z);
				if (judge)
				{
					cout << x << "-" << y << "-" << z << "=" << x - y - z << endl;
					subject << x << "-" << y << "-" << z << "=" << x - y - z << endl;

				}
				else
					n = n + 1;
			}
				if (k == 3) {
				judge = judgefive(x, y, z);
				if (judge)
				{
					cout << x << "-" << y << "*" << z << "=" << x - y * z << endl;
					subject << x << "-" << y << "*" << z << "=" << x - y * z << endl;
				}
				else
					n = n + 1;
			}
				if (k == 4) {
				judge = judgesix(x, y, z, b, o);
				if (judge)
				{
					cout << x << "-" << y << "/" << z << "=" << x - y / z << endl;
					subject << x << "-" << y << "/" << z << "=" << x - y / z << endl;

				}
				else
					n = n + 1;

			}
			}
			break;

			case 3:
			{
				if (k == 1) {
				cout << x << "*" << y << "+" << z << "=" << x * y + z << endl;
				subject << x << "*" << y << "+" << z << "=" << x * y + z << endl;

			}
				if (k == 2) {
				judge = judgeseven(x, y, z);
				if (judge)
				{
					cout << x << "*" << y << "-" << z << "=" << x * y - z << endl;
					subject << x << "*" << y << "-" << z << "=" << x * y - z << endl;
				}
				else
					n = n + 1;
			}
				if (k == 3) {
				cout << x << "*" << y << "*" << z << "=" << x * y * z << endl;
				subject << x << "*" << y << "*" << z << "=" << x * y * z << endl;

			}
				if (k == 4) {
				judge = judgeeight(x, y, z, o, b);
				if (judge)
				{
					cout << x << "*" << y << "/" << z << "=" << x * y / z << endl;
					subject << x << "*" << y << "*" << z << "=" << x * y * z << endl;
				}
				else
					n = n + 1;


			}
			}
			break;

			case 4:
			{
				if (k == 1) {
				judge = judgenine(x, y, b, o);

				if (judge)
				{
					cout << x << "/" << y << "+" << z << "=" << x / y + z << endl;
					subject << x << "*" << y << "*" << z << "=" << x * y * z << endl;
				}
				else
					n = n + 1;
			}
				if (k == 2) 
				{
					if (y != 0)
					{
						b = x / y;
						o = (double)x / y;
						if (b == o && x / y - z > 0)
						{
							cout << x << "/" << y << "-" << z << "=" << x / y - z << endl;
							subject << x << "/" << y << "-" << z << "=" << x / y - z << endl;

						}
						else
							n = n + 1;
					}
					else
						n = n + 1;
				}
				if (k == 3) {
				if (y != 0)
				{
					b = x / y;
					o = (double)x / y;
					if (b == o)
					{
						cout << x << "/" << y << "*" << z << "=" << x / y * z << endl;
						subject << x << "/" << y << "*" << z << "=" << x / y * z << endl;
					}
					else
						n = n + 1;
				}
				else
					n = n + 1;
			}
				if (k == 4) {
				if (y != 0 && z != 0)
				{
					b = x / y;
					h = b / z;
					o = (double)x / y;
					p = (double)b / z;
					if (b == o && h == p)
					{
						cout << x << "/" << y << "/" << z << "=" << x / y / z << endl;
						subject << x << "/" << y << "/" << z << "=" << x / y / z << endl;
					}
					else
						n = n + 1;
				}
				else
					n = n + 1;

			}
			}
			break;

		}
	}
}




void START()
{
	ofstream subject;
	int num;
	subject.open("subject.txt");
	if (subject.is_open())
	{
		cout << "请输入出题数目" << endl;
		cin >> num;
		calutaor(num, subject);
		subject.close();
	}
}




int main()
{
	START();
	return 0;
}