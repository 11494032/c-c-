/**
	*输出张三，李四两个人的姓名，年龄
*/

#include<iostream>
using namespace std;

#include "person.h"

namespace A
{
	void Person::setName( char *name )
	{
		this->name = name;
	}

	void Person::setAge( int age )
	{
		this->age = age;
	}
		
	int Person::getAge()
	{
		 return age;
	}
		
	void Person::printPerson()
	{
		cout<<"name = "<<name<<",age = "<<age<<endl;
	}
		
	void printInfo()
	{
		cout<<"person info "<<endl;
	}
	
}


