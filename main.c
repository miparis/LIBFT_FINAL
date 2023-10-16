#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*
//----------------------------ft_isalpha----------------------
int main ()
{
	printf("Result ft:%d\n", ft_isalpha(NULL));
	printf("Result orig:%d\n", isalpha(NULL));
}

//----------------------------ft_isalpha----------------------
int main ()
{
	printf("Result ft:%d\n", ft_isdigit(NULL));
	printf("Result orig:%d\n", isdigit(NULL));
}

//----------------------------ft_isalnum--------------------
int main()
{
	printf("Result ft:%d\n", ft_isalnum(NULL));
	printf("Result orig:%d\n", ft_isalnum(NULL));
	return 0;
}

//----------------------------ft_isascii--------------------

int main()
{
	printf("Result ft:%d\n", ft_isascii(NULL));
	printf("Result orig:%d\n", isascii(NULL));
	return 0;
}

//----------------------------ft_isprint--------------------

int main()
{
	printf("Result ft:%d\n", ft_isprint(0));
	printf("Result orig:%d\n", isprint(0));
	return 0;
}

//----------------------------ft_strlen--------------------

int	main()
{
	printf("Result ft:%lu\n", ft_strlen("Holaaa"));
	printf("Result orig:%lu\n",strlen("Holaaa"));
}

//----------------------------ft_memset--------------------
int main()
{
	char *str= "45666";
	char *str1 = "45666";

	printf("Before memset: %s\n", str);
	memset(str, 'C', 20*sizeof(char));
	printf("Len of the string: %zu | After memset: %s\n", ft_strlen(str), str);

	printf("Before ft_memset: %s\n", str1);
	ft_memset(str1, 'C', 20*sizeof(char));
	printf("Len of the string: %zu | After ft_memset: %s\n", ft_strlen(str), str1);
	return 0;
}

//----------------------------ft_bzero--------------------

int main()
{
	char *str = "Hola,me llamo Miranda";
	char *str1 = "Hola,me llamo Miranda";

	printf("Before bzero: %s\n", str);
	ft_bzero(str,8);
	printf("After bzero: %s\n", str);

	printf("Before ft_bzero: %s\n", str1);
	ft_bzero(str1,8);
	printf("After ft_bzero: %s\n", str1);
	return 0;
}

//----------------------------ft_memcpy--------------------
int main()
{
	char *str1 = NULL;
	char *str2 =  "hola";
	char *str3 = "hola";

	printf("Before memcopy: %s\n", str1);
	printf("After memcopy:%s\n", memcpy(str1, str2, 4));
	printf("After ft_memcopy:%s\n",ft_memcpy(str1, str3, 4));
	return (0);
}

