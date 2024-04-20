#include <stdio.h>
#include <string.h>

int isPalindrome(char *str)
{
    int left = 0;
    int right = strlen(str) - 1;

    while (right > left) 
    {
        if (str[left++] != str[right--])
       	{
            return 0;
	}
    }

    return 1;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    if (isPalindrome(argv[1])) 
    {
        printf("'%s' is a palindrome.\n", argv[1]);
    }
    else
    {
        printf("'%s' is not a palindrome.\n", argv[1]);
    }

    return 0;
}
