#include <stdio.h>
#include <string.h>

void sortNames(char names[][50], int num)
{
   char temp[50];
    int i,j;
    for(i=0;i < num -1 ;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(strcasecmp(names[i], names[j])>0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main()
{
    char names[100][50];
    int num,i;
    printf("Enter a number for player's names :\n ");
    scanf("%d",&num);
    getchar();
    printf("Enter the players names : \n");
    for( i=0;i<num;i++){
        fgets(names[i], 50,stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
             //scanf("%s",names[i]);
      
        
    }
    
    sortNames(names, num);
    
    printf("Players names in ascending order:\n");
    printf("--------------------------------- \n");
    for(i= 0; i<num;i++){
        printf(" %s\n", names[i]);
    }
    return 0;
}
