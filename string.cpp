#include<iostream>
#include<string>
using namespace std;
int main()
{
    int f,i;
    string c;
    

    
   
    string a="HELLO";
    string b="WORLD";
   while(f!=4){
    cout<<"1.Concatenate\n2.Reverse\n3.Replace\n4.Exit\n";
    cout<<"Enter the choice\n"<<endl;
    cin>>f;
    switch(f)
    {
  //Concatenate String  
    case 1 :
         c= a+" "+b+"\n";
        cout<<c; 
        break;

  //Reverse String
        case 2 :
        for(i=c.size()-1;i>=0;i--)
         {
          cout<<c[i];
         }
         cout<<"\n";
         break;
  //Replace char in a string
        case 3:
         c[0]='P';
         cout<<c;
          break;
         case 4:return 0; 
        default: cout<<"Invalid choice";
          break;
   }
   }
    return 0;
}