/*
#include <iostream>

class D {
public:
	virtual void display() {
		std::cout << "D" << std::endl;
	}
};
class C : public D {
public:
	// override ������ �������������� ��������� ���� ���� ��������� �� �������.
	virtual void display() override {
		std::cout << "C" << std::endl;
	}
};
class B : public C {
public:
	// ��������� �������� (������ �) ������������ ��������� ���� virtual void display();
	virtual void display() final {
		std::cout << "B" << std::endl;
	}
};
// ����� � - ������������� ����� (����� ����� ������) (������������ ���������)
class A final : public B {
public:
	virtual void display(int i) {
		std::cout << "A" << i << std::endl;
	}
};

int main() {
	D d;
	C c;
	B b;
	A a;
	C& b_as_c = b;
	b_as_c.display();

	/*
	D& linkToC = c;
	a.display();
	b.display(5);
	c.display();
	d.display();
	linkToC.display();
	*/
//}
//*/