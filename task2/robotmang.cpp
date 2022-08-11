#include "robotmang.h"
void addrobot(Robot* r1)
{
	string rname;
	float rprice;														// get info of each robot and set these info
	bool rrent;
	string ids;
	cout<<"enter ur robot name:\n";
	cin>>rname;                      //there is aproblem in cin fin with string i can't complete the problem but i write the code completed
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	r1->setname(rname);
	cout<<"enter ur robot price per day\n";
	cin>>rprice;
	r1->setprice(rprice);
	cout<<"enter ur robot function_ids"<<endl<<"1-clean\n2-drive\n3-asssolver\n4-cook\n5-hairstylist"<<endl;
	cin>>ids;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	r1->setfunction_ids(ids);
	r1->incrobnum();  //inc the number of robot the system have
}
void Displayrobots(Robot* r1,int *n)
{
	cout<<"this is Robot"<<*n<<endl;
	cout<<"name:"<<r1->getname()<<endl;      //display all robot info
	cout<<"price:"<<r1->getprice()<<endl;
	cout<<"statues:"<<r1->isrentedever()<<endl;
	cout<<"fun_ids:"<<r1->getfunction_ids()<<endl;
}
int searchrobot(Robot *robarr,string nam)
{
	for(i=0;i<robarr->getrobnum();i++)
	{
		if(!nam.compare(robarr[i].getname()))   
		{
			Displayrobots(&robarr[i],&i);	//search for robot by name IF NOT FOUNT PRINT NOT FOUND
			return i;
		}
	}
	if(i==robarr->getrobnum())
		cout<<"not found\n";	
}
