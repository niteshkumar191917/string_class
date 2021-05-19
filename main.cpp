#include<iostream>
using namespace std;
class String
{
         public:
         string a,b,add_result;
        
         
         void get()
         {
            
             cout<<"input string 1  = ";
             getline(cin,a);
            cout<<endl<<"input string 2  = ";
             getline(cin,b);

         }
         
         void add_two_string()
         {
                  add_result = a + b ;
                  cout<<"addition of two string = "<< add_result <<endl;
                
         }
         
         void compare_two_string()
         {
               cout<<"comparing of string:"<<endl;
               if(a!=b){
                          if(a>b){
                                    cout<< a <<" is greater than "<< b<<endl;
                                 }
                                 else{
                                    cout<< b<<"  is greater than  "<<  a<<endl;
                                 }

                        }
             else{
               cout<<"both string are equal"<<endl;
             }

         }
         
         void display()
         {
                    cout<<"your string 1 is  "<<a<<endl;
                    cout<<"your string 2 is  "<<b<<endl;
         }

};
int main()
{
      String a;
      a.get();
      a.add_two_string();
      a.compare_two_string();
      a.display();
    
    return 0;

}