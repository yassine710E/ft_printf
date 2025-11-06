#include <stdio.h>
#include <limits.h>
#include "libftprintf.h"

int main(void)
{
    int ret1, ret2;

    printf("=========== TESTS FOR ft_printf ===========\n\n");

    /* %c test */
    printf("---- %%c ----\n");
    ret1 = ft_printf("My char: %c\n", 'A');
    ret2 = printf("My char: %c\n", 'A');
    printf("ft_printf returned: %d | printf returned: %d\n\n", ret1, ret2);

    /* %s test */
    printf("---- %%s ----\n");
    ret1 = ft_printf("My string: %s\n", "Hello");
    ret2 = printf("My string: %s\n", "Hello");
    printf("ft_printf returned: %d | printf returned: %d\n\n", ret1, ret2);

    /* NULL string test */
    printf("---- %%s with NULL ----\n");
    ret1 = ft_printf("NULL string: %s\n", NULL);
    ret2 = printf("NULL string: %s\n", NULL);
    printf("ft_printf returned: %d | printf returned: %d\n\n", ret1, ret2);

    /* %p test */
    printf("---- %%p ----\n");
    void *ptr = (void *)0x1234abcd;
    ret1 = ft_printf("Pointer: %p\n", ptr);
    ret2 = printf("Pointer: %p\n", ptr);
    printf("ft_printf returned: %d | printf returned: %d\n\n", ret1, ret2);

    /* %p with NULL pointer */
    printf("---- %%p NULL ----\n");
    ret1 = ft_printf("Pointer: %p\n", NULL);
    ret2 = printf("Pointer: %p\n", NULL);
    printf("ft_printf returned: %d | printf returned: %d\n\n", ret1, ret2);

    /* %d test */
    printf("---- %%d ----\n");
    ret1 = ft_printf("Decimal: %d\n", -12345);
    ret2 = printf("Decimal: %d\n", -12345);
    printf("ft_printf returned: %d | printf returned: %d\n\n", ret1, ret2);

    /* %i test */
    printf("---- %%i ----\n");
    ret1 = ft_printf("Integer: %i\n", 67890);
    ret2 = printf("Integer: %i\n", 67890);
    printf("ft_printf returned: %d | printf returned: %d\n\n", ret1, ret2);

    /* %u test */
    printf("---- %%u ----\n");
    ret1 = ft_printf("Unsigned: %u\n", 4294967295u);
    ret2 = printf("Unsigned: %u\n", 4294967295u);
    printf("ft_printf returned: %d | printf returned: %d\n\n", ret1, ret2);

    /* %x test */
    printf("---- %%x ----\n");
    ret1 = ft_printf("Hex lower: %x\n", 305441741);
    ret2 = printf("Hex lower: %x\n", 305441741);
    printf("ft_printf returned: %d | printf returned: %d\n\n", ret1, ret2);

    /* %X test */
    printf("---- %%X ----\n");
    ret1 = ft_printf("Hex upper: %X\n", 305441741);
    ret2 = printf("Hex upper: %X\n", 305441741);
    printf("ft_printf returned: %d | printf returned: %d\n\n", ret1, ret2);

    /* %% test */
    printf("---- %%%% ----\n");
    ret1 = ft_printf("Percent: %%\n");
    ret2 = printf("Percent: %%\n");
    printf("ft_printf returned: %d | printf returned: %d\n\n", ret1, ret2);

    /* Mixed complex test */
    printf("---- Mixed complicated ----\n");
    ret1 = ft_printf("Char:%c | Str:%s | Ptr:%p | D:%d | I:%i | U:%u | X:%x | %%\n",
                     'Z', "Test", &ret1, INT_MIN, INT_MAX, UINT_MAX, 255);
    ret2 = printf("Char:%c | Str:%s | Ptr:%p | D:%d | I:%i | U:%u | X:%x | %%\n",
                  'Z', "Test", &ret1, INT_MIN, INT_MAX, UINT_MAX, 255);
    printf("ft_printf returned: %d | printf returned: %d\n\n", ret1, ret2);

    return (0);
}
