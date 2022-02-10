#include "mines3c/formats/internal/InstructionTypeId.hpp"

namespace mines3c {
namespace formats {
namespace internal {

constexpr InstructionTypeId::InstructionTypeId(TypeId instructionId) :
    value(instructionId) {}

}  // namespace internal
}  // namespace formats
}  // namespace mines3c
