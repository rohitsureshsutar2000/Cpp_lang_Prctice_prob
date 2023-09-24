#include<iostream>
using namespace std;
class Point
{
	public :
		int x,y;
	public :
		Point();
		Point(int, int);
		void show();
};
Point :: Point()
{
	this->x = 0;
	this->y = 0;
}
Point :: Point(int x, int y)
{
	this->x = x;
	this->y = y;
}
void Point :: show()
{
	cout << "(" << x <<"," << y << ")" << endl;
}

class Shape
{
	int thick;
	public :
		Shape(int);
		void show();
		void area();
};
Shape :: Shape(int t)
{
	thick = t;
}
void Shape :: show()
{
	cout << "Thickness : " << this->thick << endl;
}




class Line : public Point, public Shape
{
	Point start, end;
	public :
		Line(int t, Point start, Point end) : Shape(t)
		{
			this->start = start;
			this->end = end;
		}
		void show();
};
void Line :: show()
{
	cout << "Start Point : ";
	start.show();
	cout << "End Point : ";
	end.show();
	Shape :: show();
}

 
class Rectangle : public Shape
{
	int l,b;
	public :
	Rectangle(int t, int l,int b) : Shape(t)
	{
		this->l=l;
		this->b=b;	
	}	
	void show()
	{
		cout << "Length : " << l << endl;
		cout << "Breadth : " << b << endl;
		Shape :: show();
	}
	int area()
	{
		return l*b;
	}	
};
class Circle : public Shape, public Point
{
	Point center;
	int radius;
	public :
		Circle(int t, int radius, Point centre) : Shape(t)
		{
			this->center = centre;
			this->radius = radius;
		}
		float area()
		{
			return 3.142*radius*radius;
		}
		void show()
		{
			cout << "Centre : ";
			center.show();
			cout << "Radius : " << radius << endl;
		}
};
class Square : public Shape
{
	int side;
	public:
	Square(int t, int side) : Shape(t)
	{
		this->side=side;
	
	}
	
	int area()
	{
		return side*side;
	}
	
    void show()
    {
    	cout << "Side : " <<side<< endl;
    	Shape :: show();
    	
	}
};

class Ellipse : public Shape , public Point
{
	Point e_centre;
	int l,h;
	public :
		Ellipse(int t , int l, int h, Point e_centre) : Shape(t)
		{
			this->l=l;
			this->h=h;	
			this->e_centre=e_centre;
		}	
		void show()
		{
			cout << "Length : " << l << endl;
			cout << "Breadth : " << h << endl;
			cout << "Centre : ";
			e_centre.show();
			Shape :: show();
		}
		float area()
		{
			return 3.14*l*h;
		}	
	
};

int main()
{ 
	int choice;	
	do{
		cout << endl;
		cout<< "0. Exit ." << endl;
		cout<< "1. Line ." << endl;
		cout<< "2. Rectangle ." << endl;
		cout<< "3. Circle ." << endl;
		cout<< "4. Square ." << endl;
		cout<< "5. Ellipse ." << endl;
	    cout<< "Enter your choice " <<endl;	
	   
	    cin>>choice;
	    
	    switch (choice)
	    {
	    	case 0 :
	    		exit(0);
	    	
			case 1 :
				{
					cout <<"Line : " << endl;
					Point start(0,0);
					Point end(0,15);
					Line l1(5, start, end);
					l1.show();
				}
				break;
				
			case 2 :
				{
					cout << endl << "Rectangle : "<< endl;
					Rectangle r1(2,7,8);
					r1.show();
					cout << "Area Of Rectangle : " <<r1.area() << endl;
				}
				break;
				
			case 3 :
				{
					cout << endl << "Circle : "<< endl;
					Point center(23, 45);
					Circle c1(2, 4, center);
					c1.show();
					cout << "Area Of Circle : " <<c1.area() <<endl;
				}
				break;
				
			case 4:
				{
					cout << endl << "Square : "<< endl;
					Square s1(2,10);
					s1.show();
					cout << "Area Of Square : " <<s1.area()<< endl;
				}
				break;
				
			case 5:
				{
					cout << endl << "Ellipse : "<< endl;
					Point e_center(41, 25);
					Ellipse e1(2, 10, 6, e_center);
					e1.show();
					cout << "Area Of Ellipse : " <<e1.area() <<endl;
				}
				break;
				
			default :
				cout << endl <<"Invalid Choice !!!" << endl;
		}
	}
	while(choice !=0);
	return 0;
}
