#include<iostream>
#include<string.h>
using namespace std;
class Student
{
public:
	void set(char n[50], char num[50], char xy[50], char zy[50], char xb[50], char ss[50], char p[50])
	{
		strcpy(name, n);
		strcpy(number, num);
		strcpy(xueyuan, xy);
		strcpy(zhuanye, zy);
		strcpy(xingbie,xb);
		strcpy(sushe, ss);
		strcpy(phone, p);
	}
	void printf()
	{
		cout << name << " " << number << " " << xueyuan << " " << zhuanye << " " << xingbie << " " << sushe << " " << phone << endl;
	}
protected:
	char name[50];
	char number[50];
	char xueyuan[50];
	char zhuanye[50];
	char xingbie[50];
	char sushe[50];
	char phone[50];
};
int main()
{
	int t;
	char n[50];
	char num[50];
	char xy[50];
	char zy[50];
	char xb[50];
	char ss[50];
	char p[50];
	cin >> t;
	while (t--)
	{
		Student a;
		cin >> n >> num >> xy >> zy >> xb >> ss >> p;
		a.set(n, num, xy, zy, xb, ss, p);
		a.printf();
	}
	return 0;
}
/*题目描述
   面向对象程序设计的中心就是把客观事物抽象为程序世界里一段段代码，校园里的主体是学生，泛泛的学生包含很多属性，比如姓名、学号、所在学院、专业、性别、住址、联系电话。。。。。。等等，有这些属性，需要操纵它们的动作，比如读取姓名、设置姓名、读取学号、设置学号。。。。。。等等，这就是我们课堂说的属性和方法，对于属性和方法，我们又有访问控制方式限制，标示为public、private、protected等，根据以上的信息，请给出一个完整的学生类定义：Student，并测试输出n个该类对象的各项属性值。

输入
第一行表示要输入n个对象

后续各行输入不同对象的各属性值，每个对象一行。

输出
输出不同对象的各自属性

每个对象占一行

样例输入
2
WangHai 2014150112 计算机 计算机科学与技术 男 南区215 13760222222
LiBin 2013151292 计算机 软件工程 男 南区318 13677777777
样例输出
WangHai 2014150112 计算机 计算机科学与技术 男 南区215 13760222222
LiBin 2013151292 计算机 软件工程 男 南区318 13677777777*/