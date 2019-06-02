#include "stdarg.h"
#include "stdlib.h"
#include "stdio.h"
#include "stdint.h"
#include "math.h"
#include "string.h"
#include "float.h"
#include "limits.h"
#include "inttypes.h"
struct circular_Circular__2a867e0193ff634180614473;
struct kit_common_Enum__box;
struct kit_common_Enum__vtable;
struct kit_common_Struct__box;
struct kit_common_Struct__vtable;
struct kit_common_Union__box;
struct kit_common_Union__vtable;
struct kit_io_Reader__box;
struct kit_io_Reader__vtable;
struct kit_io_Writable__box;
struct kit_io_Writable__vtable;
struct kit_io_Writer__box;
struct kit_io_Writer__vtable;
struct kit_map_Hashable__box;
struct kit_map_Hashable__vtable;
struct kit_mem_Allocator__box;
struct kit_mem_Allocator__vtable;
struct kit_mem__LinearAllocator;
struct kit_mem__SimpleAllocator;
struct kit_mem__StackAllocator;
struct kit_pointer__RefCount;
struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3;
struct kit_slice_Slice__84558aa4a52e53199fd20a2b;
struct kit_slice_Slice__245c01af2be1c62453ba052f;
struct kit_vector_Vector__245c01af2be1c62453ba052f;
struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3;
struct kitten_stringbuilder__StringBuilder;
union kitten_xs_Rounding__EndianTest;
struct circular_Circular__2a867e0193ff634180614473 {
    int * buffer;
    int size;
    int head;
    int tail;
    _Bool full;
    int bufSize;
};
struct kit_common_Enum__box {
    void * __this; struct kit_common_Enum__vtable * __vtable;
};
struct kit_common_Enum__vtable {
    char * (* name)();
    struct kit_slice_Slice__84558aa4a52e53199fd20a2b (* members)();
};
struct kit_common_Struct__box {
    void * __this; struct kit_common_Struct__vtable * __vtable;
};
struct kit_common_Struct__vtable {
    char * (* name)();
    struct kit_slice_Slice__84558aa4a52e53199fd20a2b (* fields)();
};
struct kit_common_Union__box {
    void * __this; struct kit_common_Union__vtable * __vtable;
};
struct kit_common_Union__vtable {
    char * (* name)();
    struct kit_slice_Slice__84558aa4a52e53199fd20a2b (* fields)();
};
struct kit_io_Reader__box {
    void * __this; struct kit_io_Reader__vtable * __vtable;
};
struct kit_io_Reader__vtable {
    size_t (* readBytes)(void *, void *, size_t);
    void (* close)(void *);
};
struct kit_io_Writable__box {
    void * __this; struct kit_io_Writable__vtable * __vtable;
};
struct kit_io_Writable__vtable {
    void * (* ptr)(void *); size_t (* size)(void *);
};
struct kit_io_Writer__box {
    void * __this; struct kit_io_Writer__vtable * __vtable;
};
struct kit_io_Writer__vtable {
    size_t (* writeBytes)(void *, void *, size_t);
    size_t (* write)(void *, struct kit_io_Writable__box);
    void (* flush)(void *);
    void (* close)(void *);
};
enum kit_map__HashCellState {
    kit_map_HashCellState__Empty,
    kit_map_HashCellState__Deleted,
    kit_map_HashCellState__Occupied
};
struct kit_map_Hashable__box {
    void * __this; struct kit_map_Hashable__vtable * __vtable;
};
struct kit_map_Hashable__vtable {
    int (* hash)(void *);
};
struct kit_mem_Allocator__box {
    void * __this; struct kit_mem_Allocator__vtable * __vtable;
};
struct kit_mem_Allocator__vtable {
    void * (* alloc)(void *, size_t);
    void (* free)(void *, void *);
    void * (* calloc)(void *, size_t);
};
struct kit_mem__SimpleAllocator {
    void * (* alloc)(size_t);
    void * (* calloc)(size_t);
    void (* free)(void *);
};
struct kit_option_Option_db51f4a3b554b90e9cb6c3c3_Some__data {
    uint8_t value;
};
enum kit_option_Option__db51f4a3b554b90e9cb6c3c3_Discriminant {
    kit_option_Option_db51f4a3b554b90e9cb6c3c3__Some,
    kit_option_Option_db51f4a3b554b90e9cb6c3c3__None
};
struct kit_option_Option__db51f4a3b554b90e9cb6c3c3 {
    enum kit_option_Option__db51f4a3b554b90e9cb6c3c3_Discriminant __dsc;
    union {
        struct kit_option_Option_db51f4a3b554b90e9cb6c3c3_Some__data variant_Some;
    } __var;
};
struct kit_option_Option_245c01af2be1c62453ba052f_Some__data {
    char value;
};
enum kit_option_Option__245c01af2be1c62453ba052f_Discriminant {
    kit_option_Option_245c01af2be1c62453ba052f__Some,
    kit_option_Option_245c01af2be1c62453ba052f__None
};
struct kit_option_Option__245c01af2be1c62453ba052f {
    enum kit_option_Option__245c01af2be1c62453ba052f_Discriminant __dsc;
    union {
        struct kit_option_Option_245c01af2be1c62453ba052f_Some__data variant_Some;
    } __var;
};
struct kit_option_Option_b0e8e219aa3cff69af74d1b7_Some__data {
    void * value;
};
enum kit_option_Option__b0e8e219aa3cff69af74d1b7_Discriminant {
    kit_option_Option_b0e8e219aa3cff69af74d1b7__Some,
    kit_option_Option_b0e8e219aa3cff69af74d1b7__None
};
struct kit_option_Option__b0e8e219aa3cff69af74d1b7 {
    enum kit_option_Option__b0e8e219aa3cff69af74d1b7_Discriminant __dsc;
    union {
        struct kit_option_Option_b0e8e219aa3cff69af74d1b7_Some__data variant_Some;
    } __var;
};
struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3 {
    size_t length; uint8_t * data;
};
struct kit_slice_Slice__84558aa4a52e53199fd20a2b {
    size_t length; char * * data;
};
struct kit_slice_Slice__245c01af2be1c62453ba052f {
    size_t length; char * data;
};
enum kitten_stringbuilder__BoolCap {
    kitten_stringbuilder_BoolCap__LOWER,
    kitten_stringbuilder_BoolCap__UPPER,
    kitten_stringbuilder_BoolCap__TITLE
};
enum kitten_stringbuilder__BoolMode {
    kitten_stringbuilder_BoolMode__TRUE_FALSE,
    kitten_stringbuilder_BoolMode__T_F,
    kitten_stringbuilder_BoolMode__T1_F0,
    kitten_stringbuilder_BoolMode__ON_OFF
};
struct kitten_stringbuilder__StringBuilder {
    char * chars; int length; int allocated;
};
enum kitten_xs_Rounding__Endianness {
    kitten_xs_Rounding_Endianness__LITTLE,
    kitten_xs_Rounding_Endianness__BIG,
    kitten_xs_Rounding_Endianness__OTHER
};
union kitten_xs_Rounding__EndianTest {
    unsigned int i; char c[4];
};
struct kit_mem__LinearAllocator {
    struct kit_mem_Allocator__box parent;
    void * start;
    void * curPtr;
    size_t capacity;
};
struct kit_mem__StackAllocator {
    struct kit_mem_Allocator__box parent;
    void * start;
    void * curPtr;
    size_t capacity;
};
struct kit_pointer__RefCount {
    struct kit_mem_Allocator__box allocator; int count;
};
struct kit_vector_Vector__245c01af2be1c62453ba052f {
    struct kit_mem_Allocator__box allocator;
    size_t length;
    struct kit_slice_Slice__245c01af2be1c62453ba052f data;
};
struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 {
    struct kit_mem_Allocator__box allocator;
    size_t length;
    struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3 data;
};
void circular__printInt(int i);
char * circular__repeatChar(char what, int times);
int circular__mult(int a, int b);
int main();
void circular_Circular_2a867e0193ff634180614473__reset(struct circular_Circular__2a867e0193ff634180614473 * __this);
void circular_Circular_2a867e0193ff634180614473__resetWipeBuffer(struct circular_Circular__2a867e0193ff634180614473 * __this);
int circular_Circular_2a867e0193ff634180614473__get(struct circular_Circular__2a867e0193ff634180614473 * __this,
                                                    int offset);
