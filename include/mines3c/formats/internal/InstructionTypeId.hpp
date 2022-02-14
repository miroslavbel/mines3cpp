#ifndef MINES3C_FORMATS_INTERNAL_INSTRUCTIONTYPEID__HPP
#define MINES3C_FORMATS_INTERNAL_INSTRUCTIONTYPEID__HPP

namespace mines3c {
namespace formats {
namespace internal {

/*!
 * \brief Класс-обертка над перечислением typeId инструкций.
 *
 * Все typeId взяты из клиента.
 *
 * \note Здесь не определены typeId для инструкций <code>LAST</code>,
 * <code>RESTART</code>.
 */
class InstructionTypeId {
    public:
        /*!
         * \brief typeId инструкций из клиента.
         *
         * \note Здесь не определены typeId для инструкций <code>LAST</code>,
         * <code>RESTART</code>.
         *
         * \warning Значения typeId расположены в диапазоне
         * <code>[0-182]</code>. typeId со значениями <code>13</code>,
         * <code>34</code>, <code>41-42</code>, <code>55-56</code>,
         * <code>61-73</code>, <code>75</code>, <code>78-118</code>,
         * <code>121-122</code>, <code>124-130</code>, <code>150-155</code> (все
         * диапазоны даны включительно) отсутствуют.
         */
        enum class TypeId : unsigned char {
            EMPTY = 0,
            BACK  = 1,

            START = 2,
            STOP  = 3,

            MOVE_W = 4,
            MOVE_A = 5,
            MOVE_S = 6,
            MOVE_D = 7,

            DIGG = 8,

            LOOK_W = 9,
            LOOK_A = 10,
            LOOK_S = 11,
            LOOK_D = 12,

            LOOK_F = 14,

            ROTATE_CCW = 15,
            ROTATE_CW  = 16,

            ACTION_BUILD  = 17,
            ACTION_GEO    = 18,
            ACTION_ROAD   = 19,
            ACTION_HEAL   = 20,
            ACTION_QUADRO = 21,
            ACTION_RANDOM = 22,
            ACTION_BIBIKA = 23,

            GOTO    = 24,
            GOSUB   = 25,
            GOSUB1  = 26,
            RETURN  = 27,
            RETURN1 = 28,

            CELL_WA = 29,
            CELL_SD = 30,
            CELL_W  = 31,
            CELL_DW = 32,
            CELL_A  = 33,
            CELL_D  = 35,
            CELL_AS = 36,
            CELL_S  = 37,

            BOOLMODE_OR  = 38,
            BOOLMODE_AND = 39,

            LABEL = 40,

            CC_NOTEMPTY     = 43,
            CC_EMPTY        = 44,
            CC_GRAVITY      = 45,
            CC_CRYSTALL     = 46,
            CC_ALIVE        = 47,
            CC_BOLDER       = 48,
            CC_SAND         = 49,
            CC_ROCK         = 50,
            CC_DEAD         = 51,
            CCC_REDROCK     = 52,
            CCC_BLACKROCK   = 53,
            CC_ACID         = 54,
            CCC_QUADRO      = 57,
            CCC_ROAD        = 58,
            CCC_REDBLOCK    = 59,
            CCC_YELLOWBLOCK = 60,
            CCC_BOX         = 74,
            CCC_OPOR        = 76,
            CCC_GREENBLOCK  = 77,

            VAR_MORE  = 119,
            VAR_LESS  = 120,
            VAR_EQUAL = 123,

            CELL_WW = 131,
            CELL_AA = 132,
            CELL_SS = 133,
            CELL_DD = 134,
            CELL_F  = 135,
            CELL_FF = 136,

            GOSUBF  = 137,
            RETURNF = 138,

            IF_NOT_GOTO = 139,
            IF_GOTO     = 140,

            STD_DIGG  = 141,
            STD_BUILD = 142,
            STD_HEAL  = 143,
            PROG_FLIP = 144,
            STD_MINE  = 145,

            CC_GUN   = 146,
            FILL_GUN = 147,

            CB_HP   = 148,
            CB_HP50 = 149,

            CELL_RIGHT_HAND = 156,
            CELL_LEFT_HAND  = 157,

            MODE_AUTODIGG_ON  = 158,
            MODE_AUTODIGG_OFF = 159,
            MODE_AGR_ON       = 160,
            MODE_AGR_OFF      = 161,

            ACTION_B1 = 162,
            ACTION_B3 = 163,
            ACTION_B2 = 164,
            ACTION_WB = 165,

            ON_RESP = 166,

            ACTION_GEOPACK = 167,
            ACTION_ZM      = 168,
            ACTION_C190    = 169,
            ACTION_POLY    = 170,
            ACTION_UP      = 171,
            ACTION_CRAFT   = 172,
            ACTION_NANO    = 173,
            ACTION_REMBOT  = 174,

            INVDIR_W = 175,
            INVDIR_A = 176,
            INVDIR_S = 177,
            INVDIR_D = 178,

            HANDMODE_ON  = 179,
            HANDMODE_OFF = 180,

            DEBUG_BREAK = 181,
            DEBUG_SET   = 182,
        };
        constexpr InstructionTypeId(TypeId typeId);
    private:
        TypeId value;
};

}  // namespace internal
}  // namespace formats
}  // namespace mines3c

#endif  // #ifndef MINES3C_FORMATS_INTERNAL_INSTRUCTIONTYPEID__HPP
