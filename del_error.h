#pragma once
#include <iostream>
#include <exception>

using namespace std;

class del_error :
    public exception
{
private:
	string message;

public:
	del_error()noexcept = default;

	del_error(string message_p) : message{ message_p } {}

	virtual const char* what()const noexcept final override { return message.c_str(); }

	virtual ~del_error() = default;
};

