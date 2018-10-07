#include <stdio.h>
int main()
{
	int set1[2][2],set2[2][2],set3[2][2],form;
	printf("-------------------Num1-----------------\n");
	for(int num1=0;num1<=1;num1++){
		for(int num2=0;num2<=1;num2++){
			printf("Input Num[%d][%d] : ",num1,num2);
			scanf("%d",&set1[num1][num2]);
		}
	}printf("-------------------Num2-----------------\n");
	for(int num1=0;num1<=1;num1++){
		for(int num2=0;num2<=1;num2++){
			printf("Input Num[%d][%d] : ",num1,num2);
			scanf("%d",&set2[num1][num2]);
		}
	}printf("---------------Select Case----------------\n");
	printf("Case 1 PlusArray()\n");
	printf("Case 2 MinusArray()\n");
	printf("Please Select Case(1,2) :");
	scanf("%d",&form);
	printf("--------------------Num3-------------------\n");
	switch(form){
		case 1 :for(int num1=1;num1>=0;num1--){
				for(int num2=1;num2>=0;num2--){
					printf("Num3[%d][%d] = %d \n",num1,num2,set1[num1][num2]+set2[num1][num2]);
				}
			}break;
		case 2 :for(int num1=1;num1>=0;num1--){
				for(int num2=1;num2>=0;num2--){
					printf("Num3[%d][%d] = %d \n",num1,num2,set1[num1][num2]-set2[num1][num2]);
				}
			}break;
		default : printf("\nError Please Input your Number 1-2 ");
	}
	
	return 0;
	
	
	

}
