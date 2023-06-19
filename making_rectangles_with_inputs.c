#include <stdio.h>
#include <stdlib.h>

int main(){
int br_of_height;
int br_of_base;
char name_of_rectangle[25];
printf("\nPlease write the name of the rectangle: ");
fgets(name_of_rectangle,sizeof(name_of_rectangle),stdin);
printf("Please write the height of the rectangle in br: ");
scanf("%d",&br_of_height);
printf("Please write the base of the rectangle in br: ");
scanf("%d",&br_of_base);

int height_of_rectangle=br_of_height; // 1br equals to three "-"
int base_of_rectangle=br_of_base; // 1 br equals to one "|"

printf("\n\n%s",name_of_rectangle);

for(int i=0;i<base_of_rectangle;i++){
printf("---");
}
printf("\n");
for(int i=0;i<height_of_rectangle;i++){
    printf("|");
    for(int k=0;k<base_of_rectangle-1;k++){
        printf("   ");
    }
    printf(" |\n");
}
for( int i=0;i<base_of_rectangle;i++){
printf("---");
}
printf("\n");
system("pause");
return 0;
}


