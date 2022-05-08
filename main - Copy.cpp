#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;

int rollDice(void)
{ 
    
    return (1+rand()%6);
}
void  uesrFunction(int dice, int *start, int *pos)
{
     if (*start==0)
     {
                   if (dice==6)
                               *start=1; 
                     
     }
     else
     {
         *pos+=dice;
                                                    
          switch(*pos)
          {
                      case 8:                                                   //if (*pos==8)
                            *pos=31;
                             break;
                      case 15:                                                    //if (*pos==15)
                             *pos=97;
                              break;
                      case 24:                                                    // if (*pos==24)
                             *pos=1;
                              break;
                      case 42:                                                    // if (*pos==42)
                             *pos=81;
                              break;
                      case 55:                                                    //if (*pos==55)   
                             *pos=13;
                              break;
                      case 66:                                                    //if (*pos==66)
                             *pos=87;
                              break; 
                      case 71:                                                    //if (*pos==71)
                             *pos=29;
                              break;
                      case 88:                                                    //if (*pos==88)
                             *pos=67;
                              break;
                      case 99:                                                    //if (*pos==99)
                             *pos=6;
                              break;
                      case 100:                                                    //if (*pos>=100)
                              cout<<"win "<<endl;
                              break;           
          }                                                
                                                                 
     }              
                             
}
int main(int argc, char *argv[])
{ 
    int arr[100];
    int u1Pos=0, u2Pos=0;
    int x=0, y=0;
    int u1Sart=0,u2Start=0;
    int dice=0;
    int i=0;
    int u=1;
    int key=0;
    while (1)
    {
             cout<<"==================USER "<<u<<endl;
             key=getch();
             if (key==0)
                         key=getch();
             if (key==27)
                         break;
             srand(time(0));  
             dice=0;   
             if (key==100)
             {
                         dice=rollDice();
                         cout<<"dice"<<dice<<endl;
                       
                     
             }  
             if (dice==0)
                         continue;
             switch(u)
             {
             
                         case 1: 
                                 uesrFunction(dice, &u1Sart, &u1Pos);
                                 cout<<"position 1 "<<u1Pos<<endl;
                                 if(dice==6)
                                 { 
                                            u=1;
                                            if(dice==6)
                                            {
                                                       u=1; 
                                                       if(dice==6)
                                                       {
                                                                  dice=0; 
                                                                  u=1;
                                                       }
                                                       dice=0;
                                            }
                                 }            
                                 else
                                            u=2;
                                 break;
                              
                         case 2:
                                 uesrFunction(dice, &u2Start, &u2Pos);
                                 cout<<"position 2 "<<u2Pos<<endl;
                                 if(dice==6)
                                 { 
                                            u=2;
                                            if(dice==6)
                                            {
                                                       u=2;   
                                                       if(dice==6)
                                                       {
                                                                   dice=0; 
                                                                   u=2;
                                                       }
                                            }
                                 }            
                                 else
                                            u=1;
                                 break;
             }
             if((u1Pos>=100) || (u2Pos>=100))
             { 
                        char ch;
                        cout<<"are you want to play again ? y/n : ";
                        cin>>ch;
                        if (ch=='y')
                        { 
                                    u1Sart=0,u2Start=0;
                                    u1Pos=0,u2Pos=0;
                                    dice=0;
                        }
                        if (ch=='n')  
                                    break;
             }
    }
     //system("PAUSE");
    return EXIT_SUCCESS;
}
