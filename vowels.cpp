#include<iostream>
//#include<string>
using namespace std;

int main()
{
    string str;
    string temp="a";
    int count=0;
    cout<<"enter string";
    cin>>str;
		
    for(int i=0;i<str.length()/2;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            for(int j=str.length();j>=i;j--)
            {
                    if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u' || str[j]=='A' || str[j]=='E' || str[j]=='I' || str[j]=='O' || str[j]=='U')
                    {
                        swap(str[i],str[j]);
                        break;
                    }
            }
        }
    }

    cout<<str;

    return 0;
}
