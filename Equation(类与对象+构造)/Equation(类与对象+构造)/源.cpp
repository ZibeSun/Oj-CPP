#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
class Equation
{
    double a, b, c;
public:
    Equation();
    void set(double z, double x, double y);
    void getRoot();
};
Equation::Equation()
{
    a = 1;
    b = 1;
    c = 0;
}
void Equation::set(double z, double x, double y)
{
    a = z;
    b = x;
    c = y;
}
void Equation::getRoot()
{
    double x1, x2,p,q,s;
    s = b * b - 4 * a * c;
    /*if (s == 0)
    {
        x1 = (-b + sqrt(fabs(s))) / (2 * a);
        cout << fixed << setprecision(2) << "x1=x2=" << x1 << endl;
    }*/
    if (s> 0)
    {
        x1= (-b + sqrt(s)) / (2 * a);
        x2= (-b - sqrt(s)) / (2 * a);
        cout << fixed << setprecision(2) << "x1=" << x1 << " x2=" << x2 << endl;
    }
    else if (s < 0)
    {
        p = (-b) / (2 * a);
        q = sqrt(-s) / (2 * a);
        cout << fixed << setprecision(2) << "x1=" << p << "+" << q << "i " << "x2=" << p << "-" << q << "i" << endl;
    }
    else
    {
        x1 = (-b + sqrt(fabs(s))) / (2 * a);
        cout << fixed << setprecision(2) << "x1=x2=" << x1 << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q, w, e;
        Equation h;
        cin >> q >> w >> e;
        h.set(q, w, e);
        h.getRoot();
    }
    return 0;
}/*题目描述
建立一个类Equation，表达方程ax2+bx+c=0。类中至少包含以下方法：

1、无参构造（abc默认值为1、1、0）与有参构造函数，用于初始化a、b、c的值；

2、set方法，用于修改a、b、c的值

3、getRoot方法，求出方程的根。

一元二次方程的求根公式如下：



一元二次方程的求解分三种情况，如下：



输入
输入测试数据的组数t

第一组a、b、c

第二组a、b、c

输出
输出方程的根，结果到小数点后2位

在C++中，输出指定精度的参考代码如下：

#include <iostream>

#include <iomanip> //必须包含这个头文件

using namespace std;

void main( )

{ double a =3.141596;

  cout<<fixed<<setprecision(3)<<a<<endl;  //输出小数点后3位

｝

样例输入
3
2 4 2
2 2 2
2 8 2
样例输出
x1=x2=-1.00
x1=-0.50+0.87i x2=-0.50-0.87i
x1=-0.27 x2=-3.73*/