#include<iostream>
using namespace std;
// Instance member functions class k andar k kisi bhi IMV ko access kr sakte h.
class complex{
   private:
       int a,b;
   public:     
/*IMF*/ void set_data(int x,int y)   // Set values mtlb privates Instance Members variables mai value assign kro.
    { a=x;
       b=y;
    }
      void show_data()  // show values means display values on the output screen.
      {
        cout<<"\na="<<a<<"\nb="<<b;
      }   
};
class time{
private:
  int hr,min,sec;
public: 
      void settime(int x,int y,int z)
      {
           hr=x;
           min=y;
           sec=z;
      }
      void showtime()
   {
      cout<<hr<<" hr "<<min<<" min "<<sec<<" sec ";
   }
};

class Date{
private:
   int d,m,y;
public:
   void set_date(int x,int a,int z)   /*IMF*/ 
 {
    d=x;
    m=a;
    y=z;   
 }
 char * getmonthname(){
   switch(m){
      case 1:          
           return "Jan";
        case 2 : 
            return "Feb";
    case 3 : 
             return "Mar";
       case 4 : 
            return "April";
    case 5 : 
            return "May";
     case 6 : 
            return "June";
     case 7 : 
            return "July";
     case 8 : 
            return "Aug";
     case 9 : 
            return "Sep";
   case 10 : 
            return "Oct";
     case 11 : 
            return "Nov";
     case  12 : 
            return "Dec";
   }
 }
 void showdate(int month=3)
 {   if(month==1)
     cout<<endl<<"d="<<d<<" m="<<m<<" y="<<y;  
else if(month==2)
     cout<<d<<"-"<<m<<"-"<<y;
else if(month==3)
     cout<<d<<"-"<<getmonthname()<<"-"<<y;
 }
 
};

class Circle{
private:
       int radius;   
public:
       void setradius(int r){
             radius=r;
          }
      int  getradius()
      {
         return radius;
      }
      float area()
      {
         return 3.14*radius*radius;
      }
      float circumference()
      {
          return 2*3.14*radius;     
      }
};

int main()
{  
   Date d1;
   d1.set_date(8,3,2023);
   d1.showdate();
   cout<<endl;
}