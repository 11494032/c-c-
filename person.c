/**
	*������������������˵�����������
*/
#include <stdio.h>

/**
	*person�ṹ��
*/
struct person
{
		char *name; ///<����
		int age;		///<����
		void (*printPerson)( struct person *p ); ///<�������������
};

/**
*�������������
*@param[in] p person���󣬲μ�struct person�ṹ��
*�����ʽ��name = aa, age = 12
*/
void printPerson( struct person *p )
{
		printf(" name = %s, age = %d \n", p->name, p->age);
}


//���Գ���
void main( int arg,char *argv[])
{
		struct person persons[] = 
		{
			{ "zhangshan", 12, printPerson },
			{ "lishi", 15, printPerson },
		};
		
		persons[0].printPerson( &persons[0] );
		persons[1].printPerson( &persons[1] );
		
}