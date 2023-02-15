#pragma once
using namespace std;

void Inheritance();

class Parent
{
public:
	Parent()
	{
		cout << "Parent Constructor Called" << endl;
	}

	~Parent()
	{
		cout << "Parent Destructor Called" << endl;
	}

	virtual void print()	// �����Լ�
	{
		cout << "Parent Print Called" << endl;
	}

public:			// �ڽ����� o / �ܺ����� o
	int num1;
protected:		// �ڽ����� o / �ܺ����� x
	int num2;
private:		// �ڽ����� x / �ܺ����� x
	int num3;
};

class Child1 : public Parent
{
public:
	Child1()
	{
		cout << "Child1 Constructor Called" << endl;
	}
	~Child1()
	{
		cout << "Child1 Destructor Called" << endl;
	}

	virtual void print() override
	{
		Parent::print();
		cout << "Child1 Print Called" << endl;
	}

	/*
	��� ������ public
	public -> public
	protected -> protected
	private -> ��� ������
	*/
};

class Child2 : protected Parent
{
public:
	Child2()
	{
		cout << "Child2 Constructor Called" << endl;
	}

	~Child2()
	{
		cout << "Child2 Destructor Called" << endl;
	}
	
	virtual void print() override
	{
		cout << "Child2 Print Called" << endl;
		num1 = 10;	// public	 -> protected
		num2 = 10;	// protected -> protected
	}

	/*
	��� ������ protected
	public		-> protected -> �ܺ����� x
	protected	-> protected
	private		-> ��� ������
	*/
};

class Child3 : private Parent
{
public:
	Child3()
	{
		cout << "Child3 Constructor Called" << endl;
	}
	~Child3()
	{
		cout << "Child3 Destructor Called" << endl;
	}

	virtual void print() override
	{
		cout << "Child3 Print Called" << endl;
		num1 = 10;	// public	 -> private
		num2 = 10;	// protected -> private
	}

	/*
	��� ������ private
	public		-> private -> �ܺ����� x / �ڽ����� x
	protected	-> private
	private		-> ��� ������
	*/
};

class Child3Child : public Child3
{
	Child3Child()
	{
		//num1 = 10; // �θ𿡼� private���� �ٲ�� ������ ����
		//num2 = 10;
	}
};

class PureParent		// �߻� Ŭ���� : ���� ���� �Լ��� �ּ� 1�� �̻� �� Ŭ����
{
public:
	PureParent();
	virtual ~PureParent();

	virtual void func() = 0;	// ���� ���� �Լ�
};

class PureChild : public PureParent
{
public:
	PureChild();
	virtual ~PureChild() override;

	virtual void func() override;
};