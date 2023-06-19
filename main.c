#include<stdio.h>
#include"std_types.h"
#include"clinc_interface.h"
//#include"clinc_congj.h"

u32 main()
{


	u32 your_choice = 0;
printf("welcome sir \n if you are admin please enter 1 \n if you are client please enter 2\n your choice : ");
scanf("%d" ,&your_choice);
if(your_choice==1)
{
	admin_pass();
	
}	
else if(your_choice==2)
{
	patient_entered();
}
else
{
	printf("your choice invalide");
}

}