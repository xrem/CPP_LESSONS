#pragma once
#include <exception>

class NumberIsTooBigException : public std::exception
{
	virtual const char* what() const noexcept override;
};

