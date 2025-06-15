#include <criterion/criterion.h>
#include "../include/fibonacci.h"

Test(fibonacci, test_fibonacci_zero) {
    cr_assert_eq(fibonacci(0), 0);
}

Test(fibonacci, test_fibonacci_one) {
    cr_assert_eq(fibonacci(1), 1);
}

Test(fibonacci, test_fibonacci_five) {
    cr_assert_eq(fibonacci(5), 5);
}

Test(fibonacci, test_fibonacci_ten) {
    cr_assert_eq(fibonacci(10), 55);
}