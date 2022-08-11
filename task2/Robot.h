#ifndef ROBOT_H
#define ROBOT_H
class Robot
{
	private:
		string function_ids;
		float price;
		bool rented;
		static int robnum;
		string name;
	public:
		string date;
		int getrobnum();
		void setname(string n);
		void incrobnum();
		void setfunction_ids(string id);
		void setprice(float p);
		void setstatues(bool r);
		string getname();
		string getfunction_ids();
		float getprice();
		bool isrented(string date);
		bool isrentedever();
		string getdate();
		Robot();
};
#endif
