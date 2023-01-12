#include<iostream>
using namespace std;

int main()
{
    int rem , i , evensum = 0 , oddsum = 0 ;
    cin>> i ;

 while(i>0){
 rem = i%10;
    if(rem%2==0)
    {
        evensum = evensum + rem;
    }
    else if(rem%2!=0)
    {
        oddsum = oddsum+rem;
    }}
i = i/10;
cout<<"evensum="<<evensum<<endl;
cout<<"oddsum="<<oddsum<<endl;
return 0 ;
}

