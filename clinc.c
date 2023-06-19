
#include<stdio.h>
#include"std_types.h"
#include"clinc_interface.h"
//#include"clinc_congj.h"



/****************************************admin_pass(void)******************************************************/
void admin_pass(void)
{
	printf("please enter the pass");
	u32 Copy_u32PassAdminENTER;
	
	for(int counter =0 ; counter<3; counter++)
	{
		scanf("%d",&Copy_u32PassAdminENTER);
		if(Copy_u32PassAdminENTER==1234)
		{
			printf(" yor pass is correct\n welcome admin \n");
			counter=3;
			admin_jobs();
		}
		else if(Copy_u32PassAdminENTER!=1234 & counter<2)
		{
			printf("your pass not correct\n please try again\n");
		}
		else 
		{
			printf("you enter pass 3 time\n invalid pass\n");
		}
	}
	
}
/****************************************admin_jobs(voide)******************************************************/

void admin_jobs(void)
{
	printf("choose your job:-\n Add new patient record enter 1\nEdit patient record enter 2 \nReserve a slot with the doctor enter 3\nCancel reservation enter 4");
	u32 your_choice=0 ;
	scanf("%d" ,&your_choice);
	if(your_choice==1)
	{
		Add_patient();
		your_choice=0;
	}
	else if(your_choice==2)
	{
		your_choice=0;
		Edit_Patient();
	}
	else if(your_choice==3)
	{
		your_choice=0;
		Reserve_Slot();
	}
	else if(your_choice==4)
	{  your_choice=0;
		Cancel_reservation();
	}
	else 
	{    your_choice=0;
		printf("sorry your choice is not correct");
	}
}

/****************************************admin_jobs(voide)******************************************************/
void Add_patient(void)
{
	u32 new_id=0,AGE=0;
	u32 G;
	u32 counter_search=0;
	

	printf("please enter new id\n ");
	scanf("%d",&new_id);	
	for(u32 counter=0;counter<num_patient;counter++)
	{
		if(new_id == patient[counter].id)
		{
			printf("the id of course there is\n");
			counter=num_patient;
			}
			else if(new_id!=patient[counter].id & counter == (num_patient-1) )
			{
			
				for(counter_search;counter_search<num_patient;counter_search++)
			{
				if(patient[counter_search].id==0)
				{
					counter_search=num_patient;
				patient[counter_search].id =new_id;
				printf("please enter the age: ");
				scanf("%d",&AGE);
				patient[counter_search].age=AGE;
				printf("please enter the name \n if name is finshid enter 1");
				
				
				for(u32 counter_name=0;counter_name<char_num;counter_name++)
				{
					scanf("%d",&patient[counter_search].name[counter_name]	);
					/*if(patient[counter_search].name[counter_name]==1)
					{
						counter_name=char_num;
					}*/
				
				}
				printf("please enter the gender\n if gender male enter 1 \n if gender famen enter 2\n");
				
				scanf(" %c",&G );
				
				//scanf("%d",&GANDER);
				if(G=='1')
				{
				for(u32 counter_name=0;counter<char_num;counter++)
				{
					patient[counter_search].gander[counter_name]=='m';
					patient[counter_search].gander[counter_name]=='a';
					patient[counter_search].gander[counter_name]=='l';
					patient[counter_search].gander[counter_name]=='e';
					counter_name=char_num;
					
				}
				}
				if(G=='2')
				{
				for(u32 counter_name=0;counter<char_num;counter++)
				{
					patient[counter_search].gander[counter_name]=='f';
					patient[counter_search].gander[counter_name]=='a';
					patient[counter_search].gander[counter_name]=='m';
					patient[counter_search].gander[counter_name]=='e';
					patient[counter_search].gander[counter_name]=='n';
					counter_name=char_num;
				}
				}
				}
				
				}
			}
				
			}
			
		admin_jobs();
	}
	
	
void Edit_Patient(void)
{
	u32 id_edit,AGE=0;
	s8 GANDER;
	u32 counter_search=0;
	printf("please enter  id edit\n ");	
	scanf("%d",&id_edit);
	for(u32 counter=0;counter<num_patient;counter++)
	{
		if(id_edit == patient[counter].id)
		{
			printf("the id there is\n");
			
			
				for(counter_search;counter_search<num_patient;counter_search++)
			{
				if(patient[counter_search].id==id_edit)
				{
					counter_search=num_patient;
				patient[counter_search].id =id_edit;
				printf("please enter the age: ");
				scanf("%d",&AGE);
				patient[counter_search].age=AGE;
				printf("please enter the name \n if name is finshid enter 1");
				
				
				for(u32 counter_name=0;counter_name<char_num;counter_name++)
				{
					scanf("%d",&patient[counter_search].name[counter_name]	);
					
				
				}
				printf("please enter the gender\n if gender male enter 1 \n if gender famen enter 2");
				
				scanf(" %c",&GANDER );
				
				
				if(GANDER=='1')
				{
				for(u32 counter_name=0;counter<char_num;counter++)
				{
					patient[counter_search].gander[counter_name]=='m';
					patient[counter_search].gander[counter_name]=='a';
					patient[counter_search].gander[counter_name]=='l';
					patient[counter_search].gander[counter_name]=='e';
					counter_name=char_num;
					
				}
				}
				if(GANDER=='2')
				{
				for(u32 counter_name=0;counter<char_num;counter++)
				{
					patient[counter_search].gander[counter_name]=='f';
					patient[counter_search].gander[counter_name]=='a';
					patient[counter_search].gander[counter_name]=='m';
					patient[counter_search].gander[counter_name]=='e';
					patient[counter_search].gander[counter_name]=='n';
					counter_name=char_num;
				}
				}
				}
				else if(id_edit!=patient[counter].id & counter == (num_patient-1))
				{
				printf("the id not there is\n");
				
				
				}
			}
	}
	
}	
	

admin_jobs();
	
}