void circular_Circular_2a867e0193ff634180614473__set(struct circular_Circular__2a867e0193ff634180614473 * __this,
                                                     int value,
                                                     int offset);
_Bool circular_Circular_2a867e0193ff634180614473__isEmpty(struct circular_Circular__2a867e0193ff634180614473 * __this);
_Bool circular_Circular_2a867e0193ff634180614473__isFull(struct circular_Circular__2a867e0193ff634180614473 * __this);
void circular_Circular_2a867e0193ff634180614473__mapGet(struct circular_Circular__2a867e0193ff634180614473 * __this,
                                                        void (* fn)(int),
                                                        int offset);
void circular_Circular_2a867e0193ff634180614473__mapSet(struct circular_Circular__2a867e0193ff634180614473 * __this,
                                                        int (* fn)(int, int),
                                                        int value,
                                                        int offset);
struct circular_Circular__2a867e0193ff634180614473 circular_Circular_2a867e0193ff634180614473__new(int size,
                                                                                                   struct kit_mem_Allocator__box allocator);
void kit_array_Array_245c01af2be1c62453ba052f__blit(struct kit_slice_Slice__245c01af2be1c62453ba052f * __this,
                                                    struct kit_slice_Slice__245c01af2be1c62453ba052f * other,
                                                    size_t start,
                                                    size_t length);
