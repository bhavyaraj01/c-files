#include <iostream>
using namespace std;
 

class employee{
    public:
    int id;
    string name;
    float salary;

    employee(int userid,string username){
         salary=5000;
         id=userid;
         name=username;


         cout<<"Id:"<<id<<"\nname:"<< name <<"\nsalary:"<<salary<<endl;

        
    }

};
int main()
{
  employee E1(24,"bhavyaraj");



    return 0;
}