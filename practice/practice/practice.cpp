#include <iostream>
using namespace std;
#include <string>

struct student
{
public:
	string m_name;
	int m_id;
	string m_majorname;
	string m_school;

	void showstudent()
	{
		std::cout << "姓名：" << m_name << "   学号：" << m_id << "   学院：" << m_majorname << "   就读学校：" << m_school << std::endl;
	}

	void setname(string name)
	{
		m_name = name;
	}

	void setid(int id)
	{
		m_id = id;
	}

	void majorname(string major)
	{
		m_majorname = major;
	}

	void schoolname(string school)
	{
		m_school = school;
	}
};

int main()
{
	student s1, s2;
	s1.setname("李四");
	s2.setname("宋耀坤");
	s2.majorname("自动化学院");
	s2.schoolname("华南理工大学");
	s1.setid(14);
	s2.setid(32);
	s1.showstudent();
	s2.showstudent();
	std::cin.get();

}




/*class point {
public:
	int x, y;
public:
	int setpoint(int a, int b)
	{
		x = a;
		y = b;
		return x * y;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
	void show()
	{
		std::cout << x << "  " << y << std::endl;
	}
};

void main()
{
	point op1, op2;
	int i, j;
	op1.setpoint(2, 2);
	op2.setpoint(3, 4);
	i = op1.x;
	std::cout << i << std::endl;
	std::cout << op2.setpoint(3, 4) << std::endl;
	op1.show();
	op2.show();

}

class complex {
private:
	double real;
	double imag;
public:
	void init(double r, double i)
	{
		real = r;
		imag = i;
	}
	double realcomplex()
	{
		return real;
	}
	double imagcomplex()
	{
		return imag;
	}
	double abscomplex()
	{
		return imag * imag + real * real;
	}
}A;

int main()
{
	complex A;
	A.init(1.1, 2.2);
	std::cout << A.realcomplex() << std::endl;
	std::cout << A.imagcomplex() << std::endl;
	std::cout << A.abscomplex() << std::endl;
	std::cin.get();
}

 int main()
{
	 int i = 2;
	 int &j = i;
	 j = 3;
		std::cout << "I=" << i << "  J="<< j << std::endl;
		std::cout << "  J=" << &i << std::endl;
		std::cout << "  J=" << &j << std::endl;
	return 0;

}*/