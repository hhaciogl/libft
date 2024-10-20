#include "libft.h"
#include <stdio.h>
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
	printf("%s:\n", __func__);
	test_case_ft_isalpha_a();
	test_case_ft_isalpha_4();
	
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
// 	printf("%s:\n", __func__);
// 	test_case_ft_isalpha_empty();
// 	test_case_ft_isalpha_4();
// }

int main(void)
{
	test_suite_ft_isalpha();

	puts("\n\n\n---TESTING FINISED---");
	return 0;//
}