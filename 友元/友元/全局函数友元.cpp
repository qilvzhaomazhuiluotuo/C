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
		m_sittingroom = "客厅";
		m_bedroom = "卧室";
	}

public:
	string m_sittingroom;
private:
	string m_bedroom;

};

void goodgay(Buliding *building)
{
	cout << "好基友正在访问：" << building -> m_sittingroom << endl;
	cout << "好基友正在访问：" << building->  m_bedroom << endl;
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