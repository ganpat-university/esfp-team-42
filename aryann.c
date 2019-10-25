//ESFP Project

//Done By Bhaven Chheda

#include "stdio.h"

#include "string.h"

struct Gym 

{ 

   int customer_id; 

   char customer_name[100]; 

   int contact_number; 

   char pass_status[50];

   int service_charge; 

   int age;

   char medical_history[100];

   char pass_expiry_date[100];

   char shift[100];

   char customer_history[100];

   char gender[100];

   char referral_status[100];

}ob[3];

int main()

{

int i;

float bill,dis,bill1,dis1;

for(i=1;i<=3;i++)

{

printf("Enter Customer ID: \n");

scanf("%d",&ob[i].customer_id);

printf("Enter Customer Name: \n");

scanf("%s",&ob[i].customer_name);

printf("Enter Customer Number: \n");

scanf("%d",&ob[i].contact_number);

printf("Enter Pass Status: \n");

scanf("%s",&ob[i].pass_status);

printf("Enter Service Charge: \n");

scanf("%d",&ob[i].service_charge);

printf("Enter Age: \n");

scanf("%d",&ob[i].age);

printf("Enter Medical History: \n");

scanf("%s",&ob[i].medical_history);

printf("Enter Pass Expiry Date: \n");

scanf("%s",&ob[i].pass_expiry_date);

shift: printf("Enter Shift (single or double): \n");

scanf("%s",&ob[i].shift);

if( strcasecmp(ob[i].shift,"single")==0|| strcasecmp(ob[i].shift,"double")==0 )

{

his: printf("Enter Customer History (new or existing): \n");

scanf("%s",&ob[i].customer_history);

if( strcasecmp(ob[i].customer_history,"new")==0 ||strcasecmp(ob[i].customer_history,"existing")==0 )

{

gen: printf("Enter Gender:(male or female) \n");

scanf("%s",&ob[i].gender);

if( strcasecmp(ob[i].gender,"male")==0||strcasecmp(ob[i].gender,"female")==0 )

{

printf("Enter Referral Status: \n");

scanf("%s",&ob[i].referral_status);

}

else//gender

{

printf("Invalid Input Enter Again(Status) \n");

goto gen;

}

}

else//history

{

printf("Invalid Input Enter Again(Category) \n");

goto his;

}

}

else//shift

{

printf("Invalid Input Enter Again(Type) \n");

goto shift;

}

}



printf("Database \n");

for(i=1;i<=3;i++)

{

printf("Customer Id: %d \n",ob[i].customer_id);

printf("Customer Name: %s \n",ob[i].customer_name);

printf("Customer Number: %d \n",ob[i].contact_number);

printf("Pass Status: %s \n",ob[i].pass_status);

printf("Service Charge: %d \n",ob[i].service_charge);

printf("Age: %d \n",ob[i].age);

printf("Medical History: %s \n",ob[i].medical_history);

printf("Pass Expiry Date: %s \n",ob[i].pass_expiry_date);

printf("Shift %s \n",ob[i].shift);

printf("Customer History %s \n",ob[i].customer_history);

printf("Gender: %s \n",ob[i].gender);

printf("Referral Status: %s \n",ob[i].referral_status);





if(ob[i].age>60)

	{

		dis1=(ob[i].service_charge*15)/100;

		bill1=(ob[i].service_charge-dis1);

		printf("Discount Offered:  %f \n",dis1);

		printf("Total Bill %f \n",bill1);

	}

else if(strcasecmp(ob[i].gender,"female"))	

	{

		dis=(ob[i].service_charge*10)/100;

		bill=(ob[i].service_charge-dis);

		printf("Discount Offered:  %f \n",dis);

		printf("Total Bill %f \n",bill);

	}

	
else
{
	

	printf("Discount Offered: 0\n");

	printf("Total Bill %f \n",ob[i].service_charge);

}	



}



}

// Member 3

printf(" 5% discount In case of referral program");

for(i=1;i<=2;i++)

{

	if(  strcasecmp(ob[i].referral_status"yes")==0 )

	{

		dis=(ob[i].service_charge*5)/100;

		bill=(ob[i].service_charge-dis);

		printf("Discount Offered:  %f \n",dis);

		printf("Total Bill %f \n",bill);

	}
}
// Member 3

printf(" Service charge is not applicable in case of pass");

for(i=1;i<=2;i++)

{

	if(  strcasecmp(ob[i].pass_status,"pass")==0 )

	{     ob[i].service_charge=0;

		bill=(ob[i].service_charge);

		printf("Total Bill %f \n",bill);

	}}