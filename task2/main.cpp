#include <iostream>
using namespace std;
int i=0;
#include <string>
#include <cstdlib>
#include <string.h>
#include "Robot.cpp"
#include "User.cpp"
#include "robotmang.cpp"
#include "usermang.cpp"
void rending(Robot* robarr,User* userarr,int rn,int un)
{
	string dat;																	// enter date
	cout<<"enter the date u want to rend in(DD/MM/YYYY)"<<endl;					 
	cin>>dat;																	//set the date
	robarr[rn].date=dat;														//	set robot name in the name of reserved robots
	userarr[un].getnam()=robarr[rn].getname();
}
int Robot::robnum=0;
int User::usnum=0;
int main(int argc, char** argv)
{
	int robnum=3;
	cout<<"1-addrobot\n2-displayrobots\n3-lookforrobot\n";
	cout<<"4-adduser\n5-displayusers\n6-lookfooruser\n";
	short int ch;																//choose to make the operation u want
	Robot* robarr=(Robot *)malloc(3*sizeof(Robot));
	User* userarr=(User *)malloc(3*sizeof(User));
	addrobot(&robarr[0]);														// the program start with 3 robots
	addrobot(&robarr[1]);														// and now we must attach to them their informations
	addrobot(&robarr[2]);
	string wuname;
	string wrname;
	int un;
	int rn;
	while(true)
	{
		cin>>ch;
		switch(ch)
		{
		case 1:
			robnum++;																//allocate a memory for the new obj by it's size
			robarr=(Robot *)realloc(robarr,robnum*sizeof(Robot));
			addrobot(&robarr[robnum]);
			break;
		case 2:
			for(i=0;i<robarr[0].getrobnum();i++)
			{
				Displayrobots(&robarr[i],&i);										// print all info about robots
			}	
			break;
		case 3:
			cin>>wrname;
			searchrobot(robarr,wrname);										// give name of robot to search about it and display its info
			break;
		case 4:
			User=(User *)realloc(userarr,usernum*sizeof(User));
			adduser(&userarr[userarr[0].getusnum()]);
			break;
		case 5:
			for(i=0;i<userarr[0].getusnum();i++)
			{
				Displayusers(&userarr[userarr[0].getusnum()],&i);
			}
			break;
		case 6:
			cin>>wuname;
			searchuser(userarr,wuname);
			break;
	case 7:
		cout<<"enter  the user number\n";
		cin>>un;
		rending(robarr,userarr,rn,un)			//rending th robot to a user
		break;
	default:
		cout<<"wrong choose";
	}
	}
	return 0;
}
