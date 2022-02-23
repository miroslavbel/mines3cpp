#ifndef MINES3C_EXCEPTIONS_UNSUPPORTEDINSTRUCTIONTYPEIDEXCEPTION__HPP
#define MINES3C_EXCEPTIONS_UNSUPPORTEDINSTRUCTIONTYPEIDEXCEPTION__HPP

#include <stdexcept>

namespace mines3c {
namespace exceptions {

class UnsupportedInstructionTypeIdException : public std::runtime_error {
    public:
        UnsupportedInstructionTypeIdException() :
            std::runtime_error(
              "UnsupportedInstructionTypeIdException: this InstructionTypeId "
              "is unsupported for this operation") {}
};

}  // namespace exceptions
}  // namespace mines3c

#endif  // #ifndef MINES3C_EXCEPTIONS_UNSUPPORTEDINSTRUCTIONTYPEIDEXCEPTION__HPP
