#include <stdio.h>

int main(){
	char string[50];
	int num;
	double interest;
	FILE *fp = fopen("test.rec","rb");
	fread(string,30,1,fp);
	fread(&num, sizeof(int),1,fp);
	fread(&interest, sizeof(double),1, fp);
	printf("%s \n %d \n %lf", string, num, interest);
	fclose(fp);
	return 0;
}