struct kit_slice_Slice__245c01af2be1c62453ba052f kit_array_Array_245c01af2be1c62453ba052f__copy(struct kit_slice_Slice__245c01af2be1c62453ba052f * __this,
                                                                                                struct kit_mem_Allocator__box allocator);
void kit_array_Array_245c01af2be1c62453ba052f__free(struct kit_slice_Slice__245c01af2be1c62453ba052f * __this,
                                                    struct kit_mem_Allocator__box allocator);

struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3 kit_array_Array_db51f4a3b554b90e9cb6c3c3__new(struct kit_mem_Allocator__box allocator,
                                                                                               size_t length);
void kit_array_Array_db51f4a3b554b90e9cb6c3c3__blit(struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3 * __this,
                                                    struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3 * other,
                                                    size_t start,
                                                    size_t length);
struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3 kit_array_Array_db51f4a3b554b90e9cb6c3c3__copy(struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3 * __this,
                                                                                                struct kit_mem_Allocator__box allocator);
void kit_array_Array_db51f4a3b554b90e9cb6c3c3__free(struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3 * __this,
                                                    struct kit_mem_Allocator__box allocator);

struct kit_slice_Slice__245c01af2be1c62453ba052f kit_array_Array_245c01af2be1c62453ba052f__new(struct kit_mem_Allocator__box allocator,
                                                                                               size_t length);
char * kit_common_CString__copy(char * * __this,
                                struct kit_mem_Allocator__box allocator);
_Bool kit_common_CString__startsWith(char * * __this,
                                     char * other);
_Bool kit_common_CString__endsWith(char * * __this, char * other);
_Bool kit_common_CString__eq(char * * __this, char * other);

char * kit_common_CString__alloc(struct kit_mem_Allocator__box allocator,
                                 size_t chars);
void * kit_io_Writable_84558aa4a52e53199fd20a2b__ptr(void * __vthis);
size_t kit_io_Writable_84558aa4a52e53199fd20a2b__size(void * __vthis);
struct kit_io_Writable__vtable kit_io_Writable__84558aa4a52e53199fd20a2b;
int kit_map_Hashable_00ece7b11dd99d06a92da4ba__hash(void * __vthis);
struct kit_map_Hashable__vtable kit_map_Hashable__00ece7b11dd99d06a92da4ba;
int kit_map_Hashable_245c01af2be1c62453ba052f__hash(void * __vthis);
struct kit_map_Hashable__vtable kit_map_Hashable__245c01af2be1c62453ba052f;
int kit_map_Hashable_2a867e0193ff634180614473__hash(void * __vthis);
struct kit_map_Hashable__vtable kit_map_Hashable__2a867e0193ff634180614473;
int kit_map_Hashable_84558aa4a52e53199fd20a2b__hash(void * __vthis);
struct kit_map_Hashable__vtable kit_map_Hashable__84558aa4a52e53199fd20a2b;
int kit_map_Hashable_a8e36feebcdf611d5ad0266f__hash(void * __vthis);
struct kit_map_Hashable__vtable kit_map_Hashable__a8e36feebcdf611d5ad0266f;
double kit_math__PI;
void * kit_mem__callocWrapper(size_t n);
struct kit_mem_Allocator__box kit_mem__mallocator;
struct kit_option_Option__b0e8e219aa3cff69af74d1b7 kit_mem_LinearAllocator__alloc(struct kit_mem__LinearAllocator * __this,
                                                                                  size_t n);
