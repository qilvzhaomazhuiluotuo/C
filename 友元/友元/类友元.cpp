#include <iostream>
using namespace std;
#include <string>;

class Building;
class goodgay
{
public:
	goodgay();
	void visit();

private:
	Building *building;
};

class Building
{
	friend class goodgay;
public:
	Building();
public:
	string m_sittingroom;
private:
	string m_bedroom;
};

Building::Building()
{
	m_sittingroom = "����";
	m_bedroom = "����";
}

goodgay::goodgay()
{
	building = new Building;
}

void goodgay::visit()
{
	cout << "�û����������:  " << building->m_sittingroom << endl;
	cout << "�û����������:  " << building->m_bedroom << endl;
}

void test01()
{
	goodgay gg;
	gg.visit();
}

int main()
{
	test01();
	system("pause");
}