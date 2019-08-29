#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>

void main()
{
clrscr();
char a[3][3];
int p,l,m,check,i,j;
//------------
//------the below code is to eliminate the possiblity
//------of the compiler from assigning a junk value to
// ----- the unfilled cells in the array.

for(i=0;i<3;i++)
  { for(j=0;j<3;j++)
     { a[i][j]=' ';}
  }

point:
//---- the below code is to check if a player won the game ------

for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
  {
     if( a[0][0]&a[0][1]&a[0][2]=='o' || a[1][0]&a[1][1]&a[1][2]== 'o' ||a[2][0]&a[2][1]&a[2][2]== 'o' || a[0][0]&a[1][0]&a[2][0]== 'o' || a[0][1]&a[1][1]&a[2][1]== 'o' || a[0][2]&a[1][2]&a[2][2]== 'o' || a[0][0]&a[1][1]&a[2][0]== 'o'|| a[0][2]&a[1][1]&a[2][0]== 'o')
	       { cout<<" player 1 won";delay(1500); exit(0);   }

     if( a[0][0]&a[0][1]&a[0][2]=='x' || a[1][0]&a[1][1]&a[1][2]== 'x' ||a[2][0]&a[2][1]&a[2][2]== 'x' || a[0][0]&a[1][0]&a[2][0]== 'x' || a[0][1]&a[1][1]&a[2][1]== 'x' || a[0][2]&a[1][2]&a[2][2]== 'x' || a[0][0]&a[1][1]&a[2][0]== 'x'|| a[0][2]&a[1][1]&a[2][0]== 'x')
	      { cout<<"player 2 won"; delay(1500); exit(0);   }
  }
}


//---------------------------------



cout<<endl;
cout<<"enter player number ( 1 or 2) enter 3 to exit game ";
cin>>p;

switch(p)
{
  case 1:  label:
  cout<<endl;
	   cout<<"enter row number";
	   cin>>l;
	   cout<<"enter column number";
	   cin>>m;
   //------------------the below code is to check if a cell is occupied or not---

	   if(a[l][m]=='x'||a[l][m]=='o')
	    { cout<<"cell ocupied";
	      goto label;
	    }

	   else
	    {
	     cout<<"your value has been entered"<<endl;
	     a[l][m]='o';
	     cout<<endl;
	  //-----------------the below code is foor printing the array----

		for(i=0;i<3;i++)
		 { for(j=0;j<3;j++)
		    {
		      cout<<a[i][j];
		      cout<<"  ";
		    }
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
		goto label2;
	      }

	   else

	      { cout<<" your value has been entered"<<endl;
		a[l][m]='x';

	     
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

  // the below line is to break the loop if person enters 3
  case 3:break;

}
//----------------------

// the below code is to print the final tic tac toe played.
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



