#include <stdio.h>
struct emp{
	int id;
	char name[20];
	double sal;
};

int main(){
	FILE *fptr;
	struct emp e1[3] = {{1232,"ehjdehdhj",475858457.494},{2183736,"hfhfhjfd",7465475.858},{474854,"ryrhfyh",457574.908}};
	fptr = fopen("employees.txt","w");
	if (fptr == NULL)
	{
		printf("Error opeining file.\n");
		return 1;
	}
	for (int i=0; i<3; i++){
		fprintf(fptr," %d %s %.2lf\n",e1[i].id, e1[i].name,e1[i].sal);
}
	fclose(fptr);
	printf(" Data is written to file . \n");

	return 0;

}

