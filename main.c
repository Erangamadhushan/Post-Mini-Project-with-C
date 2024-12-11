#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//declare main function
void help();
void about_us();
void sign_up();
void sign_in();
void exit2();
void exit1();
//declare help() function sub functions
void customer_service();
void technical_service();
void customer_feedback();
void up_comming_events();

//declare technical_service function sub function
void assemble_issue();
void system_issue();
void other_tech_issue();

//declare sign_up() function sub function
void confirm_sign_up();

//create a special default function
void pro_default();

int main(){
	int get_num;
	printf("\33[93m==================================================\33[0m\n");
	printf("\33[91m====================>\33[0m\33[94m Menu \33[0m\33[91m<======================\33[0m\n");
	printf("\33[93m==================================================\33[0m\n");
	printf("\t\t1.Home\n");
	printf("\t\t2.Help\n");
	printf("\t\t3.About Us\n");
	printf("\t\t4.Sign UP\n");
	printf("\t\t5.Sign In\n");
	printf("\t\t6.Exit \n");
	printf("\nEnter your number which do you want :");
	scanf("%d",&get_num);
	switch (get_num){
		case 1:
			main();
		break;
		case 2:
			help();
		break;
		case 3:
			about_us();
		break;
		case 4:
			sign_up();
		break;
		case 5:
			sign_in();
		break;
		case 6:exit1();
		
		break;
		default:pro_default();
			
			
	}
	return 0;
}
void help(){
	int gs_m;
	printf("\nYour choose Help Function =>\n\n");
	printf("What is your help type (please choose following types) \n");
	printf("\33[92m");
	printf("\t1.Customer Help Service\n");
	printf("\t2.Technical Help Service\n");
	printf("\t3.Check Customer Feedback\n");
	printf("\t4.Comming soon events\n");
	printf("\t5.Back to Menu\n");
	printf("\33[0m");
	printf("Enter your Service method :");
	scanf("%d",&gs_m);
	switch(gs_m){
		case 1:
			customer_service();
		break;
		case 2:
			technical_service();
		break;
		case 3:
			customer_feedback();
		break;
		case 4:
			up_comming_events();
		break;
		case 5:
			main();
		break;
		default:
			pro_default();
	}
}

//code block of customer_service() function
void customer_service() {
	printf("====> Our Customer Service <====\n");
	printf("Actually , we are always think support customers to the maximum\n");
	printf("And we have good customer feedback and responses\n");
	int out_cus_feedback;
	printf("Do you want see our customer feedback ??? :\n");
	printf("\t1.Yes\n");
	printf("\t2.No\n");
	printf("\t3.Continue\n");
	printf("\t4.Go to the Home page\n");
	printf("Enter your answer here :");
	scanf("%d",&out_cus_feedback);
	switch(out_cus_feedback){
		case 1:
			customer_feedback();
		break;
		case 2:
		break;
		case 3:
		break;
		case 4:
			main();
		break;
		default:
			pro_default();
	}
	printf("We always sell good quality product.responsible and reliable services\n");
	printf("You can show about that \nPlease visit our customer feedback page\n");
	int back;
	printf("Back to :\n");
	printf("\t1.Main Page\n");
	printf("\t2.Help Page\n");
	printf("Enter your choice(do you want go the main page please press 1 ) :");
	scanf("%d",&back);
	switch(back){
		case 1:
			main();
		break;
		case 2:
			help();
		break;
		default:
			pro_default();
			
	}
}

//code block of technical_service() function
void technical_service() {
	printf("=====> Our Technical Services <=====\n");
	printf("We always provide technical services for the our customer\n");
	printf("You can access the following technical services from our system\n");
	printf("\t1.Product Assemble Issues\n");
	printf("\t2.Our System Issues\n");
	printf("\t3.Other Technical Issues\n");
	printf("\t4.Back to Help Page\n");
	int tech_issues;
	printf("What is the your technical issues :");
	scanf("%d",&tech_issues);
	switch(tech_issues){
		case 1:
			assemble_issue();
		break;
		case 2:
			system_issue();
		break;
		case 3:
			other_tech_issue();
		break;
		case 4:
			help();
		default:
			pro_default();
			
	}
}