void kit_mem_LinearAllocator__reset(struct kit_mem__LinearAllocator * __this);
size_t kit_mem_LinearAllocator__remaining(struct kit_mem__LinearAllocator * __this);
void kit_mem_LinearAllocator__destroy(struct kit_mem__LinearAllocator * __this);
struct kit_mem__LinearAllocator kit_mem_LinearAllocator__new(struct kit_mem_Allocator__box parent,
                                                             size_t capacity);
struct kit_option_Option__b0e8e219aa3cff69af74d1b7 kit_mem_StackAllocator__alloc(struct kit_mem__StackAllocator * __this,
                                                                                 size_t n);
void kit_mem_StackAllocator__free(struct kit_mem__StackAllocator * __this,
                                  void * ptr);
size_t kit_mem_StackAllocator__remaining(struct kit_mem__StackAllocator * __this);
void kit_mem_StackAllocator__destroy(struct kit_mem__StackAllocator * __this);
struct kit_mem__StackAllocator kit_mem_StackAllocator__new(struct kit_mem_Allocator__box parent,
                                                           size_t capacity);
void * kit_mem_Allocator_0c47d7e6ba82e05c2d931be3__alloc(void * __vthis,
                                                         size_t s);
void kit_mem_Allocator_0c47d7e6ba82e05c2d931be3__free(void * __vthis,
                                                      void * p);
void * kit_mem_Allocator_0c47d7e6ba82e05c2d931be3__calloc(void * __vthis,
                                                          size_t n);
struct kit_mem_Allocator__vtable kit_mem_Allocator__0c47d7e6ba82e05c2d931be3;
void * kit_mem_Allocator_4221090da42112d334709b60__alloc(void * __vthis,
                                                         size_t s);
void kit_mem_Allocator_4221090da42112d334709b60__free(void * __vthis,
                                                      void * p);
void * kit_mem_Allocator_4221090da42112d334709b60__calloc(void * __vthis,
                                                          size_t n);
struct kit_mem_Allocator__vtable kit_mem_Allocator__4221090da42112d334709b60;
void * kit_mem_Allocator_6381ed4a392eb3039656f126__alloc(void * __vthis,
                                                         size_t n);
void kit_mem_Allocator_6381ed4a392eb3039656f126__free(void * __vthis,
                                                      void * ptr);
void * kit_mem_Allocator_6381ed4a392eb3039656f126__calloc(void * __vthis,
                                                          size_t n);
struct kit_mem_Allocator__vtable kit_mem_Allocator__6381ed4a392eb3039656f126;
char kit_numeric_Char__maxValue();
char kit_numeric_Char__capitalize(char * __this);

char kit_numeric_Char__minValue();
float kit_numeric_Float_b55baf3288b35f4f8a65e193__maxValue();
double kit_numeric_Float_b1a3e32904dae9ff4b710d1e__minValue();
double kit_numeric_Float_b1a3e32904dae9ff4b710d1e__maxValue();


float kit_numeric_Float_b55baf3288b35f4f8a65e193__minValue();
int16_t kit_numeric_Int_722b912b97b1be76f6a102d1__maxValue();
int8_t kit_numeric_Int_86c58b068774952a418d469c__minValue();
int8_t kit_numeric_Int_86c58b068774952a418d469c__maxValue();
int64_t kit_numeric_Int_b1a3e32904dae9ff4b710d1e__minValue();
int64_t kit_numeric_Int_b1a3e32904dae9ff4b710d1e__maxValue();
int32_t kit_numeric_Int_b55baf3288b35f4f8a65e193__minValue();
int32_t kit_numeric_Int_b55baf3288b35f4f8a65e193__maxValue();
int kit_numeric_Int_d0a87271a40bebf0cd626354__minValue();
int kit_numeric_Int_d0a87271a40bebf0cd626354__maxValue();





int16_t kit_numeric_Int_722b912b97b1be76f6a102d1__minValue();
size_t kit_numeric_Size__maxValue();

