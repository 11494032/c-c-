/**
	*输出张三，李四两个人的姓名，年龄
*/

#include<iostream>
using namespace std;

#include "dog.h"

namespace test
{
	void Dog::setName( char *name )
	{
		this->name = name;
	}

	void Dog::setAge( int age )
	{
		this->age = age;
	}
		
	int Dog::getAge()
	{
		 return age;
	}
		
	void Dog::printDog()
	{
		cout<<"name = "<<name<<",age = "<<age<<endl;
	}
		
	
	void printInfo()
	{
		cout<<"Dog info "<<endl;
	}
}



