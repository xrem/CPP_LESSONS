#include "NumberIsTooBigException.h"

const char* NumberIsTooBigException::what() const noexcept {
	return "Number is too big, please use number <= 40";
}