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
		std::cout << "������" << m_name << "   ѧ�ţ�" << m_id << "   ѧԺ��" << m_majorname << "   �Ͷ�ѧУ��" << m_school << std::endl;
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
	s1.setname("����");
	s2.setname("��ҫ��");
	s2.majorname("�Զ���ѧԺ");
	s2.schoolname("��������ѧ");
	s1.setid(14);
	s2.setid(32);
	s1.showstudent();
	s2.showstudent();
	std::cin.get();

}