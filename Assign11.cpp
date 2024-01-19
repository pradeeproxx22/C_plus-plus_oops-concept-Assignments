#include<iostream>
#include<string.h>
using namespace std;
// In this program  i am showing you how a destructor works.  
class Numbers {
 private:

 int *arr;
  int size;

 public:            // default constructor are created by compiler no argument empty body constructor.Otherwise we create destructor explicitly.
 Numbers(int s)    // copy Constructor  
 {  size=s;
    arr=new int(size);   //DYNAMICALLY MEMORY ALLOCATION OF AN ARRAY.  new is a keyword,which is used to create memory block dynamically.
 }
  ~Numbers()      // Destructor >Destructor works at the end when the object is about to destroy.
  {
     delete []arr;
  }
  Numbers( Numbers &x) //&x receive refernce  //  COPY CONSTRUCTOR  for Deep COPY  
{
     size=x.size;          // array *  ki size transfer 
     arr=new int(size);   // Nya array is arr
     for(int i=0;i<size;i++)   // array ka data copy hoga.
     arr[i]=x.arr[i];
}

};

class student {
  private:
         char name[20];
         char clas[10];
         int roll_nu;
  public:
       void  studentdata(){        // using CONSTRUCTOR NON perimeterize funtion
            cout<<"Enter Name:";
            cin>>name;
            cout<<endl<<"Enter class:";
            cin>>clas;
            cout<<endl<<"Enter rollnumber:";
            cin>>roll_nu;
            
        }  
        void display()     //Member function
        { cout<<"NAME:"<<name<<endl<<"CLASS"<<clas<<endl<<"ROllnum"<<roll_nu; }
             
    
};

class Date{        //Using initilaizers 
    private:
    int d,m,y;
    public:
             Date():d(1),m(01),y(2000)            // No argument wala initilaizer   Constrcutor  
            {} 
             Date(int d,int m,int y):d(d),m(m),y(y)    // Argument wala initilaizer  CONSTRUCTOR
             {}   
        void display(){
            cout<<d<<"-"<<m<<"-"<<y;
        }                    //  Using Initialisers 
};

class Room
{
    private:
    int room_num;
    int room_type;
    bool is_ac;    // bool is a keyword which is used to return true and false value 
    double price;
    public:

    Room(int r,int rt, bool ac, double p)
    {
        room_num=r;
        room_type=rt;
        is_ac=ac;
        price=p;
    }
};

class circle
{
  private:
     int radius;
  public:
    circle (){ radius=45;}     //NON perimeterize constructor
    circle(int r){radius=r;}   //perimeterize constructor   
 };


int main()
{
     student a1;
     a1.studentdata();
     a1.display();
     cout<<endl;
     return 0;
}

