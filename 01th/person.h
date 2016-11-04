/**
	*输出张三，李四两个人的姓名，年龄
*/

/**
	*person类
*/

namespace A
{
	class Person
	{
		private:
			char *name; 
			int age;
		public:
			void setName( char *name);
			void setAge( int age );
			int getAge( void );
			void printPerson();
			
	};
	
	void printInfo();
}