#include "StackV.h"
#include <vector>
#include <iostream>

using namespace std;

	int Stack::size()
	{
		return data.size();
	}

	void Stack::push(int value)
	{
		data.push_back(value);
	}

	void Stack::pop()
	{
		data.pop_back();
	}

	int Stack::top()
	{
		if(data.back() > -1 )
			return data.back();
		else
			cout <<"The Stack is Empty" << endl;
	}


	void Stack::clear()
	{
		while(data.back() > -1)
		{	data.pop_back();	}
	}
	
