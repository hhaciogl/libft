#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <ctype.h>
#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define RESET "\033[0m"
#define DEBUG 1


static void test(int condition, const char *msg)
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
////////////ft_memset//////////////////
static void test_case_ft_memset_A_4_times(void)
{
	char result[] = "hello";
	char expected[] = "AAAAo";
	ft_memset(result, 'A', 4);
	test(strcmp(result,expected) == 0, "ft_memset(result, 'A', 4) should return AAAAo");
	if(DEBUG)
		printf(" result: %s\n expected:%s\n", result, expected);
}
static void test_suite_ft_memset(void)
{
	puts("");
	printf("%s:\n", __func__);
 	puts("------------------");
	test_case_ft_memset_A_4_times();
}
////////////ft_bzero///////////////////
static void test_case_ft_bzero_hello_5(void)
{
	char result[] = "hello";
	ft_bzero(&result, 5);
	char expected[] = "";
	test(strcmp(result, expected) == 0, "ft_bzero(\"hello\", 5) should make hello ''");
	if(DEBUG)
		printf(" result: [%s]\n expected:[%s]\n", result, expected);
}
static void test_suite_ft_bzero(void)
{
	puts("");
	printf("%s:\n", __func__);
 	puts("------------------");
	test_case_ft_bzero_hello_5();
}
////////////ft_memcpy///////////////
static void test_case_ft_memcpy_empty_hello_6(void)
{
	char result[6];
	char *hello = "hello";
	ft_memcpy(result, hello, 6);
	char *expected = "hello";
	test(strcmp(result, hello) == 0, "ft_memcpy([], hello, 6) should fill with hello");
	if(DEBUG)
		printf(" result: [%s]\n expected:[%s]\n", result, expected);
}

