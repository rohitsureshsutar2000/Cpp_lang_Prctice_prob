#include<iostream>
using namespace std;
void length(char*);
void compare(char*,char*);
void concate(char*,char*);
void copy(char*);
int main()
{
	char str1[20];
	cout<<"Enter the string:"<<endl;
	gets(str1);
	char str2[20];
	cout<<"Enter the string2:";
	gets(str2);
	length(str1);
	compare(str1,str2);
	concate(str1,str2);
	copy(str2);
	return 0;
}

// finding the length of string
void length(char*str1)
{
	int j=0;
	while(str1[j]!='\0')
	{
	j++;	
	}
	cout<<"Length of"<<str1<<"="<<j;
	
}
// Comparing the strings 
void compare(char* p,char* q)
{
	int dissimilar=0;
	int i=0;
	while(p [i]!= '\0')
	{
		if(p[i] != q[i])
		{
			dissimilar += 1;
		}
		i++;
	}
	
	if(dissimilar== 0)
	{
		cout<<"\nEqual";
	}
	else
	{
		cout<<"\nnot Equal";
	}
}
// concatenate the string
void concate(char*str1,char* str2)
	{
		int i=0;
		int j=0;
		while(str1[i]!='\0')
		{
			i++;
		}
		while(str2[j]!='\0')
		{
			str1[i]=str2[j];
			i++;
			j++;
		}
		cout<<"\nConcanated string is: "<<str1<<endl;
	}

void copy(char* str2){

	
	int i = 0;
	char str3[20];
      for (i = 0; str2[i]!='\0'; i++)
      {
        str3[i] = str2[i];
      }
    str3[i] = '\0';
    cout<<"string2 copied in string3 = "<<str3<<endl;
	
	
}
