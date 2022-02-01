#include <iostream>
#include <math.h>



class point{
     
     public:
     int x,y;

     void print()
     {
         std :: cout<<"("<<x<<","<<y<<")"; //prints in format (x,y)
     }
     
     int quad(); //prototype of member function quad()
     
};

int point::quad() //definition of member function quad of point outside of class point
{
     if(x>0 && y>0)
     return 1;
     else if(x<0 && y>0)
     return 2;
     else if (x<0 && y<0)
     return 3;
     else
     return 4;
}



class vector{
     public:
     point start;
     point end;
     
     void print(); 
     
     float mag();
     
     void quad()
     {
         std :: cout<<"Start point is in quadrant"<<start.quad()<< std :: endl;
         std :: cout<<"End point is in quadrant"<<end.quad()<< std ::endl; 
     }
     
};

float vector::mag()
{
     return sqrt(pow((start.x-end.x),2)+pow((start.y-end.y),2));
}


void vector:: print()
{
 start.print();
 //cout<<"("<<start.x<<","<<start.y<<")";
  std :: cout<<"===>";
 end.print();
  //cout<<"("<<end.x<<","<<end.y<<")";
}

int main()
{
    vector v1;
    v1.start.x=1;
    v1.start.y=2;
    v1.end.x=-3;
    v1.end.y=-4;
    v1.print();
    std :: cout<<"magnitude of the vector v1 is"<<v1.mag()<< std :: endl;
    v1.quad();
    
    
    

    return 0;
}
