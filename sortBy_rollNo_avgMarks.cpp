#include <iostream>
#define SIZE 3
using namespace std;
class DOB
{
    public : int dd, mm, yy;
    public : 
        void set();
        void show();
};
void DOB :: set()
{
    cout << "Enter Date of Birth (DD/MM/YY) : " <<endl;
    cin >> this->dd >> this->mm >> this->yy;
}
void DOB :: show()
{
    cout << "Date of Birth : " << this->dd <<"/"<< this->mm <<"/"<< this->yy <<endl;
}
class marks
{
    public : int m1, m2, m3,m4,m5;
    double avg;
    public : 
        void set();
        void show();
};
void marks :: set()
{
    cout << "Enter 5 subj marks : " <<endl;
    cin >> this->m1 >> this->m2>> this->m3>>this->m4>>this->m5;
    this->avg=(m1+m2+m3+m4+m5)/5;
}
void marks :: show()
{
    cout << "Avg :"<<this->avg<<endl;
}

class Student : private DOB,private marks
{
    int r_no;
    marks t_marks;
    DOB date;
    public :
        void set();
        void show();
        friend void sort_by_roll (Student*, int);
        
};

void Student :: set()
{
    cout << "Enter Roll No : ";
    cin >> this->r_no;
    date.set();
    
    t_marks.set();
    cout << endl;

}
void Student :: show()
{
    cout << "Roll No : " << this->r_no << endl;
    date.show();
    t_marks.show();
}

int main()
{
    Student s_arr[SIZE];
    for(int i=0; i<SIZE; i++)
    {
        cout << "Enter " << i+1 << "th Student Details : "<<endl;
        s_arr[i].set();
    }

    cout << "Sort By Roll No. " <<endl;
    sort_by_roll(s_arr, SIZE);
    for(int i=0; i<SIZE; i++)
    {
        cout << i+1 << "th Student Details : "<<endl;
        s_arr[i].show();
        cout <<endl;
    }
    return 0;
}

void sort_by_roll(Student* temp, int size)
{
	for(int i=0; i<size; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(temp[i].r_no > temp[j].r_no)
			{
				Student temp_var = temp[i];
				temp[i] = temp[j];
				temp[j] = temp_var;
			}
		}
	}
}


