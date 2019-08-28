#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
clrscr();
char a[3][3];
int p,l,m,check,i,j;

point:
cout<<endl;
cout<<"enter player number";
cin>>p;
switch(p)
{
  case 1:  label:
  cout<<endl;
	   cout<<"enter row number";
	   cin>>l;
	   cout<<"enter column number";
	   cin>>m;

	   if(a[l][m]=='x'||a[l][m]=='o')
	  { cout<<"cell ocupied";
	    goto label;}

	   else
	   {
	     cout<<"your value has been entered"<<endl;
	     a[l][m]='o';
	     if( a[0][0]&&a[0][1]&&a[0][2]=='o' || a[1][0]&&a[1][1]&&a[1][2]== 'o' ||a[2][0]&&a[2][1]&&a[2][2]== 'o' || a[0][0]&&a[1][0]&&a[2][0]== 'o' || a[0][1]&&a[1][1]&&a[2][1]== 'o' || a[0][2]&&a[1][2]&&a[2][2]== 'o' || a[0][0]&&a[1][1]&&a[2][0]== 'o'|| a[0][2]&&a[1][1]&&a[2][0]== 'o')
	     { cout<<" you won";break;
	     }
	   //---
	   cout<<endl;
for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
    {
      cout<<a[i][j];
      cout<<"  "; }
 cout<<endl;
}

goto point;


	   }
    //-----------------------------------
  case 2: label2:
	  cout<<endl;
	  cout<<"enter row number";
	   cin>>l;
	   cout<<"enter column number";
	   cin>>m;

	   if(a[l][m]=='x'||a[l][m]=='o')
	  { cout<<"cell ocupied";
	    goto label2;}

	   else
	   { cout<<" your value has been entered"<<endl;
	     a[l][m]='x';
	     if( a[0][0]&&a[0][1]&&a[0][2]=='x' || a[1][0]&&a[1][1]&&a[1][2]== 'x' ||a[2][0]&&a[2][1]&&a[2][2]== 'x' || a[0][0]&&a[1][0]&&a[2][0]== 'x' || a[0][1]&&a[1][1]&&a[2][1]== 'x' || a[0][2]&&a[1][2]&&a[2][2]== 'x' || a[0][0]&&a[1][1]&&a[2][0]== 'x'|| a[0][2]&&a[1][1]&&a[2][0]== 'x')
	     {
	      cout<<"you won";break;
	     }
	   cout<<endl;
for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
    {
      cout<<a[i][j];
      cout<<"  "; }
 cout<<endl;
}
	   goto point;}


  case 3:break;
  }
//----------------------
cout<<endl;
for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
    {
      cout<<a[i][j];
      cout<<"  "; }
 cout<<endl;
}






getch();
}



