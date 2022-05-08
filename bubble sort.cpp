#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    const int n=5;
    int i,j, bubble[n]={1,3,10,1,2};
/*for(i=0;i<4;i++)
{
                if(bubble[i+1]>bubble[i])
                {
                                 int temp=bubble[i+1];
                                 bubble[i+i]=bubble[i];
                                 bubble[i]=temp;
                                         
                                         }
                                  //for(j=0;j<4;j++)
                                  //cout<<bubble[j]<<"\t";
   
                             }*/
   bool swip= true;                             
  while(1)
{
          swip=false;
          for( i =0;i<(n-1);i++)
          {
                     if(bubble[i]>bubble[i+1])
                         {
                             int    a=bubble[i];
                             bubble[i]=bubble[i+1];
                             bubble[i+1]=a;
                             swip=true;
                         }
                     for(j=0;j<n;j++)
                                  cout<<bubble[j]<<"\t";
                     cout<<endl; 
                                  }
               cout<<endl;
                                   
          if(!swip)
          break;
}                
/*for( i =0;i<4;i++)
{
  for( j=0;j<i;j++)
	{
	if(bubble[j]>bubble[j+1])
	     {
             int temp=bubble[j];
		  bubble[j]=bubble[j+1];
		  bubble[j+1]=temp;
	     }
	     /*for(int k=0;k<4;k++)
         cout<<bubble[k]<<"\t";
         cout<<endl;
         cout<<endl;
         
	}for(int y=0;y<4;y++)
     cout<<bubble[y]<<"\t";
     cout<<endl;
}*/
//cout<<endl;
                                 
    system("PAUSE");
    return EXIT_SUCCESS;
}
