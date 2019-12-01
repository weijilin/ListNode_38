#include <iostream>
using namespace std;
#include <string>


class WashRoom
{
public:
	void GoToManRoom()
	{
		cout << "往前一小步，文明一大步" << endl;
	}

	void GoToLadyRoom()
	{
		cout << "往后一小步，shaozi鞋和裤" << endl;
	}

};


// 抽象类
class Person
{
public:
	// 纯虚函数
	virtual void GoToWC(WashRoom& wc) = 0;

protected:
	string _name;
	int _age;
};

#if 0
// 在派生类中必须重写基类的纯虚函数
// 否则：子类也是抽象类
class Man : public Person
{
public:
};
#endif

#if 0
class Man : public Person
{
public:
	virtual void GoToWC(WashRoom& wc)
	{
		wc.GoToManRoom();
	}
};

class Woman : public Person
{
public:
	virtual void GoToWC(WashRoom& wc)
	{
		wc.GoToLadyRoom();
	}
};
