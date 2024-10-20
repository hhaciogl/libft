#include "libft.h"
#include <stdio.h>
#include <stddef.h>
#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define RESET "\033[0m"
#define DEBUG 1


static void test(int condition, char *msg)
{
	if (condition)
		printf(GREEN "** [OK] %s \n" RESET, msg);
    else
        printf(RED "xx FAIL %s: \n" RESET, msg);
}
/////////////ft_isalpha////////////////
static void test_case_ft_isalpha_a(void)
{
	int result = ft_isalpha('a');
	int expected = 1;
	test(ft_isalpha('a') != 0, "ft_isalpha('a') should not return 0");
	if(DEBUG)
		printf(" result: %i\n expected:%i\n", result, expected);
}
static void test_case_ft_isalpha_4(void)
{
	int result = ft_isalpha('4');
	int expected = 0;
	test(ft_isalpha('4') == 0, "ft_isalpha('4') should return 0");
	if(DEBUG)
		printf(" result: %i\n expected:%i\n", result, expected);
}
static void test_suite_ft_isalpha(void)
{
    puts("");
	printf("%s:\n", __func__);
    puts("------------------");
	test_case_ft_isalpha_a();
	test_case_ft_isalpha_4();
	
}
////////////ft_isdigit/////////////////
static void test_case_ft_isdigit_8(void)
{
	int result = ft_isdigit('8');
	int expected = 1;
	test(ft_isdigit('8') != 0, "ft_isdigit('8') should not return 0");
	if(DEBUG)
		printf(" result: %i\n expected:%i\n", result, expected);
}
static void test_case_ft_isdigit_a(void)
{
	int result = ft_isdigit('a');
	int expected = 0;
	test(ft_isdigit('a') == 0, "ft_isdigit('a') should return 0");
	if(DEBUG)
		printf(" result: %i\n expected:%i\n", result, expected);
	
}
static void test_suite_ft_isdigit(void)
{
	puts("");
	printf("%s:\n", __func__);
    puts("------------------");
	test_case_ft_isdigit_8();
	test_case_ft_isdigit_a();

}
////////////ft_isalnum/////////////////
static void test_case_ft_isalnum_forward_slash(void)
{
	int result = ft_isalnum('/');
	int expected = 0;
	test(ft_isalnum('/') == 0, "ft_isalnum('/') should return 0");
	if(DEBUG)
		printf(" result: %i\n expected:%i\n", result, expected);
}
static void test_suite_ft_isalnum(void)
{
    puts("");
	printf("%s:\n", __func__);
    puts("------------------");
    test_case_ft_isalnum_forward_slash();
    
}
//////////ft_isascii/////////////////////
static void test_case_ft_isascii_128(void)
{
	int result = ft_isascii(128);
	int expected = 0;
	test(ft_isascii(128) == 0, "ft_isascii(128) should return 0");
	if(DEBUG)
		printf(" result: %i\n expected:%i\n", result, expected);
}
static void test_case_ft_isascii_dot(void)
{
	int result = ft_isascii('.');
	int expected = 1;
	test(ft_isascii('.') != 0, "ft_isascii('.') should not return 0");
	if(DEBUG)
		printf(" result: %i\n expected:%i\n", result, expected);
}
static void test_suite_ft_isascii(void)
{
    puts("");
	printf("%s:\n", __func__);
    puts("------------------");
    test_case_ft_isascii_128();
    test_case_ft_isascii_dot();
    
}
////////////ft_isprint/////////////////
static void test_case_ft_isprint_127(void)
{
	int result = ft_isprint(127);
	int expected = 0;
	test(ft_isprint(127) == 0, "ft_isprint(127) should return 0");
	if(DEBUG)
		printf(" result: %i\n expected:%i\n", result, expected);
}
static void test_case_ft_isprint_space(void)
{
	int result = ft_isprint(' ');
	int expected = 1;
	test(ft_isprint(' ') != 0, "ft_isprint(' ') should not return 0");
	if(DEBUG)
		printf(" result: %i\n expected:%i\n", result, expected);
}
static void test_case_ft_isprint_31(void)
{
	int result = ft_isprint(31);
	int expected = 0;
	test(ft_isprint(31) == 0, "ft_isprint(31) should return 0");
	if(DEBUG)
		printf(" result: %i\n expected:%i\n", result, expected);
}
static void test_suite_ft_isprint(void)
{
	puts("");
	printf("%s:\n", __func__);
    puts("------------------");
    test_case_ft_isprint_127();
    test_case_ft_isprint_space();
	test_case_ft_isprint_31();
}
//////////////ft_strlen/////////////
static void test_case_ft_strlen_hello(void)
{
	int result = ft_strlen("hello");
	int expected = 5;
	test(result == expected, "ft_strlen(hello) should return 5");
	if(DEBUG)
		printf(" result: %i\n expected:%i\n", result, expected);
}
static void test_case_ft_strlen_empty(void)
{
	int result = ft_strlen("");
	int expected = 0;
	test(result == expected, "ft_strlen(\"\") should return 0");
	if(DEBUG)
		printf(" result: %i\n expected:%i\n", result, expected);
}
static void test_suite_ft_strlen(void)
{
	puts("");
	printf("%s:\n", __func__);
 	puts("------------------");
	test_case_ft_strlen_hello();
	test_case_ft_strlen_empty();

}
	
// examples
// static void test_case_ft_isalpha_4(void)
// {
// 	int result = ft_isalpha();
// 	int expected = 0;
// 	test(ft_isalpha()== 1, "ft_isalpha(4) should return 0");
// 	if(DEBUG)
// 		printf(" result: %i\n expected:%i\n", result, expected);
// }

// static void test_suite_ft_isalpha(void)
// {
// 	puts("");
//	printf("%s:\n", __func__);
//  puts("------------------");
// 	test_case_ft_isalpha_empty();
// 	test_case_ft_isalpha_4();
// }

int main(void)
{
	test_suite_ft_isalpha();
	test_suite_ft_isdigit();
    test_suite_ft_isalnum();
    test_suite_ft_isascii();
    test_suite_ft_isprint();
	test_suite_ft_strlen();

	puts("\n\n\n---TESTING FINISED---");
	return 0;//
}