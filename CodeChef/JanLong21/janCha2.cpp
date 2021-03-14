#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        for(int i=1; i<=(n/4); i++)
        {
            switch(str[(4*i)-4])
            {
                case '0' :
                   switch(str[(4*i)-3])
                   {
                       case '0' :
                         switch(str[(4*i)-2])
                         {
                             case '0' :
                               switch(str[(4*i)-1])
                               {
                                   case '0' :
                                     printf("a");
                                     break;
                                   case '1' :
                                     printf("b"); 
                                     break; 
                               }
                               break;
                             case '1' :
                              switch(str[(4*i)-1])
                              {
                                  case '0' :
                                    printf("c");
                                    break;
                                  case '1' :
                                    printf("d");
                                    break;  
                              } 
                              break; 
                         }
                         break;
                       case '1' :
                         switch(str[(4*i)-2])
                         {
                              case '0' :
                               switch(str[(4*i)-1])
                               {
                                   case '0' :
                                     printf("e");
                                     break;
                                   case '1' :
                                     printf("f");  
                                     break;
                               }
                               break;
                             case '1' :
                              switch(str[(4*i)-1])
                              {
                                  case '0' :
                                    printf("g");
                                    break;
                                  case '1' :
                                    printf("h"); 
                                    break; 
                              } 
                              break; 
                         } 
                         break;
                   }
                   break; 
                case '1' :
                   switch(str[(4*i)-3])
                   {
                       case '0' :
                          switch(str[(4*i)-2])
                          {
                               case '0' :
                               switch(str[(4*i)-1])
                               {
                                   case '0':
                                     printf("i");
                                     break;
                                   case '1' :
                                     printf("j");
                                     break;  
                               }
                               break;
                             case '1' :
                              switch(str[(4*i)-1])
                              {
                                  case '0' :
                                    printf("k");
                                    break;
                                  case '1' :
                                    printf("l"); 
                                    break; 
                              }
                              break;  
                          }
                          break;
                       case '1' :
                          switch(str[(4*i)-2])
                          {
                               case '0' :
                               switch(str[(4*i)-1])
                               {
                                   case '0' :
                                     printf("m");
                                     break;
                                   case '1' :
                                     printf("n"); 
                                     break; 
                               }
                               break;
                             case '1' :
                              switch(str[(4*i)-1])
                              {
                                  case '0' :
                                    printf("o");
                                    break;
                                  case '1' :
                                    printf("p");  
                                    break;
                              }
                              break;  
                          }
                          break;   
                   }  
                   break;  
            }
            continue;
        }
        cout << endl;
    }
    return 0;
}