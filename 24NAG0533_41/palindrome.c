#include <stdio.h>

void main (int argc, char* argv){
	int n,rev,r,temp;
	rev=0;
	n= atoi(argv[1]);
	temp = n;
	while(n>0)
	{
		r = n % 10;
		rev = rev * 10 +r;
	     	n = n / 10;
	}
 	if (temp == rev)
		printf("Palindrome");
	else 
		printf("Not a Palindrome");
	
}

