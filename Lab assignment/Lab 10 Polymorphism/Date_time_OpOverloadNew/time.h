#ifndef TIME_H
#define TIME_H

class time
{
	int hh;
	int mm;
	int ss;
	public:
		time( );
		time(int,int,int);
		friend time operator+(time&,int);
		friend time operator-(time&,int);
		void display();
	protected:
};

#endif
