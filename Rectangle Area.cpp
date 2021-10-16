// https://www.hackerrank.com/challenges/rectangle-area/problem
// In this challenge, you are required to compute the area of a rectangle using classes.

class Rectangle
 {
    
     public:
      int w,h;
     
    void display()
    {
        cout<<w<<" "<<h<<endl;
    }

 };
 class RectangleArea:public Rectangle
 {
    public:
    void read_input()
    {
        cin>>w>>h;
    }
     void display()
     {
        cout<<w*h;
     }

 };