static void test_suite_ft_memcpy(void)
{
	puts("");
	printf("%s:\n", __func__);
 	puts("------------------");
	test_case_ft_memcpy_empty_hello_6();
}
//////////ft_memmove////////////////
static void test_case_ft_memmove_non_overlap(void)
{
	char result[6];
	ft_memmove(result, "hello", 6);
	char *expected = "hello";
	test(strcmp(result, expected) == 0, "ft_memmove([], \"hello\", 6) should fill [] with hello]");
	if(DEBUG)
		printf(" result: %s\n expected:%s\n", result, expected);
}
static void test_case_ft_memmove_overlap(void)
{
	char result[14] = "Hello, World!";
	ft_memmove(result+4, result+7, 6);
	char *expected = "HellWorld!ld!";
	test(strcmp(result, expected) == 0, "ft_memmove(\"o, World!\", \"World!\", 6) should change result to World!");
	if(DEBUG)
		printf(" result: %s\n expected:%s\n", result, expected);

}
static void test_suite_ft_memmove(void)
{
	puts("");
	printf("%s:\n", __func__);
 	puts("------------------");
	test_case_ft_memmove_non_overlap();
	test_case_ft_memmove_overlap();
}
///////////ft_strlcpy/////////////
static void test_case_ft_strlcpy_empty_hello_6(void)
{
	char result[10];
	size_t returned = ft_strlcpy(result, "hello", 6);
	char *expected = "hello";
	test(strcmp(result, expected)==0 && returned == 5 , "ft_strlcpy([], \"hello\", 6) should return 5");
	if(DEBUG)
		printf(" result: %s\n expected:%s\n returned:%zu\n", result, expected, returned);
}
static void test_case_ft_strlcpy_abc_hello_0(void)
{
    char result[10] = "abc";
	size_t returned = ft_strlcpy(result, "hello", 0);
	char *expected = "abc";
	test(strcmp(result, expected)==0 && returned == 5 , "ft_strlcpy(abc, \"hello\", 0) should return 5");
	if(DEBUG)
		printf(" result: %s\n expected:%s\n returned:%zu\n", result, expected, returned);
}
static void test_suite_ft_strlcpy(void)
{
	puts("");
	printf("%s:\n", __func__);
 	puts("------------------");
	test_case_ft_strlcpy_empty_hello_6();
    test_case_ft_strlcpy_abc_hello_0();
}
//////////////ft_strlcat////////////////
static void test_case_ft_strlcat_ab_c_4(void)
{
	// params
	char p1[44] = "ab";
	char p2[] = "c";
	size_t p3 = 5;
	char ep1[44] = "ab";
	char ep2[] = "c";
	size_t ep3 = 5;

	size_t returns = ft_strlcat(p1, p2, p3);
	size_t expected_returns = strlcat(ep1, ep2, ep3);

	test(returns == expected_returns && strcmp(p1, ep1) == 0, __func__);
	if(DEBUG)
		printf("return: %li\nexpected: %li\n", returns, expected_returns);
		printf(" p1: %s\nep1: %s\n", p1, ep1);
		printf(" p2: %s\nep2: %s\n", p2, ep2);
}
static void test_case_ft_strlcat_ab_c_3(void)
{
	// params
	char p1[4] = "ab";
	char p2[] = "c";
	size_t p3 = 3;
	char ep1[4] = "ab";
	char ep2[] = "c";
	size_t ep3 = 3;

	size_t returns = ft_strlcat(p1, p2, p3);
	size_t expected_returns = strlcat(ep1, ep2, ep3);

	test(returns == expected_returns && strcmp(p1, ep1) == 0, __func__);
	if(DEBUG)
		printf("return: %li\nexpected: %li\n", returns, expected_returns);
		printf(" p1: %s\nep1: %s\n", p1, ep1);
		printf(" p2: %s\nep2: %s\n", p2, ep2);
}
static void test_case_ft_strlcat_ab_c_2(void)
{
	// params
	char p1[4] = "ab";
	char p2[] = "c";
	size_t p3 = 2;
	char ep1[4] = "ab";
	char ep2[] = "c";
	size_t ep3 = 2;

	size_t returns = ft_strlcat(p1, p2, p3);
	size_t expected_returns = strlcat(ep1, ep2, ep3);

	test(returns == expected_returns && strcmp(p1, ep1) == 0, __func__);
	if(DEBUG)
		printf("return: %li\nexpected: %li\n", returns, expected_returns);
		printf(" p1: %s\nep1: %s\n", p1, ep1);
		printf(" p2: %s\nep2: %s\n", p2, ep2);	
}

static void test_case_ft_strlcat_ab_c_1(void)
{
	// params
	char p1[4] = "ab";
	char p2[] = "c";
	size_t p3 = 1;
	char ep1[4] = "ab";
	char ep2[] = "c";
	size_t ep3 = 1;

	size_t returns = ft_strlcat(p1, p2, p3);
	size_t expected_returns = strlcat(ep1, ep2, ep3);

	test(returns == expected_returns && strcmp(p1, ep1) == 0, __func__);
	if(DEBUG)
		printf("return: %li\nexpected: %li\n", returns, expected_returns);
		printf(" p1: %s\nep1: %s\n", p1, ep1);
		printf(" p2: %s\nep2: %s\n", p2, ep2);	
}
static void test_case_ft_strlcat_ab_c_0(void)
{
	// params
	char p1[4] = "ab";
	char p2[] = "c";
	size_t p3 = 0;
	char ep1[4] = "ab";
	char ep2[] = "c";
	size_t ep3 = 0;

	size_t returns = ft_strlcat(p1, p2, p3);
	size_t expected_returns = strlcat(ep1, ep2, ep3);

	test(returns == expected_returns && strcmp(p1, ep1) == 0, __func__);
	if(DEBUG)
		printf("return: %li\nexpected: %li\n", returns, expected_returns);
		printf(" p1: %s\nep1: %s\n", p1, ep1);
		printf(" p2: %s\nep2: %s\n", p2, ep2);	
}
static void test_suite_ft_strlcat(void)
{
	puts("");
	printf("%s:\n", __func__);
    puts("------------------");
	test_case_ft_strlcat_ab_c_4();
	test_case_ft_strlcat_ab_c_3();
	test_case_ft_strlcat_ab_c_2();
	test_case_ft_strlcat_ab_c_1();
	test_case_ft_strlcat_ab_c_0();
}
////////////ft_toupper/////////////
static void test_case_ft_toupper_a(void)
{
	// params
	char p1 = 'a';

	char ep1 = 'a';


	int returns = ft_toupper(p1);
	int expected_returns = toupper(ep1);

	test(returns == expected_returns && p1 == ep1, __func__);
	if(DEBUG)
		printf("return: %i\nexpected: %i\n", returns, expected_returns);
		printf(" p1: %c\nep1: %c\n", p1, ep1);
}
static void test_case_ft_toupper_A(void)
{
	// params
	char p1 = 'A';

	char ep1 = 'A';


	int returns = ft_toupper(p1);
	int expected_returns = toupper(ep1);

	test(returns == expected_returns && p1 == ep1, __func__);
	if(DEBUG)
		printf("return: %i\nexpected: %i\n", returns, expected_returns);
		printf(" p1: %c\nep1: %c\n", p1, ep1);
}


