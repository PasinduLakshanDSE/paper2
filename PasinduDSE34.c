#include<stdio.h>
void main(){
	int salaries;
	int count;
	int emp[10];
	int tot=0;
	for(count=0;count<10;count++){
		printf("Enter the salaries:");
		scanf("%d",&salaries);
		emp[count]=salaries;
		if(emp[count]>5000){
			tot=tot+1;
		}
	}
	printf("Total is:%d\n",tot);
}