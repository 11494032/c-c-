/**
	*������������������˵�����������
*/

/**
	*person��
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