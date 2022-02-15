#ifndef MINES3C_FORMATS_INTERNAL_LABELIDENTIFICATORLITERAL__HPP
#define MINES3C_FORMATS_INTERNAL_LABELIDENTIFICATORLITERAL__HPP

namespace mines3c {
namespace formats {
namespace internal {

/*!
 * \brief Литерал идентификатора метки.
 *
 * Должен соответствовать регулярному выражению <code>[0-9A-Za-z]{0,3}</code>.
 */
class LabelIdentificatorLiteral {
    private:
        char data[4];
};

}  // namespace internal
}  // namespace formats
}  // namespace mines3c

#endif  // #ifndef MINES3C_FORMATS_INTERNAL_LABELIDENTIFICATORLITERAL__HPP
