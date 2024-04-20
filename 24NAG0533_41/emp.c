#include<stdio.h>
#define MAX 100
 
int main()
{
	int num;
	double pay;
	char name[MAX];
	char wish = 'y';
	FILE *fp;
	int ret;
	fp = fopen("emp.txt", "w+"); 
	while ( 'y' == wish || 'Y' == wish)
	{
		printf ("Enter ID, Name and Pay :\n ");
		scanf("%d %s %lf",&num, name, &pay);fflush(stdin);
		ret = fprintf(fp," %d   %s   %.2lf\n",num, name, pay);
		printf("\n Current position of file pointer is %ld\n ",ftell(fp));
		printf("Wish to enter one more record y /n : ");
		printf("\n Number of bytes written : %d \n",ret);
         	getchar();wish = getchar();
	}
	rewind(fp);
	while((ret = fscanf(fp,"  %d   %s   %lf",&num,name,&pay))!= -1)
	{
		//ret = fscanf(fp, "  %d   %s   %lf ", &num, name, &pay);
		printf("  %d   %s   %.2lf ",num, name, pay);
		printf("\n  Number of bytes read : %d \n\n",ret);
	//	if(ret == -1) break;
	}//while(ret != -1);
	fclose(fp);
	return 0;
}

