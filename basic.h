#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>


//cypher function
QString cypher_text(QString input_text_to_cypher_it){
 QString input_text_to_cypher;
    for(int i = 0; i< input_text_to_cypher_it.length() ; i++){
            if(input_text_to_cypher_it[i] ==
                'a' || input_text_to_cypher_it[i] == 'A' ){

                 if(input_text_to_cypher_it[i] == 'A'){
                     input_text_to_cypher[i] = 'C';
                 }
                 else if (input_text_to_cypher_it[i]=='a') {
                     input_text_to_cypher[i] = 'c';
                 }
                 else{
                     //error
                     input_text_to_cypher[i] = 'e'+'+'+'-';
                 }
            }
            if(input_text_to_cypher_it[i] ==
                'b' || input_text_to_cypher_it[i] == 'B'){
                 input_text_to_cypher[i] = '+';
            }
            if(input_text_to_cypher_it[i] ==
                'c' || input_text_to_cypher_it[i] == 'C' ){

                if(input_text_to_cypher_it[i]=='C'){

                    input_text_to_cypher[i]= 'A';

                }else if(input_text_to_cypher_it[i]=='c'){
                 input_text_to_cypher[i] = 'a';
                }
                else{
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }
            }
            if(input_text_to_cypher_it[i] ==
                'd' || input_text_to_cypher_it[i] == 'D' ){
                if(input_text_to_cypher_it[i]=='D'){
                    input_text_to_cypher[i] = 'E';
                }
                else if(input_text_to_cypher_it[i]=='d'){
                 input_text_to_cypher[i] = 'e';
                }
                else{
                  //error
                  input_text_to_cypher[i] = 'e'+'+'+'-';
                }
            }
            if(input_text_to_cypher_it[i] ==
                'e' || input_text_to_cypher_it[i] == 'E'){
                if(input_text_to_cypher_it[i] == 'E'){
                    input_text_to_cypher[i] = 'D';
                }
                else if(input_text_to_cypher_it[i] == 'e'){
                    input_text_to_cypher[i] = 'd';
                }
                else{
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }

            }
            if(input_text_to_cypher_it[i] ==
                'f' || input_text_to_cypher_it[i] == 'F' ){
                if(input_text_to_cypher_it[i] == 'F'){
                    input_text_to_cypher[i] = 'G';
                }
                else if(input_text_to_cypher_it[i] == 'f'){
                    input_text_to_cypher[i] = 'g';
                }
                else{
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }
            }
            if(input_text_to_cypher_it[i] ==
                'g' || input_text_to_cypher_it[i] =='G' ){
                if(input_text_to_cypher_it[i] == 'G'){
                    input_text_to_cypher[i]='F';
                }
                else if(input_text_to_cypher_it[i] == 'g'){
                    input_text_to_cypher[i]='f';
                }
                else{
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }

            }
            if(input_text_to_cypher_it[i] ==
                'h' || input_text_to_cypher_it[i] == 'H' ){
                if (input_text_to_cypher_it[i]=='H'){
                    input_text_to_cypher[i] = 'J';
                 }
                else if(input_text_to_cypher_it[i]=='h'){
                    input_text_to_cypher[i]= 'j';
                }
                else {
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }

            }
            if(input_text_to_cypher_it[i] ==
                'i' || input_text_to_cypher_it[i] == 'I' ){
                if(input_text_to_cypher_it[i] == 'I'){
                    input_text_to_cypher[i] ='K';
                }
                else if(input_text_to_cypher_it[i] == 'i'){
                    input_text_to_cypher[i] = 'k';
                }
                else{
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }
            }
            if(input_text_to_cypher_it[i] ==
                'j'|| input_text_to_cypher_it[i] == 'J' ){
                if(input_text_to_cypher_it[i] == 'J'){
                    input_text_to_cypher[i] = 'H';
                }
                else if(input_text_to_cypher_it[i] == 'j'){
                    input_text_to_cypher[i] = 'h';
                }
                else{
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }

            }
            if(input_text_to_cypher_it[i] ==
                'k' || input_text_to_cypher_it[i] == 'K'){
                if(input_text_to_cypher_it[i] == 'K'){
                    input_text_to_cypher[i] ='I';
                }
                else if(input_text_to_cypher_it[i] == 'k'){
                    input_text_to_cypher[i] = 'i';
                }
                else{
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }

            }
            if(input_text_to_cypher_it[i] ==
                'l' || input_text_to_cypher_it[i] == 'L'){
                 if(input_text_to_cypher_it[i] == 'L'){
                     input_text_to_cypher[i] = 'M';
                 }
                 else if(input_text_to_cypher_it[i] == 'l'){
                     input_text_to_cypher[i] = 'm';
                 }
                 else{
                     //error
                     input_text_to_cypher[i] = 'e'+'+'+'-';
                 }
                 \
            }
            if(input_text_to_cypher_it[i] ==
                'm' || input_text_to_cypher_it[i] == 'M'  ){
                if(input_text_to_cypher_it[i] == 'M')
                {
                    input_text_to_cypher[i] = 'L';
                }
                else if(input_text_to_cypher_it[i] == 'm'){
                    input_text_to_cypher[i]='l';
                }
                else{
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }
            }
            if(input_text_to_cypher_it[i] ==
                'n' || input_text_to_cypher_it[i] == 'N'){
                if(input_text_to_cypher_it[i] == 'N'){
                    input_text_to_cypher[i]='P';
                }
                else if(input_text_to_cypher_it[i]=='n'){
                    input_text_to_cypher[i]='p';
                }
                else{
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }
            }
            if(input_text_to_cypher_it[i] ==
                'o' || input_text_to_cypher_it[i] == 'O' ){
                if(input_text_to_cypher_it[i]=='O'){
                    input_text_to_cypher[i] = 'N';
                }
                else if(input_text_to_cypher_it[i]== 'o'){
                    input_text_to_cypher[i] = 'n';
                }
                else{
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }
            }
            if(input_text_to_cypher_it[i] ==
                'p' || input_text_to_cypher_it[i] == 'P'){
                   if(input_text_to_cypher_it[i] == 'P'){
                       input_text_to_cypher[i] = 'O';
                   }
                   else if(input_text_to_cypher_it[i] == 'p'){
                       input_text_to_cypher[i] = 'o';
                   }
                   else{
                       //error
                       input_text_to_cypher[i] = 'e'+'+'+'-';
                   }

            }
            if(input_text_to_cypher_it[i] ==
                'q' || input_text_to_cypher_it[i] == 'Q'){
                if(input_text_to_cypher_it[i] == 'Q'){
                    input_text_to_cypher[i] = 'R';
                }
                else if(input_text_to_cypher_it[i] == 'q'){
                    input_text_to_cypher[i] = 'r';
                }
                else{
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }

            }
            if(input_text_to_cypher_it[i] ==
                'r' || input_text_to_cypher_it[i] == 'R'){
                if(input_text_to_cypher_it[i] == 'R'){
                    input_text_to_cypher[i] = 'Q';
                }
                else if(input_text_to_cypher_it[i] == 'r'){
                    input_text_to_cypher[i] = 'q';
                }
                else{
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }

            }
            if(input_text_to_cypher_it[i] ==
                's' || input_text_to_cypher_it[i] == 'S' ){
                if(input_text_to_cypher_it[i] == 'S'){
                    input_text_to_cypher[i] = '_';
                }
                else if(input_text_to_cypher_it[i] == 's'){
                    input_text_to_cypher[i] = 't';
                }
                else{
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }

            }
            if(input_text_to_cypher_it[i] ==
                't' || input_text_to_cypher_it[i] == 'T'|| input_text_to_cypher_it[i] == '_'){
                if(input_text_to_cypher_it[i]=='T'){
                    input_text_to_cypher[i] = 'S';
                }
                else if(input_text_to_cypher_it[i] == 't'){
                    input_text_to_cypher[i] = 's';
                }
                else if(input_text_to_cypher[i] == '_' ){
                    input_text_to_cypher[i] = 'S';
                }
                else{
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }

            }
            if(input_text_to_cypher_it[i] ==
                'u' || input_text_to_cypher_it[i] == 'U' ){
                if(input_text_to_cypher_it[i] =='U'){
                    input_text_to_cypher[i] = 'V';
                }
                else if(input_text_to_cypher_it[i] == 'u'){
                    input_text_to_cypher[i] = 'v';
                }
                else{
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }

            }
            if(input_text_to_cypher_it[i] ==
                'v' || input_text_to_cypher_it[i] == 'V' ){
                if(input_text_to_cypher_it[i] == 'V'){
                    input_text_to_cypher[i] = 'U';
                }
                else if(input_text_to_cypher_it[i] == 'v'){
                    input_text_to_cypher[i] = 'u';
                }
                else {
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }
            }
            if(input_text_to_cypher_it[i] ==
                'w' || input_text_to_cypher_it[i] == 'W' ){
                if(input_text_to_cypher_it[i] == 'W'){
                    input_text_to_cypher[i] = 'Y';
                }
                else if(input_text_to_cypher_it[i]== 'w'){
                    input_text_to_cypher[i] = 'y';
                }
                else{
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }

            }
            if(input_text_to_cypher_it[i] ==
                'x' || input_text_to_cypher_it[i]=='X' ){
                if(input_text_to_cypher_it[i] == 'X'){
                    input_text_to_cypher[i] = 'Z';
                }
                else if(input_text_to_cypher_it[i]=='x'){
                    input_text_to_cypher[i] = 'z';
                }
                else{
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }

            }
            if(input_text_to_cypher_it[i] ==
                'y' || input_text_to_cypher_it[i] == 'Y'  ){
                if(input_text_to_cypher_it[i] == 'Y'){
                    input_text_to_cypher[i] = 'W';
                }
                else if(input_text_to_cypher_it[i] == 'y'){
                    input_text_to_cypher[i] ='w';
                }
                else{
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }
            }
            if(input_text_to_cypher_it[i] ==
                'z' || input_text_to_cypher_it[i] == 'Z' ){
                if(input_text_to_cypher_it[i] == 'Z'){
                    input_text_to_cypher_it[i] = 'X';
                }
                else if(input_text_to_cypher_it[i] == 'z'){
                    input_text_to_cypher[i] = 'x';
                }
                else{
                    //error
                    input_text_to_cypher[i] = 'e'+'+'+'-';
                }
                 \
            }

    }
    return input_text_to_cypher;

}
//uncypher function