size_t kit_numeric_Size__minValue();
uint32_t kit_numeric_Uint_b55baf3288b35f4f8a65e193__maxValue();
uint64_t kit_numeric_Uint_b1a3e32904dae9ff4b710d1e__minValue();
uint64_t kit_numeric_Uint_b1a3e32904dae9ff4b710d1e__maxValue();
unsigned int kit_numeric_Uint_d0a87271a40bebf0cd626354__minValue();
unsigned int kit_numeric_Uint_d0a87271a40bebf0cd626354__maxValue();
uint8_t kit_numeric_Uint_86c58b068774952a418d469c__minValue();
uint8_t kit_numeric_Uint_86c58b068774952a418d469c__maxValue();
uint16_t kit_numeric_Uint_722b912b97b1be76f6a102d1__minValue();
uint16_t kit_numeric_Uint_722b912b97b1be76f6a102d1__maxValue();





uint32_t kit_numeric_Uint_b55baf3288b35f4f8a65e193__minValue();
_Bool kit_option_Option_db51f4a3b554b90e9cb6c3c3__isNone(struct kit_option_Option__db51f4a3b554b90e9cb6c3c3 * __this);
uint8_t kit_option_Option_db51f4a3b554b90e9cb6c3c3__unwrap(struct kit_option_Option__db51f4a3b554b90e9cb6c3c3 * __this);
uint8_t kit_option_Option_db51f4a3b554b90e9cb6c3c3__or(struct kit_option_Option__db51f4a3b554b90e9cb6c3c3 * __this,
                                                       uint8_t other);
_Bool kit_option_Option_245c01af2be1c62453ba052f__isSome(struct kit_option_Option__245c01af2be1c62453ba052f * __this);
_Bool kit_option_Option_245c01af2be1c62453ba052f__isNone(struct kit_option_Option__245c01af2be1c62453ba052f * __this);
char kit_option_Option_245c01af2be1c62453ba052f__unwrap(struct kit_option_Option__245c01af2be1c62453ba052f * __this);
char kit_option_Option_245c01af2be1c62453ba052f__or(struct kit_option_Option__245c01af2be1c62453ba052f * __this,
                                                    char other);
_Bool kit_option_Option_b0e8e219aa3cff69af74d1b7__isSome(struct kit_option_Option__b0e8e219aa3cff69af74d1b7 * __this);
_Bool kit_option_Option_b0e8e219aa3cff69af74d1b7__isNone(struct kit_option_Option__b0e8e219aa3cff69af74d1b7 * __this);
void * kit_option_Option_b0e8e219aa3cff69af74d1b7__unwrap(struct kit_option_Option__b0e8e219aa3cff69af74d1b7 * __this);
void * kit_option_Option_b0e8e219aa3cff69af74d1b7__or(struct kit_option_Option__b0e8e219aa3cff69af74d1b7 * __this,
                                                      void * other);
_Bool kit_option_Option_db51f4a3b554b90e9cb6c3c3__isSome(struct kit_option_Option__db51f4a3b554b90e9cb6c3c3 * __this);
double kit_random__random();
void kit_random__seed(unsigned int seed);
int kit_random__randomRange(int min, int max);
void kit_slice_Slice_db51f4a3b554b90e9cb6c3c3__clear(struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3 * __this);
char * kit_slice_Slice_245c01af2be1c62453ba052f__ref(struct kit_slice_Slice__245c01af2be1c62453ba052f * __this);
void kit_slice_Slice_245c01af2be1c62453ba052f__clear(struct kit_slice_Slice__245c01af2be1c62453ba052f * __this);
char * * kit_slice_Slice_84558aa4a52e53199fd20a2b__ref(struct kit_slice_Slice__84558aa4a52e53199fd20a2b * __this);
void kit_slice_Slice_84558aa4a52e53199fd20a2b__clear(struct kit_slice_Slice__84558aa4a52e53199fd20a2b * __this);
uint8_t * kit_slice_Slice_db51f4a3b554b90e9cb6c3c3__ref(struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3 * __this);
_Bool kit_string_String__compare(struct kit_slice_Slice__245c01af2be1c62453ba052f * __this,
                                 struct kit_slice_Slice__245c01af2be1c62453ba052f other);

struct kit_slice_Slice__245c01af2be1c62453ba052f kit_string_String__fromCString(struct kit_mem_Allocator__box allocator,
                                                                                char * source);
void kit_string_StringBuffer__add(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this,
                                  char * s);
struct kit_slice_Slice__245c01af2be1c62453ba052f kit_string_StringBuffer__toString(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this);

struct kit_vector_Vector__245c01af2be1c62453ba052f kit_string_StringBuffer__new(struct kit_mem_Allocator__box allocator,
                                                                                size_t capacity);
