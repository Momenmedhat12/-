#include "user.h"

	void User::setname(string n)
	{
		name=n;
	}
	void User::settnumber(string tn)
	{
		tnumber=tn;
	}		
	void User::setemail(string e)
	{
		email=e;
	}
	string User::getnam()
	{
		return name;
	}
	string User::gettnumber()
	{
		return tnumber;
	}
	string User::getemail()
	{
		return email;
	}
	void User::incusnum()
	{
		usnum++;
	}
	int User::getusnum()
	{
		return usnum;
	}
	string User::getrenrob()
	{
	//	static int f=0;
		return robname;//[f++];
	}
