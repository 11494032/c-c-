/**
	*������������������˵�����������
*/

/**
	*person��
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