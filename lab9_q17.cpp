#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter string 1"<<endl;
    cin>>str;
    
    cout<<endl;
    
//strcpy function
    char str2[20];
    strcpy(str2,str);
    cout<<"Output of strcpy function"<<endl;
    cout<<str2<<endl;
    cout<<endl;
    
//strlen function
    cout<<"Use of strlen function"<<endl;
    cout<<"Lenght of str:"<<strlen(str)<<endl;
    cout<<"Lenght of str2:"<<strlen(str2)<<endl;
    cout<<endl;
    
//strcmp function
    char str3[20];
    cout<<"Enter string 3"<<endl;
    cin>>str3;
    cout<<endl;
    
    cout<<"Use of strcmp function"<<endl;
    int result=strcmp(str,str3);//Compares the lengthof two strings
    if(result==0)
    cout<<"Strings are same or identical"<<endl;
    else if(result>0)
    cout<<"The ascii value of the character of str after 1st mismatch is more than that of str3"<<endl;
    else
    cout<<"The ascii value of the character of str after 1st mismatch is less than that of str3"<<endl;
    cout<<endl;
    
//strcat function
    cout<<"Output of strcat function"<<endl;
    strcat(str,str3);//Concatenating str with str3
    cout<<str<<endl;
    cout<<endl;
    
//strchr function
    cout<<"Use of strchr function"<<endl;
    char str1[20];
    cout<<"Enter string"<<endl;
    cin>>str1;
    cout<<endl;
    
    char c;
    cout<<"Enter the character you want to find in the string"<<endl;
    cin>>c;
    
    cout<<endl;
    
    char* ch = strchr(str1, c); 
    if(ch!=NULL)
    {
        cout<<"Character is present in the string"<<endl;
        while (ch!=NULL)
        {
            cout<<"found at:"<<(ch-str1+1)<<endl;
            ch=strchr(ch+1,c);
        }
    }
    else
    {
        cout<<"Character is absent in the string"<<endl;
    }
    
    cout<<endl;
    
//strstr function
    cout<<"Use of strstr function"<<endl;
    char str4[20];
    cout<<"Enter str4"<<endl;
    cin>>str4;
    
    cout<<endl;
    
    cout<<"Str4="<<str4<<endl;
    
    cout<<endl;
    
    char str5[20];
    cout<<"Enter str5"<<endl;
    cin>>str5;
    
    cout<<endl;
    
    cout<<"Str5="<<str5<<endl;
    
    cout<<endl;
    
    char* p=strstr(str4,str5);//Check the first occurance of str4 in str3
    if(p)
    {
        strcpy(p,str5);
        cout<<"Str5 is present in str4"<<endl;
    }
    else
    cout<<"Str5 is not present in str4"<<endl;
    cout<<str4<<endl;
    return 0;
}
