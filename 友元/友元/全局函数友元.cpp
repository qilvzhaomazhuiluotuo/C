/*#include <iostream>
using namespace std;
#include <string>;

class Buliding
{
public:
	friend void goodgay(Buliding *building);

public:
	Buliding()
	{
		m_sittingroom = "����";
		m_bedroom = "����";
	}

public:
	string m_sittingroom;
private:
	string m_bedroom;

};

void goodgay(Buliding *building)
{
	cout << "�û������ڷ��ʣ�" << building -> m_sittingroom << endl;
	cout << "�û������ڷ��ʣ�" << building->  m_bedroom << endl;
}

void test01()
{
	Buliding buliding;
	goodgay(&buliding);
}

int main()
{
	test01();
	system("pause");
}*/