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

	virtual void print()	// 가상함수
	{
		cout << "Parent Print Called" << endl;
	}

public:			// 자식접근 o / 외부접근 o
	int num1;
protected:		// 자식접근 o / 외부접근 x
	int num2;
private:		// 자식접근 x / 외부접근 x
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
	상속 지정자 public
	public -> public
	protected -> protected
	private -> 상속 못받음
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
	상속 지정자 protected
	public		-> protected -> 외부접근 x
	protected	-> protected
	private		-> 상속 못받음
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
	상속 지정자 private
	public		-> private -> 외부접근 x / 자식접근 x
	protected	-> private
	private		-> 상속 못받음
	*/
};

class Child3Child : public Child3
{
	Child3Child()
	{
		//num1 = 10; // 부모에서 private으로 바뀌어 접근을 못함
		//num2 = 10;
	}
};

class PureParent		// 추상 클래스 : 순수 가상 함수가 최소 1개 이상 들어간 클래스
{
public:
	PureParent();
	virtual ~PureParent();

	virtual void func() = 0;	// 순수 가상 함수
};

class PureChild : public PureParent
{
public:
	PureChild();
	virtual ~PureChild() override;

	virtual void func() override;
};