void kit_utils__panic(const char * msg, ...) __attribute__((noreturn));
void kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__free(struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 * __this);
uint8_t kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__push(struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 * __this,
                                                         uint8_t value);
struct kit_option_Option__db51f4a3b554b90e9cb6c3c3 kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__pop(struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 * __this);
uint8_t * kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__grow(struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 * __this);
struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__concat(struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 * __this,
                                                                                                      struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 other);
void kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__clear(struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 * __this);
void kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__ensureSize(struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 * __this,
                                                            size_t n);
uint8_t * kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__ref(struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 * __this);
struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3 kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__slice(struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 * __this);
uint8_t kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__removeAt(struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 * __this,
                                                             int i);
struct kit_vector_Vector__245c01af2be1c62453ba052f kit_vector_Vector_245c01af2be1c62453ba052f__new(struct kit_mem_Allocator__box allocator,
                                                                                                   size_t capacity);
void kit_vector_Vector_245c01af2be1c62453ba052f__free(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this);
char kit_vector_Vector_245c01af2be1c62453ba052f__push(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this,
                                                      char value);
struct kit_option_Option__245c01af2be1c62453ba052f kit_vector_Vector_245c01af2be1c62453ba052f__pop(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this);
char * kit_vector_Vector_245c01af2be1c62453ba052f__grow(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this);
struct kit_vector_Vector__245c01af2be1c62453ba052f kit_vector_Vector_245c01af2be1c62453ba052f__concat(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this,
                                                                                                      struct kit_vector_Vector__245c01af2be1c62453ba052f other);
void kit_vector_Vector_245c01af2be1c62453ba052f__clear(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this);
void kit_vector_Vector_245c01af2be1c62453ba052f__ensureSize(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this,
                                                            size_t n);
char * kit_vector_Vector_245c01af2be1c62453ba052f__ref(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this);
struct kit_slice_Slice__245c01af2be1c62453ba052f kit_vector_Vector_245c01af2be1c62453ba052f__slice(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this);
char kit_vector_Vector_245c01af2be1c62453ba052f__removeAt(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this,
                                                          int i);
struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__new(struct kit_mem_Allocator__box allocator,
                                                                                                   size_t capacity);
void * kitten_stringbuilder__strAdd(char * one, char * two);
int kitten_stringbuilder___minSizePreDoubling;
void kitten_stringbuilder__main();
struct kitten_stringbuilder__StringBuilder kitten_stringbuilder_StringBuilder__newFromCopy(struct kitten_stringbuilder__StringBuilder initialize);
struct kitten_stringbuilder__StringBuilder kitten_stringbuilder_StringBuilder__newFromString(char * initialize,
                                                                                             int size);
struct kitten_stringbuilder__StringBuilder kitten_stringbuilder_StringBuilder__newFromCharPtr(char * initialize,
                                                                                              int size);
struct kitten_stringbuilder__StringBuilder kitten_stringbuilder_StringBuilder__newFromCharArray(char initialize[],
                                                                                                int size);
struct kitten_stringbuilder__StringBuilder kitten_stringbuilder_StringBuilder__newFromInt(int initialize,
                                                                                          int size);
struct kitten_stringbuilder__StringBuilder kitten_stringbuilder_StringBuilder__newFromFloat(float initialize,
                                                                                            int size);
struct kitten_stringbuilder__StringBuilder kitten_stringbuilder_StringBuilder__newFromBool(_Bool initialize,
                                                                                           enum kitten_stringbuilder__BoolMode mode,
                                                                                           enum kitten_stringbuilder__BoolCap capitalization,
                                                                                           int size);
void kitten_stringbuilder_StringBuilder__appendString(struct kitten_stringbuilder__StringBuilder * __this,
                                                      char * append);
void kitten_stringbuilder_StringBuilder__appendCharPtr(struct kitten_stringbuilder__StringBuilder * __this,
                                                       char * append,
                                                       int size);
void kitten_stringbuilder_StringBuilder__appendCharArray(struct kitten_stringbuilder__StringBuilder * __this,
                                                         char append[],
                                                         int size);
void kitten_stringbuilder_StringBuilder__appendInt(struct kitten_stringbuilder__StringBuilder * __this,
                                                   int append);
void kitten_stringbuilder_StringBuilder__appendFloat(struct kitten_stringbuilder__StringBuilder * __this,
                                                     float append,
                                                     int size);