static void test_suite_ft_toupper(void)
{
	puts("");
	printf("%s:\n", __func__);
    puts("------------------");
	test_case_ft_toupper_a();
	test_case_ft_toupper_A();
}
////////////ft_tolower////////////
static void test_case_ft_tolower_Z(void)
{
	// params
	char p1 = 'Z';

	char ep1 = 'Z';


	int returns = ft_tolower(p1);
	int expected_returns = tolower(ep1);

	test(returns == expected_returns && p1 == ep1, __func__);
	if(DEBUG)
		printf("return: %i\nexpected: %i\n", returns, expected_returns);
		printf(" p1: %c\nep1: %c\n", p1, ep1);
}

static void test_case_ft_tolower_z(void)
{
	// params
	char p1 = 'z';

	char ep1 = 'z';


	int returns = ft_tolower(p1);
	int expected_returns = tolower(ep1);

	test(returns == expected_returns && p1 == ep1, __func__);
	if(DEBUG)
		printf("return: %i\nexpected: %i\n", returns, expected_returns);
		printf(" p1: %c\nep1: %c\n", p1, ep1);
}

static void test_suite_ft_tolower(void)
{
	puts("");
	printf("%s:\n", __func__);
    puts("------------------");
	test_case_ft_tolower_Z();
	test_case_ft_tolower_z();
}
///////// ft_strchr /////////////
static void test_case_ft_strchr_abc_c(void)
{
	// params
	char ft_p1[4] = "abc";
	char ft_p2 = 'c';


	char _p1[4] = "abc";
	char _p2 = 'c';


	char	*ft_returns = ft_strchr(ft_p1, ft_p2);
	char	*_returns = strchr(_p1, _p2);

	test(strcmp(ft_returns, _returns) == 0 && strcmp(ft_p1, _p1) == 0, __func__);
	if(DEBUG)
		printf("ft_return: %s\n _returns: %s\n", ft_returns, _returns);
		printf(" ft_p1: %s\n   _p1: %s\n", ft_p1, _p1);
		printf(" ft_p2: %c\n   _p2: %c\n", ft_p2, _p2);
}

static void test_case_ft_strchr_12345_1(void)
{
		// params
	char ft_p1[] = "12345";
	char ft_p2 = '1';


	char _p1[] = "12345";
	char _p2 = '1';


	char	*ft_returns = ft_strchr(ft_p1, ft_p2);
	char	*_returns = strchr(_p1, _p2);

	test(strcmp(ft_returns, _returns) == 0 && strcmp(ft_p1, _p1) == 0, __func__);
	if(DEBUG)
		printf("ft_return: %s\n _returns: %s\n", ft_returns, _returns);
		printf(" ft_p1: %s\n   _p1: %s\n", ft_p1, _p1);
		printf(" ft_p2: %c\n   _p2: %c\n", ft_p2, _p2);
}

