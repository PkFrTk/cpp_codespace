#include <iostream>
using namespace std;

class Person {
public:
	Person operator+(Person& p) {
		Person temp;
		temp.ma = this->ma + p.ma;
		temp.mb = this->mb + p.mb;
		return temp;
	}
	int ma;
	int mb;
};
//Person operator+(Person& p1,Person &p2) {
//	Person temp;
//	temp.ma = p1.ma + p2.ma;
//	temp.mb = p1.mb + p2.mb;
//	return temp;
//}

Person operator+(Person& p1, int num) {
	Person temp;
	temp.ma = p1.ma + num;
	temp.mb = p1.mb + num;
	return temp;
}

void test() {

	Person p1;
	p1.ma = 10;
	p1.mb = 10;

	Person p2;
	p2.ma = 20;
	p2.mb = 20;

	Person p3 = p1 + p2; //simplied without global function
	//Person p3 = p1.operator+(p2); //menber function
	//Person p3 = operator+(p1, p2); //global function
	Person p4 = p1 + 10;

	cout << "p1.ma:" << p1.ma;
	cout << " p1.mb:" << p1.mb << endl;
	cout << "p2.ma:" << p2.ma;
	cout << " p2.mb:" << p2.mb << endl;
	cout << "p3.ma:" << p3.ma;
	cout << " p3.mb:" << p3.mb << endl;
	cout << "p4.ma:" << p4.ma;
	cout << " p4.mb:" << p4.mb << endl;
}

int main() {
	test();
	system("pause");
	return 0;
}