/**
	*������������������˵�����������
*/
#include<iostream>
using namespace std;

/**
	*person��
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



//���Գ���
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