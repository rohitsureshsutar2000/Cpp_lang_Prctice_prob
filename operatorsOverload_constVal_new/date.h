#ifndef DATE_H
#define DATE_H

class date
{
	int dd;
	int mm;
	int yy;
	public:
		date();
		date(int,int,int);
		friend date operator+(date&,int);
		friend date operator-(date&,int);
		void display();
		
	protected:
};

#endif