static void test_case_ft_strchr_empty_null(void)
{
		// params
	char ft_p1[1] = "";
	char ft_p2 = 0;


	char _p1[1] = "";
	char _p2 = 0;

	char	*ft_returns = ft_strchr(ft_p1, ft_p2);
	char	*_returns = strchr(_p1, _p2);

	test(strcmp(ft_returns, _returns) == 0 && strcmp(ft_p1, _p1) == 0, __func__);
	if(DEBUG)
		printf("ft_return: %s\n _returns: %s\n", ft_returns, _returns);
		printf(" ft_p1: %s\n   _p1: %s\n", ft_p1, _p1);
		printf(" ft_p2: %c\n   _p2: %c\n", ft_p2, _p2);
}

static void test_case_ft_strchr_null_null(void)
{
	test(0, __func__);	
}

static void test_suite_ft_strchr(void)
{
	puts("");
	printf("%s:\n", __func__);
    puts("------------------");
	test_case_ft_strchr_abc_c();
	test_case_ft_strchr_12345_1();
	test_case_ft_strchr_empty_null();
	test_case_ft_strchr_null_null();
}
//////////////////ft_chrrstr//////////////////
static void test_case_ft_strrchr_abc_c(void)
{
	// params
	char ft_p1[4] = "abc";
	char ft_p2 = 'c';


	char _p1[4] = "abc";
	char _p2 = 'c';


	char  *ft_returns = ft_strrchr(ft_p1, ft_p2);
	char *_returns = strrchr(_p1, _p2);

	test(*ft_returns == *_returns, __func__);
	if(DEBUG)
		printf("ft_return: %s\nexpected: %s\n", ft_returns, _returns);
		printf(" ft_p1: %s\n_p1: %s\n", ft_p1, _p1);
		printf(" ft_p2: %c\n_p2: %c\n", ft_p2, _p2);
}

static void test_suite_ft_strrchr(void)
{
	puts("");
	printf("%s:\n", __func__);
    puts("------------------");
	test_case_ft_strrchr_abc_c();
}




//examples
// static void test_case_ft_strchr_abc_c(void)
// {
// 	// params
// 	char ft_p1[4] = "abc";
// 	char ft_p2[] = "c";


// 	char _p1[4] = "abc";
// 	char _p2[] = "c";


// 	char  *ft_returns = ft_strchr(ft_p1, ft_p2);
// 	char _returns = strchr(_p1, _p2);

// 	test(ft_returns == _returns && strcmp(ft_p1, _p1) == 0, __func__);
// 	if(DEBUG)
// 		printf("ft_return: %s\nexpected: %li\n", ft_returns, _returns);
// 		printf(" ft_p1: %s\n_p1: %s\n", ft_p1, _p1);
// 		printf(" ft_p2: %s\n_p2: %s\n", ft_p2, _p2);
// }

// static void test_suite_ft_strchr(void)
// {
// 	puts("");
// 	printf("%s:\n", __func__);
//     puts("------------------");
// 	test_case_ft_strchr_abc_c();
// }

int main(void)
{
	test_suite_ft_isalpha();
	test_suite_ft_isdigit();
    test_suite_ft_isalnum();
    test_suite_ft_isascii();
    test_suite_ft_isprint();
	test_suite_ft_strlen();
	test_suite_ft_memset();
	test_suite_ft_bzero();
	test_suite_ft_memcpy();
	test_suite_ft_memmove();
	test_suite_ft_strlcpy();
    test_suite_ft_strlcat();
	test_suite_ft_toupper();
	test_suite_ft_tolower();
	test_suite_ft_strchr();
	test_suite_ft_strrchr();

	puts("\n\n\n---TESTING FINISED---");
	return 0;//
}