//code block of technical_service function sub function
void assemble_issue(){
	printf("\n=====> This ia assemble issue page !! <=====\n");
	int back;
	printf("Back to :\n");
	printf("\t1.Main Page\n");
	printf("\t2.Technical Service Page\n");
	printf("\t3.Help Page\n");
	printf("Enter your Number :");
	scanf("%d",&back);
	switch(back){
		case 1:
			main();
		break;
		case 2:
			technical_service();
		break;
		case 3:
			help();
		break;
		default:
			pro_default();
			
	}
}
void system_issue() {
	printf("\n=====> This our System Issues Page <=====\n");
	int back;
	printf("Back to :\n");
	printf("\t1.Main Page\n");
	printf("\t2.Technical Service Page\n");
	printf("\t3.Help Page\n");
	printf("Enter your Number :");
	scanf("%d",&back);
	switch(back){
		case 1:
			main();
		break;
		case 2:
			technical_service();
		break;
		case 3:
			help();
		break;
		default:
			pro_default();
			
	}
}
void other_tech_issue() {
	printf("\n=====> This is our Other Technical Issues Page !! <=====\n");
	int back;
	printf("Back to :\n");
	printf("\t1.Main Page\n");
	printf("\t2.Technical Service Page\n");
	printf("\t3.Help Page\n");
	printf("Enter your Number :");
	scanf("%d",&back);
	switch(back){
		case 1:
			main();
		break;
		case 2:
			technical_service();
		break;
		case 3:
			help();
		break;
		default:
			pro_default();
			
	}
}

//code block of customer_feedback() function
void customer_feedback() {
	printf("\n\33[91m=====> Our Customer Feedback <=====\33[0m\n\n");
	
	printf("\t1.Eranga Madhushan\t\t\t\t2023/12/21\n");
	printf("\tPerfect customer service.provide good responsible service for the customer\n\n");
	
	printf("\t2.Thilina Lakshan\t\t\t\t2023/12/18\n");
	printf("\tPerfect customer service.provide good product for the customer\n\n");
	
	printf("\t3.Dananjaya Jayaweera\t\t\t\t2023/11/29\n");
	printf("\tPerfect customer service.provide good responsible service for the customer\n\n");
	int back;
	printf("Back to :\n");
	printf("\t1.Main Page\n");
	printf("\t2.Customer Service Page\n");
	printf("\t3.Help Page\n");
	printf("Enter your choice :");
	scanf("%d",&back);
	switch(back){
		case 1:
			main();
		break;
		case 2:
			customer_service();
		break;
		case 3:
			help();
		default:
			pro_default();
			
	}
}

//code block of up_comming_events() function
void up_comming_events() {
	printf("\n=====> Up Comming Events Page <=====\n");
	printf("\nWe are released new few product next month\n");
	printf("And Update our website and web app next year first chapter !!\n");
	printf("We are expected improve our technology and provide perfect customer service further !!\n");
	int back;
	printf("Back to :\n");
	printf("\t1.Main Page\n");
	printf("\t2.Help page\n");
	scanf("%d",&back);
	switch(back){
		case 1:
			main();
		break;
		case 2:
			help();
		default:
			pro_default();
			
	}
}

//code block of about_us() function
void about_us() {
	printf("\t\tWe are NestCope \t\n");
	printf("\n\tWe are global product seller and developer since 2010\n");
	printf("\tWe have good customer feedback and responses \n");
	printf("\tWe always think provide good quality product for the customer\n");
	printf("\t");
	int back;
	printf("Back to :\n");
	printf("\t1.Main Page\n");
	
	scanf("%d",&back);
	switch(back){
		case 1:
			main();
		break;
		default:
			pro_default();
			
	}
}

