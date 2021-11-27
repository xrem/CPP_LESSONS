#include "NumberIsNegativeException.h"

const char* NumberIsNegativeException::what() const noexcept {
	return "Numberr is negative, please use number > 0";
}