#include<iostream>
using namespace std;

//function template
template<class T>
void swapno(T &x, T &y)
{
	T temp;
	temp= x;
	x=y;
	y=temp;
}
main()
{
	int x,y;
	
	cout <<"enter two no.s:";
	cin>> x>>y;

cout<<"before swap:";

cout<<"\nx value is :"<<x;
cout<<"\ny value is :"<<y;

swapno(x,y);

cout<<"\n\n after function template:\n";

cout<<"\nx value is :"<<x;
cout<<"\ny value is :"<<y;

float p=2.3,q=4.5;

swapno(p,q);

cout<<"\np value is :"<<p;
cout<<"\nq value is :"<<q;

char i='a',j='b';

swapno(i,j);
cout<<"\ni value is :"<<i;
cout<<"\nj value is :"<<j;
}
