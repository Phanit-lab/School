// Find the smaller of two numbers
#define MIN(a, b) ((a) < (b) ? (a) : (b))

// Find the larger of two numbers
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Raise a number to the second power
#define SQUARE(x) ((x) * (x))

// Raise a number to a power (exponentiation)
#define POWER(base, exp) ({ \
    typeof(base) result = 1; \
    for (typeof(exp) i = 0; i < (exp); i++) { \
        result *= (base); \
    } \
    result; \
})

// Check whether a given number is even
#define IS_EVEN(x) ((x) % 2 == 0)

// Check whether a given number is odd
#define IS_ODD(x) ((x) % 2 != 0)
