#include <iostream>
using namespace std;

class Building;
class goodGay
{
public:

	goodGay();
	void visit(); //ֻ��visit������ΪBuilding�ĺ����ѣ����Է�����Building��˽������
	void visit2();

private:
	Building* building;
};


class Building
{
	//���߱�����  goodGay���е�visit��Ա���� ��Building�����ѣ����Է���˽������
	// friend void goodGay::visit();
	// friend void goodGay::visit2();
	friend class goodGay;
public:
	Building();

public:
	string m_SittingRoom; //����
private:
	string m_BedRoom;//����
};

Building::Building()
{
	this->m_SittingRoom = "����";
	this->m_BedRoom = "����";
}

goodGay::goodGay()
{
	building = new Building;
}

void goodGay::visit()
{
	cout << "�û���1���ڷ���" << building->m_SittingRoom << endl;
	cout << "�û���1���ڷ���" << building->m_BedRoom << endl;
}

void goodGay::visit2()
{
	cout << "�û���2���ڷ���" << building->m_SittingRoom << endl;
	cout << "�û���2���ڷ���" << building->m_BedRoom << endl;
}

void test01()
{
	goodGay gg;
	gg.visit();
	gg.visit2();
}

int main() {

	test01();

	return 0;
}
