#ifndef MINES3C_FORMATS_INTERNAL_INSTRUCTIONKIND__HPP
#define MINES3C_FORMATS_INTERNAL_INSTRUCTIONKIND__HPP

namespace mines3c {
namespace formats {
namespace internal {

/*!
 * \brief Классифицирует инструкции по характеру дополнительной информации ими
 * несомой.
 *
 * Каждая инструкция относится ровно к одному из этих типов.
 *
 * \sa InstructionTypeId
 */
enum class InstructionKind {
    /*!
     * \brief Инструкция не содержит дополнительной информации.
     *
     * Большинство инструкций относятся к этому типу.
     */
    Simple,
    /*!
     * \brief Инструкция содержит в себе \link LabelIdentificatorLiteral литерал
     * идентификатора метки\endlink.
     *
     * \sa Полный список инструкций этого типа: \link
     * InstructionTypeId::TypeId::GOTO GOTO\endlink, \link
     * InstructionTypeId::TypeId::GOSUB GOSUB\endlink, \link
     * InstructionTypeId::TypeId::GOSUB1 GOSUB1\endlink, \link
     * InstructionTypeId::TypeId::LABEL LABEL\endlink, \link
     * InstructionTypeId::TypeId::GOSUBF GOSUBF\endlink, \link
     * InstructionTypeId::TypeId::IF_NOT_GOTO IF_NOT_GOTO\endlink, \link
     * InstructionTypeId::TypeId::IF_GOTO IF_GOTO\endlink, \link
     * InstructionTypeId::TypeId::ON_RESP ON_RESP\endlink.
     */
    Label,
    /*!
     * \brief Инструкция содержит в себе \link VariableIdentificatorLiteral
     * литерал идентификатора переменной\endlink и \link VariableValueLiteral
     * литерал значения переменной\endlink.
     *
     * \sa Полный список инструкций этого типа: \link
     * InstructionTypeId::TypeId::VAR_MORE VAR_MORE\endlink, \link
     * InstructionTypeId::TypeId::VAR_LESS VAR_LESS\endlink, \link
     * InstructionTypeId::TypeId::VAR_EQUAL VAR_EQUAL\endlink.
     */
    VarCmp,
    /*!
     * \brief Инструкция содержит в себе \link StringLiteral литерал
     * строки\endlink.
     *
     * \sa Полный список инструкций этого типа: \link
     * InstructionTypeId::TypeId::DEBUG_BREAK DEBUG_BREAK\endlink, \link
     * InstructionTypeId::TypeId::DEBUG_SET DEBUG_SET\endlink.
     */
    String,
};

}  // namespace internal
}  // namespace formats
}  // namespace mines3c

#endif  // #ifndef MINES3C_FORMATS_INTERNAL_INSTRUCTIONKIND__HPP
