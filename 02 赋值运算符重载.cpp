//#include <iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//
//	~Person()
//	{
//		if(m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//
//	Person& operator= (Person &p)
//	{
//		//应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
//		if(m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		//深拷贝
//		m_Age = new int(*p.m_Age);
//
//		//返回对象自身
//		return *this;
//	}
//
//	int *m_Age;
//};
//
//void test01()
//{
//	Person p1(10);
//	Person p2(20);
//	Person p3(30);
//
//	p3 = p2 = p1;
//
//	cout << "p1 = " << *p1.m_Age << endl;
//	cout << "p2 = " << *p2.m_Age << endl;
//	cout << "p3 = " << *p3.m_Age << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}