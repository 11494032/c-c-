/**
	*输出张三，李四两个人的姓名，年龄
*/
#include<iostream>
using namespace std;

/**
	*person类
*/
class person
{
	public:
		char *name; 
		int age;		
		void printPerson() 
	 	{
			cout<<"name = "<<name<<", age = "<<age<<endl;
		};
};



//测试程序
int main( int arg,char *argv[])
{
		person persons[] = 
		{
			{ "zhangshan", 12 },
			{ "lishi", 15 },
		};
		
		persons[0].printPerson( );
		persons[1].printPerson( );
		
		return 0;
		
}