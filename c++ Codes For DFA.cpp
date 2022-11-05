#include<iostream>
using namespace std;

//Code By Asim Mahmood a.k.a user8088 on Github
//Roll # Fa2020/BSCS/027

//Diagram 1 
int main()
{
	

	int size;
	int combination[size];
	
	cout<<"DIAGRAM 1 : Input a combination of 1s and 0s to see if the DFA accepts it or not: "<<endl;
	cout<<"First input the size of your combination --> ";
	cin>>size;
	cout<<"Now input your combination: ";
	for(int i=0;i<size;i++)
	{
		cin>>combination[i];
	}
	
	
		if(combination[size-1]==0)
		{
			cout<<"Combination not accepted"<<endl<<endl;
		}
		else
		{
			cout<<"Combination is accepted"<<endl<<endl;
		}

	

	int size2;
	int combination2[size2];
	
	cout<<"DIAGRAM 2 : Input a combination of 1s and 0s to see if the DFA accepts it or not: "<<endl;
	cout<<"First input the size of your combination --> ";
	cin>>size2;
	cout<<"Now input your combination: ";
	for(int i=0;i<size2;i++)
	{
		cin>>combination2[i];
	}

	
	
		if((combination2[0]==0 && combination2[1]==1) || (combination2[1]==0 && combination2[0]==1))
		{
			cout<<"Combination not accepted";
		}
		else
		{
			cout<<"Combination is accepted";
		}
		
	/*	
	int size3;
	char string[100];
	
	cout<<"DIAGRAM 3 : Input a string using L={a,b,c} to see if the DFA accepts it or not: "<<endl;
	cout<<"Now input your String: ";
	cin>>string;
	
	if((string[0]='a' && string[1]=='b') && string[2]=='\0')
	{
		cout<<"String accepted!";
	}
else if((string[0]='a' && string[1]=='b') && (string[2]=='b' && string[3]=='c'))
	{
			cout<<"String accepted!";
	}
	else
	{
			cout<<"String NOT accepted!";
	}

*/
	
	
	
		
		
    
}



/*
        char str[20];
    char S='0';
    int i;
    cout<<"ENTER  STRING"<<endl;
    cin>>str;
      for(i=0;i='\0';i++)
      {
          switch(S)
          {
              case '0': 
              if(str[i]=='0')
              { S=='3';
              break;}
              else if(str[i]=='1')
              { S=='1';
              break;}
               case '1': 
               if(str[i]=='1')
               { S=='2';
               break;}
               else if(str[i]=='0')
               {S='1';
                break;}
               case '2':
               if(str[i]=='1') 
               {S='2';
               break;}
               else if(str[i]=='0') 
               {S='2'; 
               break;}
              case '3': 
              if(str[i]=='1' ) 
              {S='3'; 
              break;}
               else if(str[i]=='0')
               {S='4';
              break;  }  
              case '4':
              if(str[i]=='1') 
              {S='4';
              break;}
              else if(str[i]=='0')
              { S='4';
               break;}
                          cout<<"hi";
          }
        
      }
    if(S='0' )
          {
              cout<<"STRING IS NOT ACCEPTED";
          }
     else if(S='1')
          {
              cout<<"STRING IS NOT ACCEPTED ";
          }
    else if(S='2')
    {
          cout<<"STRING IS ACCEPTED AND IS IN FINAL STATE !";
    }
     else if(S='4')
   {
          cout<<"STRING IS NOT ACCEPTED !";
   }
   else if(S='4')
   {
          cout<<"STRING IS ACCEPTED AND IS IN FINAL STATE !";
   }
   cout<<S;
  
}
*/

