/**
	*������������������˵�����������
*/

#include<iostream>
using namespace std;
#include "person.h"
#include "dog.h"

using namespace A;
//���Գ���
int main( int arg,char *argv[])
{
		Person p;
		char a[] = "hello 123";
		p.setName( a );
		p.setAge(15);
		
		p.printPerson();
		
		printInfo();
		
		
		test::Dog d;
		char b[] = "sss";
		d.setName( b );
		d.setAge(15);
		
		d.printDog();
		
		test::printInfo();
		
		return 0;
		
}