#include<iostream>
using namespace std;

int main()
{
	int i=0;
	
	cout<<"use of while\n";
	while(i<=10)
	{
	cout<<i<<endl;
	i++;
	} 
	cout<<"==========================================="<<endl;
	cout<<"use of do while\n";
	int a=0;
	do
	{
		cout<<a<<endl;
        a++;
        
	}while (a<=10);
	
	cout<<"==========================================="<<endl;
	cout<<"use of for\n";
	for(i=0;i<=10;i++)
    {
     cout<<i<<endl;         	
    }
    
    cout<<"==========================================="<<endl;
     int x=0;
    switch(x)
    {
    	case 0:cout<<"switch is executed:"<<endl;
    			break;
    	case 1:cout<<"switch is executed:"<<endl;
    			break;
	}
	for(i=0;i<=10;i++)
    {
    	if (i==2)
    	{
    		cout<<" using continue statement we skip number";
    		continue;
		}
     cout<<i<<endl<<endl;         	
    }
    cout<<"==========================================="<<endl;
    
    // Decleration and initialization of 
    cout<<" 1D array ";
    int array[3]={1,2,3};
    for (int i=0;i<3;i++)
    {
    	cout<<array[i];
	}
	cout<<endl;
    int arr[3][3]={{1,1,1},{2,2,2},{3,3,3}};
     
    cout<<endl<<" 2D array "<<endl;
    for (int i=0;i<3;i++)
    {
    	for (int j=0;j<3;j++)
		{
			
    	cout<<arr[i][j];
		}
		cout<<endl;
	}
    
    
}
