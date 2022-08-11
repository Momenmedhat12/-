#include "Robot.h"
	Robot::Robot():rented(false)
	{
		cout<<"the Robot is added"<<endl;
	}
	void Robot::setname(string n)
	{
		name = n;
	}
	void Robot::setfunction_ids(string id)
	{
		function_ids=id;
	}		
	void Robot::setprice(float p)
	{
		price = p;
	}
	void Robot::setstatues(bool r)
	{
		rented = r;
	}
	
	string Robot::getname()
	{
		return name;
	}
	int Robot::getrobnum()
	{
		return robnum;
	}
	void Robot::incrobnum()
	{
		robnum++;
	}
	string Robot::getfunction_ids()
	{
		return function_ids;
	}
	float Robot::getprice()
	{
		return price;
	}
	bool Robot::isrented(string date)
	{
		for(i=0;i<3;i++)
			if(!date.compare(date))
			{
				return true;
			}
		return false;
	}
	bool Robot::isrentedever()
	{
		return rented;
	}
	string Robot::getdate()
	{
		return date;
	}