QString uncypher_text(QString input_text_to_uncypher_it){
    QString input_text_to_uncypher;
       for(int i = 0; i< input_text_to_uncypher_it.length() ; i++){
               if(input_text_to_uncypher_it[i] ==
                   'c' || input_text_to_uncypher_it[i] == 'C'){
                    if(input_text_to_uncypher_it[i] == 'C'){
                        input_text_to_uncypher = 'A';
                    }
                    else if (input_text_to_uncypher_it[i] == 'c'){
                        input_text_to_uncypher[i] = 'a';
                    }
                    else{
                        //error
                        input_text_to_uncypher[i] = 'e'+'+'+'-';
                    }

               }
               if(input_text_to_uncypher_it[i] ==
                   '+' ){
                  input_text_to_uncypher[i]='b';
               }
               if(input_text_to_uncypher_it[i] ==
                   'a' || input_text_to_uncypher_it[i] == 'A' ){
                   if(input_text_to_uncypher_it[i] == 'A'){
                       input_text_to_uncypher = 'C';
                   }
                   else if (input_text_to_uncypher_it[i] == 'a'){
                       input_text_to_uncypher[i] = 'c';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'e' || input_text_to_uncypher_it[i] == 'E' ){
                   if(input_text_to_uncypher_it[i] == 'E'){
                       input_text_to_uncypher = 'D';
                   }
                   else if (input_text_to_uncypher_it[i] == 'e'){
                       input_text_to_uncypher[i] = 'd';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'd' || input_text_to_uncypher_it[i] =='D' ){
                   if(input_text_to_uncypher_it[i] == 'D'){
                       input_text_to_uncypher = 'E';
                   }
                   else if (input_text_to_uncypher_it[i] == 'd'){
                       input_text_to_uncypher[i] = 'e';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'g' || input_text_to_uncypher_it[i] == 'G' ){
                   if(input_text_to_uncypher_it[i] == 'G'){
                       input_text_to_uncypher = 'F';
                   }
                   else if (input_text_to_uncypher_it[i] == 'g'){
                       input_text_to_uncypher[i] = 'f';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'f' || input_text_to_uncypher_it[i] == 'F'){
                   if(input_text_to_uncypher_it[i] == 'F'){
                       input_text_to_uncypher = 'G';
                   }
                   else if (input_text_to_uncypher_it[i] == 'f'){
                       input_text_to_uncypher[i] = 'g';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'j' || input_text_to_uncypher_it[i] == 'J'){
                   if(input_text_to_uncypher_it[i] == 'J'){
                       input_text_to_uncypher = 'H';
                   }
                   else if (input_text_to_uncypher_it[i] == 'j'){
                       input_text_to_uncypher[i] = 'h';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'k' || input_text_to_uncypher_it[i] == 'K' ){
                   if(input_text_to_uncypher_it[i] == 'K'){
                       input_text_to_uncypher = 'I';
                   }
                   else if (input_text_to_uncypher_it[i] == 'k'){
                       input_text_to_uncypher[i] = 'i';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'h' || input_text_to_uncypher_it[i] == 'H'){
                   if(input_text_to_uncypher_it[i] == 'H'){
                       input_text_to_uncypher = 'J';
                   }
                   else if (input_text_to_uncypher_it[i] == 'h'){
                       input_text_to_uncypher[i] = 'j';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'i'|| input_text_to_uncypher_it[i] == 'I' ){
                   if(input_text_to_uncypher_it[i] == 'I'){
                       input_text_to_uncypher = 'K';
                   }
                   else if (input_text_to_uncypher_it[i] == 'i'){
                       input_text_to_uncypher[i] = 'k';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'm' || input_text_to_uncypher_it[i] == 'M'){
                   if(input_text_to_uncypher_it[i] == 'M'){
                       input_text_to_uncypher = 'L';
                   }
                   else if (input_text_to_uncypher_it[i] == 'm'){
                       input_text_to_uncypher[i] = 'l';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'l' || input_text_to_uncypher_it[i] =='L'){
                   if(input_text_to_uncypher_it[i] == 'L'){
                       input_text_to_uncypher = 'M';
                   }
                   else if (input_text_to_uncypher_it[i] == 'l'){
                       input_text_to_uncypher[i] = 'm';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'p' || input_text_to_uncypher_it[i] == 'P'){
                   if(input_text_to_uncypher_it[i] == 'P'){
                       input_text_to_uncypher = 'N';
                   }
                   else if (input_text_to_uncypher_it[i] == 'p'){
                       input_text_to_uncypher[i] = 'n';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'n' || input_text_to_uncypher_it[i] =='N'){
                   if(input_text_to_uncypher_it[i] == 'N'){
                       input_text_to_uncypher = 'O';
                   }
                   else if (input_text_to_uncypher_it[i] == 'n'){
                       input_text_to_uncypher[i] = 'o';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'o' || input_text_to_uncypher_it[i] == 'O'){
                   if(input_text_to_uncypher_it[i] == 'O'){
                       input_text_to_uncypher = 'P';
                   }
                   else if (input_text_to_uncypher_it[i] == 'o'){
                       input_text_to_uncypher[i] = 'p';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'r' || input_text_to_uncypher_it[i] == 'R'){
                   if(input_text_to_uncypher_it[i] == 'R'){
                       input_text_to_uncypher = 'Q';
                   }
                   else if (input_text_to_uncypher_it[i] == 'r'){
                       input_text_to_uncypher[i] = 'q';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'q' || input_text_to_uncypher[i] == 'Q' ){
                   if(input_text_to_uncypher_it[i] == 'Q'){
                       input_text_to_uncypher = 'R';
                   }
                   else if (input_text_to_uncypher_it[i] == 'q'){
                       input_text_to_uncypher[i] = 'r';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   't' || input_text_to_uncypher_it[i] == 'T' ){
                   if(input_text_to_uncypher_it[i] == 'T'){
                       input_text_to_uncypher = 'S';
                   }
                   else if (input_text_to_uncypher_it[i] == 't'){
                       input_text_to_uncypher[i] = 's';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   's' || input_text_to_uncypher_it[i] =='S'){
                   if(input_text_to_uncypher_it[i] == 'S'){
                       input_text_to_uncypher = 'T';
                   }
                   else if (input_text_to_uncypher_it[i] == 's'){
                       input_text_to_uncypher[i] = 't';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'v' || input_text_to_uncypher_it[i] == 'V' ){
                   if(input_text_to_uncypher_it[i] == 'V'){
                       input_text_to_uncypher = 'U';
                   }
                   else if (input_text_to_uncypher_it[i] == 'v'){
                       input_text_to_uncypher[i] = 'u';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'u' || input_text_to_uncypher_it[i] == 'U' ){
                   if(input_text_to_uncypher_it[i] == 'U'){
                       input_text_to_uncypher = 'V';
                   }
                   else if (input_text_to_uncypher_it[i] == 'u'){
                       input_text_to_uncypher[i] = 'v';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'y' || input_text_to_uncypher_it[i] =='Y'){
                   if(input_text_to_uncypher_it[i] == 'Y'){
                       input_text_to_uncypher = 'W';
                   }
                   else if (input_text_to_uncypher_it[i] == 'y'){
                       input_text_to_uncypher[i] = 'w';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'z' || input_text_to_uncypher_it[i] == 'Z' ){
                   if(input_text_to_uncypher_it[i] == 'Z'){
                       input_text_to_uncypher = 'X';
                   }
                   else if (input_text_to_uncypher_it[i] == 'z'){
                       input_text_to_uncypher[i] = 'x';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'w' || input_text_to_uncypher_it[i] == 'W' ){
                   if(input_text_to_uncypher_it[i] == 'W'){
                       input_text_to_uncypher = 'Y';
                   }
                   else if (input_text_to_uncypher_it[i] == 'w'){
                       input_text_to_uncypher[i] = 'y';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
               if(input_text_to_uncypher_it[i] ==
                   'x' || input_text_to_uncypher_it[i] == 'X' ){
                   if(input_text_to_uncypher_it[i] == 'X'){
                       input_text_to_uncypher = 'Z';
                   }
                   else if (input_text_to_uncypher_it[i] == 'x'){
                       input_text_to_uncypher[i] = 'z';
                   }
                   else{
                       //error
                       input_text_to_uncypher[i] = 'e'+'+'+'-';
                   }

               }
       }
    return input_text_to_uncypher;
}
