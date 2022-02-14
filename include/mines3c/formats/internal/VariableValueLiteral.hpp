#ifndef MINES3C_FORMATS_INTERNAL_VARIABLEVALUELITERAL__HPP
#define MINES3C_FORMATS_INTERNAL_VARIABLEVALUELITERAL__HPP

#include <cstdint>

namespace mines3c {
namespace formats {
namespace internal {

/*!
 * \brief Литерал значения переменной.
 *
 * Может принимать значения в диапазоне <code>[-9_999, 99_999]</code>. Значение
 * по умолчанию - <code>0</code>.
 */
class VariableValueLiteral {
    private:
        std::int32_t data;
};

}  // namespace internal
}  // namespace formats
}  // namespace mines3c

#endif  // #ifndef MINES3C_FORMATS_INTERNAL_VARIABLEVALUELITERAL__HPP
