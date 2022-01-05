#include<iostream>
#include <string>

using namespace std;

//创建类
class Person
{
public:
	//构造函数
	Person(string name,int age)
	{
		m_Name = name;
		m_Age = age;
	}

	//重载 == 运算符
	bool operator==(Person &p)
	{
		if(this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
		return false;
	}

	//重载 == 运算符
	bool operator!=(Person &p)
	{
		if(this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return false;
		}
		return true;
	}


	//属性
	string m_Name;
	int m_Age;
};

void test01()
{
	Person p1("Tom",18);
	Person p2("Mike",18);

	if(p1 == p2)
	{
		cout << "p1和p2是同一个人" << endl;
	}
	else
	{
		cout << "p1和p2不是同一个人" << endl;
	}

	if(p1 != p2)
	{
		cout << "p1和p2不是同一个人" << endl;
	}
	else
	{
		cout << "p1和p2是同一个人" << endl;
	}

}

int main()
{
	test01();

	system("pause");
	return 0;
}