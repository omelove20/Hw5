#include <stdio.h>
	int set1[2][2],set2[2][2],set3[2][2],form;
	
	arr_set1(){
		printf("-------------------Num1-----------------\n");
		for(int num1=0;num1<=1;num1++){
		for(int num2=0;num2<=1;num2++){
			printf("Input Num[%d][%d] : ",num1,num2);
			scanf("%d",&set1[num1][num2]);
		}}}
		
	arr_set2(){
		printf("-------------------Num2-----------------\n");
		for(int num1=0;num1<=1;num1++){
		for(int num2=0;num2<=1;num2++){
			printf("Input Num[%d][%d] : ",num1,num2);
			scanf("%d",&set2[num1][num2]);
		}}}


	Select_Case(){
		printf("---------------Select Case----------------\n");
		printf("Case 1 PlusArray()\n");
		printf("Case 2 MinusArray()\n");
		printf("Please Select Case(1,2) :");
		scanf("%d",&form);
	}

	case_1(){
		printf("--------------------Num3-------------------\n");
		for(int num1=1;num1>=0;num1--){
				for(int num2=1;num2>=0;num2--){
					printf("Num3[%d][%d] = %d \n",num1,num2,set1[num1][num2]+set2[num1][num2]);
		}}}	

	case_2(){
		printf("--------------------Num3-------------------\n");
		for(int num1=1;num1>=0;num1--){
				for(int num2=1;num2>=0;num2--){
					printf("Num3[%d][%d] = %d \n",num1,num2,set1[num1][num2]-set2[num1][num2]);
				}}}
				
	case_default(){
		printf("\nError Please Input your Number 1-2 ");
	}	
	
			
int main()
{
	arr_set1();
	arr_set2();
	Select_Case();
	switch(form){
		case 1 :case_1();
				break;
		case 2 :case_2();
				break;
		default :case_default();
	}
	
	return 0;
	
	
	

}
