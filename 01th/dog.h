/**
	*输出张三，李四两个人的姓名，年龄
*/

/**
	*person类
*/

namespace test
{
	class Dog
	{
		private:
			char *name; 
			int age;
		public:
			void setName( char *name);
			void setAge( int age );
			int getAge( void );
			void printDog();
			
	};
	
	void printInfo();
}