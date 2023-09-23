#ifndef DATE_TIME_H
#define DATE_TIME_H

class date_time

{
	int dd;
	int mm;
	int yy;
	
	public:
		date_time();
		date_time(int,int,int);
		friend date_time operator+(date_time&,int);
		friend date_time operator-(date_time&,int);
		
		
		
		void display();
		
	protected:
};

#endif
