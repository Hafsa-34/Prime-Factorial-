#include<iostream>
using namespace std;
int prime(int i, int chk, int num)
{
	for(i=2; i<num; i++)
	{
		if(num%i==0)
		{
			chk++;
			break;
		}
	}
	if(chk==0)
	{
		cout<<"\nIt is a prime number"<<endl;
	}
	else
	{
		cout<<"\nIt is not a prime number"<<endl;	
	}
	return 0;
}
long factl(int num,long factorial=1)
{
	for(int x=1; x<=num; ++x)
	{
	factorial*=x;
    }
	cout<<"Factorial of "<<num<<" is: "<<factorial;
	return 0;
}
int main ()
{
int num,i;
int chk=0;
int x;
long factorial=1;
	cout<<"Enter a number: ";
	cin>>num;
	prime(i,chk,num);	
	factl(num,factorial=1);
}
