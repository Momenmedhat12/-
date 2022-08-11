#ifndef USER_H
#define USER_H

class User
{
	private:
		string name;
		string tnumber;
		string email;
		static int usnum; //static to inc every obj created to be belonged to the class not the obj
	public:
		string robname;
		void setname(string n);
		void settnumber(string tn);
		void setemail(string e);
		void incusnum();
		int getusnum();
		string getnam();
		string gettnumber();
		string getemail();
		string getrenrob();
};

#endif


