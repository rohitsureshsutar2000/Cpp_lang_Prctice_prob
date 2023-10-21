#include <iostream>
#define SIZE 10
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

class Student : private DOB
{
    int r_no;
    int t_marks;
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
    cout << "Enter Total Marks : ";
    cin >> this->t_marks;
    cout << endl;

}
void Student :: show()
{
    cout << "Roll No : " << this->r_no << endl;
    date.show();
    cout << "Total Marks : " << this->t_marks << endl;
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


