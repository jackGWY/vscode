#include<iostream>
#include<exception>

using namespace std;
struct MyException :public exception
{
	const char * what() const throw()
	{
		return "C++ Exception";
	}
};

int main()
{
	try
	{
		throw MyException();
	}
}