void Reserve_Slot(void)
{	u32 new_resv, day_resv , month_resv, id_resv;
	u32 if_condition=0;
	
    printf("please enter the id ");
	scanf("%d",&id_resv);
	for(u32 counter_search=0;counter_search<num_patient;counter_search++)
	{
				if(patient[counter_search].id==id_resv)
				{
					counter_search=num_patient;
					id_resv = reserve[counter_search].id;
					
					printf("please enter the day");
					scanf("%d",&day_resv);
					printf("please enter the month");
					scanf("%d",&month_resv);
					printf("please enter the solt\n to reserve 2pm to 2:30pm enter 1 \nto reserve 2:30pm to 3pm enter 2 \nto reserve 3pm to 3:30pm enter 3 \nto reserve 3:30pm to 4pm enter 4 \nto reserve 4:30pm to 5pm enter 4 \n");
					scanf("%d",&new_resv);
				
				for(u32 counter=0 ; counter<num_patient; counter++)
				{
					if(reserve[counter].day==day_resv & reserve[counter].mounth==month_resv &reserve[counter].solts==new_resv)
					{
						printf("sory this solt is reseved\n");
						counter=num_patient;
						
					}
					else if(counter==num_patient-1)
					{
					reserve[counter].day==day_resv;
					reserve[counter].mounth==month_resv; 
					reserve[counter].solts==new_resv;
					printf(" the reseve is done ");
		}
		
				}
	
				}
				else if(counter_search==num_patient-1)
				{
					printf("the id not found");
				}
}
admin_jobs();
}
void Cancel_reservation(void)
{
u32 id_remove=0;
	printf("please enter  id remove her solt\n ");	
	scanf("%d",&id_remove);
	for(u32 counter=0;counter<num_patient;counter++)
	{
		if(id_remove == reserve[counter].id)
		{
			printf("the id there is\n");
			reserve[counter].id=0;
			reserve[counter].day=0;
			reserve[counter].mounth=0;
			reserve[counter].solts=0;
			printf("the resrve is removed");
			counter=num_patient;
		}
		else 
		{
			printf("the id not found\n");
		}
	}
	admin_jobs();
}
void patient_entered(void)
{
	u32 enterd=0;
	printf("if view your record enter 1\n if View todays reservations enter 2 \n ");
	scanf(" %d",&enterd);
	
		if(enterd==1)
		{
		enterd=0;
		View_record();
		}
		else if(enterd==2)
		{
		enterd=0;
		View_reservations();
		}
		else
		{
			printf("invalid chose");
		}
	
}
void View_record(void)
{
u32 id_enterd=0;
printf("please enter your id");
scanf("%d",&id_enterd);
for(u32 counter=0;counter<num_patient;counter++)
	{
		if(id_enterd == patient[counter].id)
		{
			printf("the name is ");
			for(u32 counter2 =0;counter2<char_num;counter2++)
			{
				printf("%d",patient[counter2].name);
			}
			printf("the gander is ");
			for(u32 counter3 =0;counter3<char_num;counter3++)
			{
				printf("%d",patient[counter3].gander);
			}
			printf("the age is %d\n the gander is %d\n",&patient[counter].age,&patient[counter].gander);
			counter=num_patient;
		}
		else if(counter==num_patient-1) 
		{
			printf("the id not found\n");
		}
	}
	patient_entered();
	
}
void View_reservations(void)
{
	u32 id_enterd=0;
printf("please enter your id");
scanf("%d",&id_enterd);
for(u32 counter=0;counter<num_patient;counter++)
	{
		if(id_enterd == reserve[counter].id)
		{
			printf("the solt is %d\n the day is %d\n the mounth is %d \n",&reserve[counter].solts,&reserve[counter].day,reserve[counter].mounth);
			counter=num_patient;
		}
		else 
		{
			printf("the id not found\n");
		}
	}
	patient_entered();
}