void kitten_stringbuilder_StringBuilder__appendBool(struct kitten_stringbuilder__StringBuilder * __this,
                                                    _Bool initialize,
                                                    enum kitten_stringbuilder__BoolMode mode,
                                                    enum kitten_stringbuilder__BoolCap capitalization);
void kitten_stringbuilder_StringBuilder__appendFromCopy(struct kitten_stringbuilder__StringBuilder * __this,
                                                        struct kitten_stringbuilder__StringBuilder initialize);
void kitten_stringbuilder_StringBuilder__printLengthAndAllocated(struct kitten_stringbuilder__StringBuilder * __this);
char * kitten_stringbuilder_StringBuilder__toString(struct kitten_stringbuilder__StringBuilder * __this);
char * kitten_stringbuilder_StringBuilder__returnWithString(struct kitten_stringbuilder__StringBuilder * __this,
                                                            char * append);
char * kitten_stringbuilder_StringBuilder__returnWithCharPtr(struct kitten_stringbuilder__StringBuilder * __this,
                                                             char * append,
                                                             int size);
char * kitten_stringbuilder_StringBuilder__returnWithCharArray(struct kitten_stringbuilder__StringBuilder * __this,
                                                               char append[],
                                                               int size);
char * kitten_stringbuilder_StringBuilder__returnWithInt(struct kitten_stringbuilder__StringBuilder * __this,
                                                         int append);
char * kitten_stringbuilder_StringBuilder__returnWithFloat(struct kitten_stringbuilder__StringBuilder * __this,
                                                           float append,
                                                           int size);
char * kitten_stringbuilder_StringBuilder__returnWithBool(struct kitten_stringbuilder__StringBuilder * __this,
                                                          _Bool initialize,
                                                          enum kitten_stringbuilder__BoolMode mode,
                                                          enum kitten_stringbuilder__BoolCap capitalization);
char * kitten_stringbuilder_StringBuilder__returnWithCopy(struct kitten_stringbuilder__StringBuilder * __this,
                                                          struct kitten_stringbuilder__StringBuilder initialize);
void kitten_stringbuilder_StringBuilder__ensureSpace(struct kitten_stringbuilder__StringBuilder * __this,
                                                     int addLen);
struct kitten_stringbuilder__StringBuilder kitten_stringbuilder_StringBuilder__new(int size);
int32_t kitten_xs_Rounding__xs_CeilToInt(double val, double dme);
int32_t kitten_xs_Rounding__xs_FloorToInt(double val, double dme);
int32_t kitten_xs_Rounding__xs_ToInt(double val, double dme);
int32_t kitten_xs_Rounding__xs_CRoundToInt(double val, double dmr);
int32_t kitten_xs_Rounding__xs_ConvertToFixed(double val,
                                              int digits);
int kitten_xs_Rounding__xs_doubleisnegative(int a);
int32_t kitten_xs_Rounding__xs_doublecopysgn(int a, int b);
float kitten_xs_Rounding__xs_ClampFloat(float a, float b, float c);
float kitten_xs_Rounding__xs_MaxFloat(float a, float b);
float kitten_xs_Rounding__xs_MinFloat(float a, float b);
int kitten_xs_Rounding__xs_ClampInt(int a, int b, int c);
int kitten_xs_Rounding__xs_MaxInt(int a, int b);
int kitten_xs_Rounding__xs_MinInt(int a, int b);
char * kitten_xs_Rounding__endiannessString();
void kitten_xs_Rounding__checkEndianness();
double kitten_xs_Rounding__xs_doublemagicroundeps;
double kitten_xs_Rounding__xs_doublemagicdelta;
double kitten_xs_Rounding__xs_doublemagic;
int kitten_xs_Rounding__xs_iman;
int kitten_xs_Rounding__xs_iexp;
enum kitten_xs_Rounding__Endianness kitten_xs_Rounding__endianness;
union kitten_xs_Rounding__EndianTest kitten_xs_Rounding__e;
int32_t kitten_xs_Rounding__xs_RoundToInt(double val);

static void __kit_init()
{
    kitten_xs_Rounding__xs_doublemagicroundeps = 0.5f - kitten_xs_Rounding__xs_doublemagicdelta;
    kitten_xs_Rounding__xs_doublemagicdelta = 1.5f * pow((double) 10,
                                                         (double) -8);
    kitten_xs_Rounding__e = (union kitten_xs_Rounding__EndianTest) {.i = (int) 16909060};
}
