#include <iostream>
using namespace std;
#include <string>


class WashRoom
{
public:
	void GoToManRoom()
	{
		cout << "��ǰһС��������һ��" << endl;
	}

	void GoToLadyRoom()
	{
		cout << "����һС����shaoziЬ�Ϳ�" << endl;
	}

};


// ������
class Person
{
public:
	// ���麯��
	virtual void GoToWC(WashRoom& wc) = 0;

protected:
	string _name;
	int _age;
};

#if 0
// ���������б�����д����Ĵ��麯��
// ��������Ҳ�ǳ�����
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
