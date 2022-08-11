#include "usermang.h"
void adduser(User* u)
{
	string uname;
	string utnumber;
	string uemail;
	string *renrobs;
	cout<<"enter the user name:"<<endl;
	cin>>uname;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout<<"enter the user phone number:"<<endl;	
	cin>>utnumber;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout<<"enter the user email:"<<endl;
	cin>>uemail;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	u->setname(uname);
	u->setemail(uemail);
	u->settnumber(utnumber);
	u->incusnum();
}
void Displayusers(User* u,int* n)
{
	cout<<"this is user:"<<*n<<endl;
	cout<<"name:"<<u->getnam()<<endl;
	cout<<"tnumber:"<<u->gettnumber()<<endl;
	cout<<"email:"<<u->getemail()<<endl;
}
int searchuser(User *userarr,string nam)
{
	for(i=0;i<userarr->getusnum();i++)
	{
		if(!nam.compare(userarr[i].getnam()))
		{
			Displayusers(&userarr[i],&i);	
			return i;
		}
	}
	if(i==userarr->getusnum())
		cout<<"not found\n";
		
}

