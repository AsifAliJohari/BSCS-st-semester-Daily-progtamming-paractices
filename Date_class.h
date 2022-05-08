#include <cstdlib>
#include <iostream>

using namespace std;
class Date
{
      public:
             string m_Nam;
             int day,month,year;
                 Date()
                 {
                       //m_Nam="";
                       day=0;
                       month=0;
                       year=0; 
                       }
                 Date(int m,int d,int y)
                 {
                 
                      // m_Nam=m_n;
                       day=d;
                       month=m;
                       year=y;
                             } 
                             void DateSet(int d,string m,int y );
                             void Set_Data(int d ,int m ,int y );
                             void print(void);
                             void print_Date(void);
                             };
                             
                 void Date::DateSet(int d,string m,int y )
                 {
                 if(day==32 || year==0)
                 cout<<"plz enter valid Date"<<endl;
                 else
                      {
                             m_Nam=m;
                             day=d;
                             year=y;
                       }
                 }
                 void Date::Set_Data(int d ,int m ,int y )            
                       {
                        if(day==32 || month==13 || year==0)
                        cout<<"plz enter valid Date"<<endl;
                       else           
                       {
                                      day=d;
                                      month=m;
                                      year=y;
                       }
                       }
                  void Date :: print(void)
                      {
                           cout<<"Date : "<<day<<"/"<<month<<"/"<<year<<endl;
                           cout<<"Date : "<<month<<"/"<<day<<"/"<<year<<endl;
                           cout<<"Date : "<<year<<"/"<<month<<"/"<<year<<endl;
                           cout<<"Date : "<<day<<"-"<<month<<"-"<<year<<endl;
                           
                      }
                 void Date::print_Date(void)   
                        {
                             cout<<"Date : "<<day<<","<<m_Nam<<","<<year<<endl;
                             
                        }         
             
