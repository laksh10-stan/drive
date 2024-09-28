#include<stdexcept>
using std::runtime_error;
class DivideByZeroException : public runtime_error
{
	public:
		DivideByZeroException::DivideByZeroException()
		: runtime_error("Attempted to divide by zero\n"){
		}
};
