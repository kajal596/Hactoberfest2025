#include<iostream.h>
#include<conio.h>
void main()
{
              int n,i;
              clrscr();
              cout<<"enter Number : "<<endl;
              cin>>n;
                    for(i=2;i<=n;i++)
                    {
                            if(n%i==0)
                            {
                                cout<<"it is not prime"<<endl;
                            break;
                         }
                    }
if(n==i)
{
    cout<<"it is a prime number"<<endl;
}
getch();
}
