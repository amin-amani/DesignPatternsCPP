
Why Use This Instead of #ifdef?
✅ Works in both #if expressions and normal macro expansions
✅ Safer than #ifdef because it avoids issues with undefined macros
✅ Can be used inside expressions (if (__is_defined(CONFIG_BOOGER)))
✅ Ensures consistent behavior between C and C++


```
#define __ARG_PLACEHOLDER_1 0,
#define __take_second_arg(__ignored, val, ...) val

/*
 * The use of "&&" / "||" is limited in certain expressions.
 * The following enable to calculate "and" / "or" with macro expansion only.
 */
#define __and(x, y)			___and(x, y)
#define ___and(x, y)			____and(__ARG_PLACEHOLDER_##x, y)
#define ____and(arg1_or_junk, y)	__take_second_arg(arg1_or_junk y, 0)

 */
#define __is_defined(x)			___is_defined(x)
#define ___is_defined(val)		____is_defined(__ARG_PLACEHOLDER_##val)
#define ____is_defined(arg1_or_junk)	__take_second_arg(arg1_or_junk 1, 0)
```
linux\include\linux\kconfig.h
