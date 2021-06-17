//
//  main.cpp
//  xo
//
//  Created by Kinga Żmuda on 17/06/2021.
//  Copyright © 2021 Kinga Żmuda. All rights reserved.
//

#include <iostream>
#include <stdlib.h>

using namespace std;

int punkty_plansza[3][3];
char plansza[3][3]; //wyswietlana plansza



char ruch_kolko;

char ruch_krzyzyk;

void kolko()
{
    int suma1 = punkty_plansza[0][0] + punkty_plansza[0][1] + punkty_plansza[0][2];
    int suma2 = punkty_plansza[1][0] + punkty_plansza[1][1] + punkty_plansza[1][2];
    int suma3 = punkty_plansza[2][0] + punkty_plansza[2][1] + punkty_plansza[2][2];
    int suma4 = punkty_plansza[0][0] + punkty_plansza[1][0] + punkty_plansza[2][0];
    int suma5 = punkty_plansza[0][1] + punkty_plansza[1][1] + punkty_plansza[2][1];
    int suma6 = punkty_plansza[0][2] + punkty_plansza[1][2] + punkty_plansza[2][2];
    int suma7 = punkty_plansza[0][0] + punkty_plansza[1][1] + punkty_plansza[2][2];
    int suma8 = punkty_plansza[0][2] + punkty_plansza[1][1] + punkty_plansza[2][0];
    
    if(suma1==15||suma2==15||suma3==15||suma4==15||suma5==15||suma6==15||suma7==15){
         cout<<"KONIEC GRY, WYGRYWA GRACZ KRZYZYK"<<endl;
        exit(1);
     }
     else if(suma1==3||suma2==3||suma3==3||suma4==3||suma5==3||suma6==3||suma7==3||suma8==3){
         cout<<"KONIEC GRY, WYGRYWA GRACZ KOLKO"<<endl;
         exit(1);
         
     }
     else if(punkty_plansza[0][0]==0 || punkty_plansza[0][1]==0 || punkty_plansza[0][2]==0 || punkty_plansza[1][0]==0 || punkty_plansza[1][1]==0 || punkty_plansza[1][2]==0 || punkty_plansza[2][0]==0 || punkty_plansza[2][1]==0 || punkty_plansza[2][2]==0)
     {
     cout<<"Wolne pola są oznaczone małymi literami alfabetu a-g, zajęte O lub X"<<endl;
     cout<<"TERAZ RUCH: O"<<endl<<"Podaj numer wolnego pola, w które chcesz wpisać kółko: ";
     cin>>ruch_kolko;
         
         if(ruch_kolko=='A'||ruch_kolko=='a')
         {
             punkty_plansza[0][0]=1;
             plansza[0][0]='O';
             
            
         }
         else if(ruch_kolko=='B'||ruch_kolko=='b')
         {
             punkty_plansza[0][1]=1;
             plansza[0][1]='O';
            
         }
         else if(ruch_kolko=='C'||ruch_kolko=='c')
         {
             punkty_plansza[0][2]=1;
             plansza[0][2]='O';
            
         }
         else if(ruch_kolko=='D'||ruch_kolko=='d')
         {
             punkty_plansza[1][0]=1;
             plansza[1][0]='O';
            
         }
         else if(ruch_kolko=='E'||ruch_kolko=='e')
         {
             punkty_plansza[1][1]=1;
             plansza[1][1]='O';
            
         }
         else if(ruch_kolko=='F'||ruch_kolko=='f')
         {
             punkty_plansza[1][2]=1;
             plansza[1][2]='O';
             
         }
         else if(ruch_kolko=='G'||ruch_kolko=='g')
         {
             punkty_plansza[2][0]=1;
             plansza[2][0]='O';
             
         }
         else if(ruch_kolko=='H'||ruch_kolko=='h')
         {
             punkty_plansza[2][1]=1;
             plansza[2][1]='O';
             
         }
         else if(ruch_kolko=='I'||ruch_kolko=='i')
         {
             punkty_plansza[2][2]=1;
             plansza[2][2]='O';
             
         }
         
     
     
     }
     
     else
     {
         cout<<"REMIS"<<endl;
     }
    
    
};

