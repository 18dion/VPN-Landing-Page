//VIRTUAL FUNCTION OVERLOADING

#include<iostream>
using namespace std;

//virtual function

class base
{
	public :
	virtual	void display()
		{
			cout<<"\n it is base class";
		}
};
class derived:public base
{
	public:
		void display()
		{
			cout<<"\n it is derived class";
		}
};
main()
{
	base *bptr;
	base b;
	derived d;
	
	bptr=&b;
	bptr->display();
	
	bptr=&d;
	bptr->display();
}
