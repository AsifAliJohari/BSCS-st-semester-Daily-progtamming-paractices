#include <cstdlib>
 #include <iostream>
#include <string>
using namespace std;
string menue[5]={"1.     Add new Employ","2.     Search Employ by id ","3.     list","4.     Delete","5.      Exit"};
string opt[2][5]={ {"1.     Name","2.     Employ ID","3.     Department","4.     Grade","5.     Exit"} , {"1.     ID","2.     Exit"} };
int emp_no=0;
struct employ
{ 
  string name;
  int emp_id;
  float salery;
  string dept;
  string garde;
};
struct employ add_new_employ(void )
       {
               struct employ employs;
               int i;
               cout<<"Enter Name"<<endl;
               cin>> employs. name;
               cout<<"Enter id"<<endl;
               cin>> employs. emp_id;
               /*cout<<"Enter Depertment"<<endl;
               cin>> employs. dept;
               cout<<"Grade"<<endl;
               cin>> employs. garde;*/
               return employs;

       }
 void list(struct employ *employs, int n)
{ 
      cout<<"Name:\t Id:"<<endl;
      for(int i=0;i<n;i++)
      {
      
       cout<<employs[i].name <<"\t "<<employs[i].emp_id<<"\n "<<endl;
       }
} 
string search_employ(int id)
       {struct employ employs[emp_no];
             for(int i=0;i<100;i++) 
                 {   
                          
                         if(employs[emp_no].emp_id==id)
                         return employs[emp_no].name;
                          
                 }           
       }    
void del(struct employ *employs,int id)
       {  
                for(int i=0;i<emp_no;i++)
                {   int flage=0;
                        if(employs[i].emp_id==id || flage==1) 
                          {
                                       employs[i]=employs[i+1];
                                       flage=1;
                                       }                     
                }
       }  
void funcOpt(int op2, int opno)
{             
            while (op2!=5)
            {          
                       system("CLS");
              
                       if(opno==1)
                               {
                                   for (int i=0;i<5;i++)
                                   cout<<opt[0][i]<<endl;
                                   
                               }
                       if(opno==2)
                               {
                                   for(int i=0;i<2;i++)
                                   cout<<opt[1][i]<<endl;
                                }
         
                       cin >>op2;
             }
 }
 
int main(int argc, char *argv[])
{        struct employ employs[100];
         
         int opt1=0;
         while (opt1!=5)
               {
                         system("CLS");
                         for(int i=0;i<5;i++)
                         cout<<menue[i]<<endl;
                         cin>>opt1;
                         int opt2=0;
                         if (opt1==1)
                         {
                                     employs[emp_no]=add_new_employ();
                                     emp_no++;
                                                                        
                         }
                                   
                         if (opt1==2)
                         {        
                                     int id;
                                     cout<<"Enter id"<<endl;
                                     cin>>id;                                                                                                
                                     cout<< search_employ(id)<<endl;
                                     emp_no++;
                                     system("PAUSE");
                         }
                         if (opt1==3)
                          {
                                     
                                     list(employs, emp_no);
                                     system("PAUSE");
                          } 
                          if (opt1==4)
                          {   
                                      int id;
                                      cout<<"Enter id"<<endl;
                                      cin>>id;                                                                                                
                                      del(employs,id);
                                      emp_no--;
                                      system("PAUSE");
                                    
                          }
             
              }
    return EXIT_SUCCESS;
}