//----------------------------ft_memmove--------------------
int main(void)
{
    char src[] = " World";
    char *dst = NULL;
    char *dst1 = NULL;

    printf("Dest before: %s\n", dst);
    printf("Dest1 before: %s\n", dst1);
	//memmove(dst, src, 8);
	ft_memmove(dst1, src, 8);
    printf("Dest after memmove: %s\n", dst);
    printf("Dest after ft_memmove: %s\n", dst1);
    return(0);
}
/*
//----------------------------ft_strlcpy--------------------
int main ()
{
	const char *src = "Hola, que tal?";	
	size_t size = 8;
	char destination[size];
	char dest[size];
	
	printf ("Source lenght: %lu\n", strlcpy(destination, src, size));
	printf ("Destination: %s\n", destination);
	ft_strlcpy(dest, src, size);
	printf("Source lenght: %lu\n",ft_strlcpy (dest, src, size));
	printf("Destination: %s\n", dest);
	return (0);
}

//----------------------------ft_strlcat--------------------

int	main(void)
{
	char	src[] = "123JJJJ";
	char	*dst = NULL;
	char	*dst2 = strdup(dst);
	int		results[2];
	int		expected[2];

	expected[0] = strlen(src) + strlen(dst);
	expected[1] = strlen(src) + strlen(dst);
	results[0] = strlcat(dst, src, 0);
	results[1] = ft_strlcat(dst2, src, 0);
	printf("%i %i ORIGINAL: %d %s FT: %d %s"
	, expected[0], expected[1],  results[0],dst, results[1], dst2);
}

//----------------------------ft_toupper--------------------
int main(void)
{
    char    input = 'a';
    
    printf("%c\n", toupper(input));
    printf("%c\n", ft_toupper(input));
}

//----------------------------ft_tolower--------------------
int main(void)
{
    char    input = 'A';
    
    printf("%c\n", tolower(input));
    printf("%c\n", ft_tolower(input));
}

//----------------------------ft_strchr--------------------
int main()
{
    char    *s = {"Hola\0t"};

    printf("%s\n", strchr(s, 't'));
    printf("%s\n", ft_strchr(s, 't'));
    return (0);
}

//----------------------------ft_strrchr--------------------

int main()
{
    char    *s = {NULL};

    printf("%s\n", strrchr(s, 't'));
    printf("%s\n", ft_strrchr(s, 't'));
    return (0);
}

//----------------------------ft_strncmp--------------------
int	main(void)
{
	int	result;
	int result1;

	result = strncmp("abcdef", "", 6);
	//result1 = ft_strncmp("abcdef", NULL, 6);
	printf("%d\n", result);
	printf("%d\n", result1);
	return (0);
}

//----------------------------ft_memchr--------------------

int main()
{
	int *s= NULL;
	int *s1 =NULL;
    char *ret;
    char *ret2;
    
    //ret = memchr(s, '2' ,42);
    ret2 = ft_memchr(s1, '2', 42); 
	printf("Result memchr: %s\n", ret);
    printf("Result ft_memchr: %s\n", ret2);

    return (0);
}

//----------------------------ft_memcmp--------------------

int main(void)
{
    int str1[] = {2, 3, 7, 0};;
    int str2[]= {2, 3, 7, 0};

    printf("%i\n",  memcmp(str1, str2, 20));
    printf("%i\n",  ft_memcmp(str1, str2, 20));
    return (0);
}

//----------------------------ft_strnstr--------------------

int	main(void)
{
	char	s1[30] = "Hello, world!";
	char	s2[]= "o";
	char	*point;
	char	str[30] = "Hello, world!";
	char	to_find[] = "o";
	char	*point2;
    size_t  size = 13;

	point = strnstr(s1, s2, size);
	point2 = ft_strnstr(str, to_find, size);
	printf("%s\n", point);
	printf("%s\n", point2);
	return 0;
}

//----------------------------ft_atoi--------------------
int main()
{
	printf("ft: %i - Orig: %i\n", ft_atoi("\t\t\t677cdd7"), atoi("\t\t\t677cdd7"));	
	return(0);	
}

//----------------------------ft_calloc--------------------

int main(int argc, char *argv[])
{
    int *number;
    size_t i = 0;
	char n = 2;

    number = (int *)malloc(n * sizeof(char));

    if(number == NULL)
        printf("memory name couldnt be allocated\n");
	while (i < (n * sizeof(char)))
	{
		printf("%d\n", number[i]);
		i++;
	}
	printf("Position %p !\n", number);
    free(number);
    return(0);
}

//----------------------------ft_strdup--------------------
int main(void)
{
    const char *str = "";
    char *strduplicate = strdup(str);
    char *ft_strduplicate = ft_strdup(str);

    printf("Original: %s\n", str);
	printf("Original_uplicate: %s\n", strduplicate);
    printf("ft_duplicate: %s\n", ft_strduplicate);

    free(ft_strduplicate);
    return(0);
}

//----------------------------ft_substr--------------------
int main(void)
{
	char *s = NULL;
	char *newstr = ft_substr(s, 1, 1);
	
	printf("Original string: %s\n", s);
	printf("Return string: %s\n", newstr);
	return(0);
}*/

//----------------------------ft_strjoin--------------------
/*int main(void)
{
    char *s1 = NULL;
   	char *s2 = NULL;
    printf("New string: %s\n", ft_strjoin(s1, s2));
	return (0);
}*/



/*
int main(void)
{
	t_list* list = ft_lstnew("1");
}*/

#if 1
int main()
{
	t_list* node = ft_lstnew("jaja");
	ft_lstiter(node, NULL);
}
#endif