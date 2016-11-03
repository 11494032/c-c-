/**
	*输出张三，李四两个人的姓名，年龄
*/
#include <stdio.h>

/**
	*person结构体
*/
struct person
{
		char *name; ///<姓名
		int age;		///<年龄
		void (*printPerson)( struct person *p ); ///<输出姓名和年龄
};

/**
*输出姓名和年龄
*@param[in] p person对象，参见struct person结构体
*输出格式：name = aa, age = 12
*/
void printPerson( struct person *p )
{
		printf(" name = %s, age = %d \n", p->name, p->age);
}


//测试程序
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