//code block of sign_up() function
void sign_up() {
	printf("\nPlease Welcome to the NestCope !!!\n");
	printf("At first Sign Up !!\n");
	char firstName[20],lastName[20],country[20],email[40],password[25];
	int Age ;
	void sign_up_form(){
	
		printf("\t\33[93m======> Sign Up <======\33[0m\n");
		printf("\tEnter your first Name here :");
		scanf("%s",firstName);
		printf("\tEnter your last Name here :");
		scanf("%s",lastName);
		printf("\tEnter your Age :");
		scanf("%d",&Age);
		printf("\tEnter your country :");
		scanf("%s",country);
		printf("\t\33[91mPlease Enter your correct email here,because we always work with your email\33[0m\n");
		printf("\tEnter your Email here :");
		scanf("%s",email);
		printf("\tEnter your \33[2mStrong Password\33[0m here :");
		scanf("%s",password);
}
	sign_up_form();
	void show_sign_up_form(){
	
	char fullName[40];
	strcpy(fullName,firstName);
	strcat(fullName," ");
	strcat(fullName,lastName);
	printf("\n\tPlease Check your details !!!\n");
	printf("\tYour full Name :%s\n",fullName);
	printf("\tYour Age :%d\n",Age);
	printf("\tYour country is :%s\n",country);
	printf("\tYour email is :%s\n",email);
	printf("\tYour Password is :%s\n",password);
	printf("\n\tDo you like sign up now :");
	int user_res;
	printf("\n\t1.Yes\n");
	printf("\t2.No,I want to change my details");
	printf("\n\tEnter your selection :");
	scanf("%d",&user_res);
	switch(user_res){
		case 1:
			confirm_sign_up();
			
		break;
		case 2:
			sign_up_form();
			show_sign_up_form();
			
	}
}
	show_sign_up_form();
}
void confirm_sign_up(){
	printf("\t\t======> You are Sign Up NestCope <======\n");
	printf("\t\t<<<< Your are our customer Now >>>>\n");
	printf("\t\tThank You !!\n");
	int back;
	printf("\tBack to :\n");
	printf("\t1.Main Page\n");
	printf("\tEnter your choise :");
	scanf("%d",&back);
	switch(back){
		case 1:
			main();
		break;
		default:
			pro_default();
			
	}
}
void user_account();
//code block sign_in() function 
void sign_in(){
	char email[30],password[40];
	printf("\t=====>Sign In Your Account <=====\n");
	printf("\tEnter your email :");
	scanf("%s",email);
	printf("\tEnter your password :");
	scanf("%s",password);
	user_account();
}
void user_account(){
	printf("\tYou always login your account now\n");
	printf("\tYou can get offer our product \n");
	main();
}
//code block of exit() function
void exit2(){
	int g_feedback;
	printf("===> Our cumtomer service feedback <===\n");
	printf("\t\t1.Perfect\n");
	printf("\t\t2.Good\n");
	printf("\t\t3.Satisfied\n");
	printf("\t\t4.Not Good\n");
	printf("\t\t5.worst\n");
	printf("What do you think our customer service :");
	scanf("%d",&g_feedback);
	
	switch(g_feedback){
		case 1:
			printf("Thank You !! \nYour feedback\n");
		break;
		case 2:
			printf("Thank You !! \nYour feedback\n");
		break;
		case 3:
			printf("Thank You !! \nYour feedback\n");
		case 4:
			printf("Thank You !! \nYour feedback\n");
		break;
		case 5:
			printf("Thank You !! \nYour feedback\n");
		break;
		default:
			printf("Oops...\n");
		
	}
	printf("End the programme !!\n");
	printf("Thank You \n");
	
}

//code block of exit1() function
void exit1(){
	int g_feedback;
	printf("===> Our cumtomer service feedback <===\n");
	printf("\t\t1.Perfect\n");
	printf("\t\t2.Good\n");
	printf("\t\t3.Satisfied\n");
	printf("\t\t4.Not Good\n");
	printf("\t\t5.worst\n");
	printf("What do you think our customer service :");
	scanf("%d",&g_feedback);
	
	switch(g_feedback){
		case 1:
			printf("Thank You !! \nYour feedback\n");
		break;
		case 2:
			printf("Thank You !! \nYour feedback\n");
		break;
		case 3:
			printf("Thank You !! \nYour feedback\n");
		case 4:
			printf("Thank You !! \nYour feedback\n");
		break;
		case 5:
			printf("Thank You !! \nYour feedback\n");
		break;
		default:
			printf("Oops...\n");
		
	}
	printf("End the programme !!\n");
	printf("Thank You !!!\n");
	
}


//code block of pro_default() function
void pro_default() {
	printf("\nYour input is can not processing our system .\n");
	printf("So,Try again \n");
	main();
}


