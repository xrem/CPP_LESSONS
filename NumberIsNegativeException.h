#pragma once
#include <exception>

class NumberIsNegativeException : public std::exception
{
	virtual const char* what() const noexcept override;
};