void krzyzyk()
{
    int suma1 = punkty_plansza[0][0] + punkty_plansza[0][1] + punkty_plansza[0][2];
    int suma2 = punkty_plansza[1][0] + punkty_plansza[1][1] + punkty_plansza[1][2];
    int suma3 = punkty_plansza[2][0] + punkty_plansza[2][1] + punkty_plansza[2][2];
    int suma4 = punkty_plansza[0][0] + punkty_plansza[1][0] + punkty_plansza[2][0];
    int suma5 = punkty_plansza[0][1] + punkty_plansza[1][1] + punkty_plansza[2][1];
    int suma6 = punkty_plansza[0][2] + punkty_plansza[1][2] + punkty_plansza[2][2];
    int suma7 = punkty_plansza[0][0] + punkty_plansza[1][1] + punkty_plansza[2][2];
    int suma8 = punkty_plansza[0][2] + punkty_plansza[1][1] + punkty_plansza[2][0];
    
    if(suma1==15||suma2==15||suma3==15||suma4==15||suma5==15||suma6==15||suma7==15){
           cout<<"KONIEC GRY, WYGRYWA GRACZ KRZYZYK"<<endl;
        exit(1);
       
       }
    else if(suma1==3||suma2==3||suma3==3||suma4==3||suma5==3||suma6==3||suma7==3){
           cout<<"KONIEC GRY, WYGRYWA GRACZ KOLKO"<<endl;
        exit(1);
        
       }
    else if(punkty_plansza[0][0]==0 || punkty_plansza[0][1]==0 || punkty_plansza[0][2]==0 || punkty_plansza[1][0]==0 || punkty_plansza[1][1]==0 || punkty_plansza[1][2]==0 || punkty_plansza[2][0]==0 || punkty_plansza[2][1]==0 || punkty_plansza[2][2]==0)
       {
           
          
           
       cout<<"Wolne pola są oznaczone małymi literami alfabetu a-g, zajęte O lub X"<<endl;
       cout<<"TERAZ RUCH: X"<<endl<<"Podaj numer wolnego pola, w które chcesz wpisać kółko: ";
       cin>>ruch_krzyzyk;
       
       if(ruch_krzyzyk=='A'||ruch_krzyzyk=='a')
       {
           punkty_plansza[0][0]=5;
           plansza[0][0]='X';
       }
       else if(ruch_krzyzyk=='B'||ruch_krzyzyk=='b')
       {
           punkty_plansza[0][1]=5;
           plansza[0][1]='X';
       }
       else if(ruch_krzyzyk=='C'||ruch_krzyzyk=='c')
       {
           punkty_plansza[0][2]=5;
           plansza[0][2]='X';
       }
       else if(ruch_krzyzyk=='D'||ruch_krzyzyk=='d')
       {
           punkty_plansza[1][0]=5;
           plansza[1][0]='X';
       }
       else if(ruch_krzyzyk=='E'||ruch_krzyzyk=='e')
       {
           punkty_plansza[1][1]=5;
           plansza[1][1]='X';
       }
       else if(ruch_krzyzyk=='F'||ruch_krzyzyk=='f')
       {
           punkty_plansza[1][2]=5;
           plansza[1][2]='X';
       }
       else if(ruch_krzyzyk=='G'||ruch_krzyzyk=='g')
       {
           punkty_plansza[2][0]=5;
           plansza[2][0]='X';
       }
       else if(ruch_krzyzyk=='H'||ruch_krzyzyk=='h')
       {
           punkty_plansza[2][1]=5;
           plansza[2][1]='X';
       }
       else if(ruch_krzyzyk=='I'||ruch_krzyzyk=='i')
       {
           punkty_plansza[2][2]=5;
           plansza[2][2]='X';
       }
           
       
       }
    else
       {
           cout<<"REMIS"<<endl;
       }
      
    
};

//x = 5
//o = 1
//puste pole = 0

//x wygrywa gdy ktoras suma = 15
//o wygrywa gdy ktoras suma = 3
//remis nastepuje gdy zadne z pol punkty_plansza nie ma wartosci 0 i zadna z sum nie = 15 lub 3
//gra toczy sie gdy istnieje jakies pole w punkty_plasza o wartosci 0
//gra konczy sie gdy zadne z pol punkty_plansza nie ma wartosci 0

void gra()
{
    
    for(int i=0; i<3; i++) //zerowanie planszy (punktów planszy) na początek gry
    {
        punkty_plansza[0][i]=0;
        punkty_plansza[1][i]=0;
        punkty_plansza[2][i]=0;
    }
    
    
    //graj kiedy są zerowe (puste) pola, w ktore mozna wstawic x lub o
   // while(punkty_plansza[0][0]==0 || punkty_plansza[0][1]==0 || punkty_plansza[0][2]==0 || punkty_plansza[1][0]==0 || punkty_plansza[1][1]==0 || punkty_plansza[1][2]==0 || punkty_plansza[2][0]==0 || punkty_plansza[2][1]==0 || punkty_plansza[2][2]==0)
    
      
    plansza[0][0]='a';
    plansza[0][1]='b';
    plansza[0][2]='c';
    plansza[1][0]='d';
    plansza[1][1]='e';
    plansza[1][2]='f';
    plansza[2][0]='g';
    plansza[2][1]='h';
    plansza[2][2]='i';
    
   
    
   // cout<<" A | B | C "<<endl;
   // cout<<"---|---|---"<<endl;
   // cout<<" D | E | F "<<endl;
   // cout<<"---|---|---"<<endl;
   // cout<<" G | H | I "<<endl;
    
    
    
    while(punkty_plansza[0][0]==0 || punkty_plansza[0][1]==0 || punkty_plansza[0][2]==0 || punkty_plansza[1][0]==0 || punkty_plansza[1][1]==0 || punkty_plansza[1][2]==0 || punkty_plansza[2][0]==0 || punkty_plansza[2][1]==0 || punkty_plansza[2][2]==0)
    {
        
        for(int j=0; j<2; j++)
         {
             cout<<" "<<plansza[j][0]<<" | ";
             cout<<plansza[j][1]<<" | ";
             cout<<plansza[j][2]<<endl;
             cout<<"---|---|---"<<endl;
         } cout<<" "<<plansza[2][0]<<" | ";
                cout<<plansza[2][1]<<" | ";
                cout<<plansza[2][2]<<endl;
        
    
    kolko();
        
        cout<<" "<<endl;
                       cout<<"AKTUALIZACJA PLANSZY"<<endl;
        for(int k=0; k<2; k++)
                {
                    cout<<" "<<plansza[k][0]<<" | ";
                    cout<<plansza[k][1]<<" | ";
                    cout<<plansza[k][2]<<endl;
                    cout<<"---|---|---"<<endl;
                } cout<<" "<<plansza[2][0]<<" | ";
                       cout<<plansza[2][1]<<" | ";
                       cout<<plansza[2][2]<<endl;
       
                    
    krzyzyk();
       
        
        
        
    }
   
    
};

    

int main() {
    
    
    gra();
    
    return 0;
}
