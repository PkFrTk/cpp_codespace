#include <iostream>
using namespace std;

class Person {
public:
	friend void test();
	friend ostream& operator<<(ostream& cout, Person& p);
	Person(int a, int b) {
		ma = a;
		mb = b;
	}
private:
	int ma;
	int mb;
};

ostream& operator<<(ostream& cout, Person& p) {
	cout << "p.ma:" << p.ma << " p.mb:" << p.mb << endl;
	return cout; //cout ��������� ostream
}

void test() {
	//Person p; //1��������������Ԫfriend
	//p.ma = 10;
	//p.mb = 10;
	Person p(10, 10); //������public��ʼ��
	//cout << p.ma << endl;
	cout << p << endl;
}

int main() {
	test();
	system("pause");
	return 0;
}