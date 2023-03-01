#ifndef CORE_WARNINGS_HPP
#define CORE_WARNINGS_HPP

#if defined(_MSC_VER)
    #define DISABLE_WARNING_PUSH                    __pragma(warning( push ))
    #define DISABLE_WARNING_POP                     __pragma(warning( pop ))
    #define DISABLE_WARNING(warningNumber)          __pragma(warning( disable : warningNumber ))

    #define DISABLE_WARNING_ARRAY_OUT_OF_BOUNDS
    #define DISABLE_WARNING_CAST_ALIGN
    #define DISABLE_WARNING_CONVERSION              DISABLE_WARNING(4244)
    #define DISABLE_WARNING_CONVERSION_IDENTIFIER   DISABLE_WARNING(4242)
    #define DISABLE_WARNING_CONVERSION_SIGNED       DISABLE_WARNING(4245)
    #define DISABLE_WARNING_DOUBLE_PROMOTION
    #define DISABLE_WARNING_MISSING_FIELD_INITIALIZER
    #define DISABLE_WARNING_OVERLOADED_VIRTUAL
    #define DISABLE_WARNING_PRINTF                  DISABLE_WARNING(4477)
    #define DISABLE_WARNING_SIGN_COMPARE
    #define DISABLE_WARNING_SIZE_T                  DISABLE_WARNING(4267)
    #define DISABLE_WARNING_UNUSED_RESULT
    #define DISABLE_WARNING_UNUSED_VARIABLE
    #define DISABLE_WARNING_USELESS_CAST

#elif defined(__GNUC__) || defined(__clang__)
/* common for gcc and clang */
    #define DO_PRAGMA(X) _Pragma(#X)
    #define DISABLE_WARNING_PUSH                    DO_PRAGMA(GCC diagnostic push)
    #define DISABLE_WARNING_POP                     DO_PRAGMA(GCC diagnostic pop)
    #define DISABLE_WARNING(warningName)            DO_PRAGMA(GCC diagnostic ignored #warningName)

    #define DISABLE_WARNING_ARRAY_OUT_OF_BOUNDS     DISABLE_WARNING(-Warray-bounds)
    #define DISABLE_WARNING_CAST_ALIGN              DISABLE_WARNING(-Wcast-align)
    #define DISABLE_WARNING_CONVERSION              DISABLE_WARNING(-Wconversion)
    #define DISABLE_WARNING_CONVERSION_IDENTIFIER
    #define DISABLE_WARNING_CONVERSION_SIGNED       DISABLE_WARNING(-Wsign-conversion)
    #define DISABLE_WARNING_DOUBLE_PROMOTION        DISABLE_WARNING(-Wdouble-promotion)
    #define DISABLE_WARNING_MISSING_FIELD_INITIALIZER DISABLE_WARNING(-Wmissing-field-initializers)
    #define DISABLE_WARNING_OVERLOADED_VIRTUAL      DISABLE_WARNING(-Woverloaded-virtual)
    #define DISABLE_WARNING_PRINTF                  DISABLE_WARNING(-Wformat)
    #define DISABLE_WARNING_SIGN_COMPARE            DISABLE_WARNING(-Wsign-compare)
    #define DISABLE_WARNING_SIZE_T
    #define DISABLE_WARNING_UNUSED_RESULT           DISABLE_WARNING(-Wunused-result)
    #define DISABLE_WARNING_UNUSED_VARIABLE         DISABLE_WARNING(-Wunused-variable)

#if defined(__clang__)
/* clang only */
    #define DISABLE_WARNING_USELESS_CAST

#elif defined(__GNUC__)
/* gcc only */
    #define DISABLE_WARNING_USELESS_CAST            DISABLE_WARNING(-Wuseless-cast)

#endif

#elif defined(__IAR_SYSTEM_ICC__)
    #define DISABLE_WARNING_PUSH            
    #define DISABLE_WARNING_POP
    #define DISABLE_WARNING(warningTag)             __pragma(diag_suppress=#warningTag)

    #define DISABLE_WARNING_ARRAY_OUT_OF_BOUNDS
    #define DISABLE_WARNING_CAST_ALIGN
    #define DISABLE_WARNING_CONVERSION
    #define DISABLE_WARNING_CONVERSION_IDENTIFIER
    #define DISABLE_WARNING_CONVERSION_SIGNED
    #define DISABLE_WARNING_DOUBLE_PROMOTION
    #define DISABLE_WARNING_MISSING_FIELD_INITIALIZER
    #define DISABLE_WARNING_OVERLOADED_VIRTUAL
    #define DISABLE_WARNING_PRINTF
    #define DISABLE_WARNING_SIGN_COMPARE
    #define DISABLE_WARNING_SIZE_T
    #define DISABLE_WARNING_UNUSED_RESULT
    #define DISABLE_WARNING_UNUSED_VARIABLE
    #define DISABLE_WARNING_USELESS_CAST

#else
    #define DISABLE_WARNING_PUSH
    #define DISABLE_WARNING_POP

    #define DISABLE_WARNING_ARRAY_OUT_OF_BOUNDS
    #define DISABLE_WARNING_CAST_ALIGN
    #define DISABLE_WARNING_CONVERSION
    #define DISABLE_WARNING_CONVERSION_IDENTIFIER
    #define DISABLE_WARNING_CONVERSION_SIGNED
    #define DISABLE_WARNING_DOUBLE_PROMOTION
    #define DISABLE_WARNING_MISSING_FIELD_INITIALIZER
    #define DISABLE_WARNING_OVERLOADED_VIRTUAL
    #define DISABLE_WARNING_PRINTF
    #define DISABLE_WARNING_SIGN_COMPARE
    #define DISABLE_WARNING_SIZE_T
    #define DISABLE_WARNING_UNUSED_RESULT
    #define DISABLE_WARNING_UNUSED_VARIABLE
    #define DISABLE_WARNING_USELESS_CAST

#endif

#endif // CORE_WARNINGS_HPP

