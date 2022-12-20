// OPERATOR OVERLOADING

#include<iostream>
using namespace std;
//operator overloading
class test
{
	private:
		int num;
		public:
			test()
			{
				num=8;
			}
			void operator ++()
			{
				num=num+2;
			}
			void print()
			{
				cout<<"\n the count is:"<<num;
			}
};
main()
{
	test tt;
	tt.print();
	++tt; // calling of function "void operator ++()"
	tt.print();
}
