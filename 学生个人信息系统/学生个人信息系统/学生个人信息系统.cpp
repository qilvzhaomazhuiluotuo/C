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