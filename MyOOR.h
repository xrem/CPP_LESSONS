#include <exception>
#pragma once
class MyOOR : public std::exception
{
	virtual const char* what() const noexcept override;
};

