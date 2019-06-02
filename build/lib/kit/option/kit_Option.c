#include "main.h"

_Bool kit_option_Option_db51f4a3b554b90e9cb6c3c3__isNone(struct kit_option_Option__db51f4a3b554b90e9cb6c3c3 * __this)
{
    if ((*__this).__dsc == kit_option_Option_db51f4a3b554b90e9cb6c3c3__None)
    {
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}

uint8_t kit_option_Option_db51f4a3b554b90e9cb6c3c3__unwrap(struct kit_option_Option__db51f4a3b554b90e9cb6c3c3 * __this)
{
    if ((*__this).__dsc == kit_option_Option_db51f4a3b554b90e9cb6c3c3__Some)
    {
        uint8_t __match__1 = (*__this).__var.variant_Some.value;
        uint8_t value = __match__1;
        {
            return value;
        }
    }
    else
    {
        kit_utils__panic((char *) "unwrap: unexpected missing value");
    }
}

uint8_t kit_option_Option_db51f4a3b554b90e9cb6c3c3__or(struct kit_option_Option__db51f4a3b554b90e9cb6c3c3 * __this,
                                                       uint8_t other)
{
    if ((*__this).__dsc == kit_option_Option_db51f4a3b554b90e9cb6c3c3__Some)
    {
        uint8_t __match__1 = (*__this).__var.variant_Some.value;
        uint8_t v = __match__1;
        {
            return v;
        }
    }
    else
    {
        return other;
    }
}

_Bool kit_option_Option_245c01af2be1c62453ba052f__isSome(struct kit_option_Option__245c01af2be1c62453ba052f * __this)
{
    if ((*__this).__dsc == kit_option_Option_245c01af2be1c62453ba052f__None)
    {
        {
            return 0;
        }
    }
    else
    {
        return 1;
    }
}

_Bool kit_option_Option_245c01af2be1c62453ba052f__isNone(struct kit_option_Option__245c01af2be1c62453ba052f * __this)
{
    if ((*__this).__dsc == kit_option_Option_245c01af2be1c62453ba052f__None)
    {
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}

char kit_option_Option_245c01af2be1c62453ba052f__unwrap(struct kit_option_Option__245c01af2be1c62453ba052f * __this)
{
    if ((*__this).__dsc == kit_option_Option_245c01af2be1c62453ba052f__Some)
    {
        char __match__1 = (*__this).__var.variant_Some.value;
        char value = __match__1;
        {
            return value;
        }
    }
    else
    {
        kit_utils__panic((char *) "unwrap: unexpected missing value");
    }
}

char kit_option_Option_245c01af2be1c62453ba052f__or(struct kit_option_Option__245c01af2be1c62453ba052f * __this,
                                                    char other)
{
    if ((*__this).__dsc == kit_option_Option_245c01af2be1c62453ba052f__Some)
    {
        char __match__1 = (*__this).__var.variant_Some.value;
        char v = __match__1;
        {
            return v;
        }
    }
    else
    {
        return other;
    }
}

_Bool kit_option_Option_b0e8e219aa3cff69af74d1b7__isSome(struct kit_option_Option__b0e8e219aa3cff69af74d1b7 * __this)
{
    if ((*__this).__dsc == kit_option_Option_b0e8e219aa3cff69af74d1b7__None)
    {
        {
            return 0;
        }
    }
    else
    {
        return 1;
    }
}

_Bool kit_option_Option_b0e8e219aa3cff69af74d1b7__isNone(struct kit_option_Option__b0e8e219aa3cff69af74d1b7 * __this)
{
    if ((*__this).__dsc == kit_option_Option_b0e8e219aa3cff69af74d1b7__None)
    {
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}

void * kit_option_Option_b0e8e219aa3cff69af74d1b7__unwrap(struct kit_option_Option__b0e8e219aa3cff69af74d1b7 * __this)
{
    if ((*__this).__dsc == kit_option_Option_b0e8e219aa3cff69af74d1b7__Some)
    {
        void * __match__1 = (*__this).__var.variant_Some.value;
        void * value = __match__1;
        {
            return value;
        }
    }
    else
    {
        kit_utils__panic((char *) "unwrap: unexpected missing value");
    }
}

void * kit_option_Option_b0e8e219aa3cff69af74d1b7__or(struct kit_option_Option__b0e8e219aa3cff69af74d1b7 * __this,
                                                      void * other)
{
    if ((*__this).__dsc == kit_option_Option_b0e8e219aa3cff69af74d1b7__Some)
    {
        void * __match__1 = (*__this).__var.variant_Some.value;
        void * v = __match__1;
        {
            return v;
        }
    }
    else
    {
        return other;
    }
}

_Bool kit_option_Option_db51f4a3b554b90e9cb6c3c3__isSome(struct kit_option_Option__db51f4a3b554b90e9cb6c3c3 * __this)
{
    if ((*__this).__dsc == kit_option_Option_db51f4a3b554b90e9cb6c3c3__None)
    {
        {
            return 0;
        }
    }
    else
    {
        return 1;
    }
}
