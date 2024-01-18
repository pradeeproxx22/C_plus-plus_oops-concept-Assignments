#include<iostream>
#include<string.h>
using namespace std;

class cuboid{
   private:
    int length,breadth,height;
  public:
    cuboid () {
       length=0;
       breadth=0;
        height=0;} 
    cuboid(int x,int y,int z)
    {
        length=x;
        breadth=y;
        height=z;
    }
       

   
};
 
class Customer{


    private: 
           int cut_id;
           char mobile[15];
           char name[20];
           char email[40];
  public:
    Customer()         //Non permiterize CONSTRUCTOR
    {
         cut_id=1;
      strcpy(mobile,"7726094479");
      strcpy(name,"krishna");
      strcpy(email,"krishna@vasu.gmail.com");

    } 
   
    Customer(int id,char m[],char n[],char mail[])               // PERIMETERIZE CONSTRUCTOR    permimeter =Take something values.
    {   
      cut_id=id;
      strcpy(mobile,m);
      strcpy(name,n);
      strcpy(email,mail);
    } 

    
};

class Time{
    private:
            int hr,sec,min;
    public:
              
      Time(int h,int m,int s)    //perimeterize contructor  kyonki contructor by default compiler k dwara bna diye jaate h (Always remember that)
            { hr=h;
               min=m;
               sec=s;}
};

class Book{
  private:
      int bookid;
      char title[20];
      float price;
  public:
       Book(int id,char ch[],float p)  //perimeterize function 
       {
          bookid=id;
          strcpy(title,ch);
          price=p;

       } 
       Book(){       // Non perimeterize function 
            bookid=1;
            strcpy(title,"The pacific");
            price=389.10;

       };
};


class Complex{
    private:
         int a,b;
    public:

      Complex()
    {
         a=2;
         b=4;
    }   
    Complex(int x,int y)
    {
         a=x;
         b=y;
    }   

    void show_data()
    {
       cout<<"\na="<<a<<"b="<<b;
    }  
};

int main()
{
     Complex c1[5]={Complex(1,2),Complex(3,4),Complex(5,6),Complex(7,8),Complex(9,10)};
    for(int i=0;i<5;i++)
    c1[i].show_data();
    cout<<endl;
    return 0;
  
}