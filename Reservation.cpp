#include <stdio.h>
#include <stdlib.h>


int main()
{
     // Dilosi metavliton
     int arrayplane[ 10 ][ 4 ] = {{0}, {0}};
     int i, j; // metrites
     int f1, f2, f3, fp, fd; // flags
     int skt; // sinolo kratimenon theseon
     int stp; // sinolo kratimenon theseon protis thesis
     int std; // sinolo kratimenon theseon deuteris thesis
     char option, option2; // epilogeis menu
     
     // Arxikopoiisi metavliton  
     option = 'a';
     option2 = 'a';
     skt = 0;
     stp = 0;
     std = 0;
     f2 = 0;
     f3 = 0;
     
     // Ektiposi menu
     printf("Parakalo pliktrologiste:\n");
     printf("E gia kratisi oikonomikis thesis\n");
     printf("F gia kratisi protis thesis\n");
     printf("Q gia eksodo apo to programa\n\n");
     
            
     while (option != 'q')
     {
           f1 = 0;
           scanf("%c", &option); 
           
           if ((option == 'Q') || (fd == 1 && fp == 1))
           {     
                 printf("\nStin proti thesi exoun kratithei ");
                 printf("%d", stp);
                 printf(" theseis.\n");
                 printf("Stin deuteri thesi exoun kratithei ");
                 printf("%d", std);
                 printf(" theseis.");
                 printf("\n\n Patiste q gia eksodo.\n");
                 scanf("%c", &option);
           }
                 
           if (option == 'E')
           {
              for (i = 5; i < 10; i++) // vres tin proti eleutheri
              {
                  for (j = 0; j < 4; j++)
                  {
                      if (arrayplane[i][j] == 0)
                      {
                         f1 = 1; // flag, energopoieite otan vrethei thesi
                         arrayplane[i][j] = 1; // kleinei i thesi ston pinaka
                         std = std + 1;
                         
                         printf("\n====================\n");
                         printf("\nKARTA EPIVIVASIS \n\n");
                         printf("%d", i + 1); // ektiposi seiras, metritis + 1 epeidi o metritis ksekina apo to 0 eno oi seires apo to 1
                         if (j == 0)
                         {
                            printf("A");
                         }
                         if (j == 1)
                         {
                            printf("B");
                         }
                         if (j == 2)
                         {
                            printf("C");
                         }
                         if (j == 3)
                         {
                            printf("D");
                         }
                         if (option == 'E')
                         {
                            printf(" - Oikonomiki\n");
                         }
                         if (option == 'F')
                         {
                           printf(" - Proti\n");
                         }
                         printf("\n====================\n\n");
                         
                         if (i == 9 && j==3) // an i thesi einai i 10 D, i teleutea oikonomiki
                         {
                               fd = 1; // flag, energopoiite otan kleisoun oles oi oikonomikes theseis
                         }
                         i = 10; // afou vrikame thesi teleionoume tis 2 for
                         j = 4;
                      }
                  }
              }
              
              while (f1 == 0) // afou den vrikame thesi
              {
                  if (f2 != 1){ 
                  printf("\n\nDen yparxei oikonomiki thesi eleutheri.\nThelete na kleisete proti thesi?\n");
                  printf("Y nai\n");
                  printf("N oxi\n\n");
                  }
                  scanf("%c", &option2);
                  f2 = 1;
                  if (option2 == 'N') 
                  {
                     printf("\n\nI epomeni ptisi einai se 4 ores.\n\n");
                     f1 = 1;
                     f2 = 0;
                  }
                  
                  if (option2 == 'Y')
                  {
                      option = 'F';
                      for (i = 0; i < 5; i++) // vres tin proti eleutheri
                      {
                          for (j = 0; j < 4; j++)
                          {
                              if (arrayplane[i][j] == 0)
                              {
                                 f1 = 1;
                                 f2 = 0; // flag, energopoieite otan vrethei thesi
                                 arrayplane[i][j] = 1; // kleinei i thesi ston pinaka
                                 stp = stp + 1;
                                 
                                 printf("\n====================\n");
                                 printf("\nKARTA EPIVIVASIS \n\n");
                                 printf("%d", i + 1); // ektiposi seiras, metritis + 1 epeidi o metritis ksekina apo to 0 eno oi seires apo to 1
                                 if (j == 0)
                                 {
                                    printf("A");
                                 }
                                 if (j == 1)
                                 {
                                    printf("B");
                                 }
                                 if (j == 2)
                                 {
                                    printf("C");
                                 }
                                 if (j == 3)
                                 {
                                    printf("D");
                                 }
                                 if (option == 'E')
                                 {
                                    printf(" - Oikonomiki\n");
                                 }
                                 if (option == 'F')
                                 {
                                   printf(" - Proti\n");
                                 }
                                 printf("\n====================\n\n");
                                 
                                 if (i == 4 && j==3) // an i thesi einai i 10 D, i teleutea oikonomiki
                                 {
                                       fp = 1; // flag, energopoiite otan kleisoun oles oi oikonomikes theseis
                                 }
                                 i = 10; // afou vrikame thesi teleionoume tis 2 for
                                 j = 4;
                              }
                          }
                      }
                  }
              }
            // Ektiposi menu
            printf("Parakalo pliktrologiste:\n");
            printf("E gia kratisi oikonomikis thesis\n");
            printf("F gia kratisi protis thesis\n");
            printf("Q gia eksodo apo to programa\n\n");
           }
           
           if (option == 'F')
           {
              for (i = 0; i < 5; i++) // vres tin proti eleutheri
              {
                  for (j = 0; j < 4; j++)
                  {
                      if (arrayplane[i][j] == 0)
                      {
                         f1 = 1;
                         f2 = 0; // flag, energopoieite otan vrethei thesi
                         arrayplane[i][j] = 1; // kleinei i thesi ston pinaka
                         stp = stp + 1;
                         
                         printf("\n====================\n");
                         printf("\nKARTA EPIVIVASIS \n\n");
                         printf("%d", i + 1); // ektiposi seiras, metritis + 1 epeidi o metritis ksekina apo to 0 eno oi seires apo to 1
                         if (j == 0)
                         {
                            printf("A");
                         }
                         if (j == 1)
                         {
                            printf("B");
                         }
                         if (j == 2)
                         {
                            printf("C");
                         }
                         if (j == 3)
                         {
                            printf("D");
                         }
                         if (option == 'E')
                         {
                            printf(" - Oikonomiki\n");
                         }
                         if (option == 'F')
                         {
                           printf(" - Proti\n");
                         }
                         printf("\n====================\n\n");
                         
                         if (i == 4 && j==3) // an i thesi einai i 10 D, i teleutea oikonomiki
                         {
                               fp = 1; // flag, energopoiite otan kleisoun oles oi oikonomikes theseis
                         }
                         i = 10; // afou vrikame thesi teleionoume tis 2 for
                         j = 4;
                      }
                  }
              }
              
              while (f1 == 0) // afou den vrikame thesi
              {
                  if (f2 != 1){ 
                  printf("\n\nDen yparxei proti thesi eleutheri.\nThelete na kleisete oikonomiki thesi?\n");
                  printf("Y nai\n");
                  printf("N oxi\n\n");
                  }
                  scanf("%c", &option2);
                  f2 = 1;
                  if (option2 == 'N') 
                  {
                     printf("\n\nI epomeni ptisi einai se 4 ores.\n\n");
                     f1 = 1;
                     f2 = 0;
                  }
                  
                  if (option2 == 'Y')
                  {
                      option = 'E';
                      for (i = 5; i < 10; i++) // vres tin proti eleutheri
                      {
                          for (j = 0; j < 4; j++)
                          {
                              if (arrayplane[i][j] == 0)
                              {
                                 f1 = 1; // flag, energopoieite otan vrethei thesi
                                 arrayplane[i][j] = 1; // kleinei i thesi ston pinaka
                                 std = std + 1;
                                 
                                 printf("\n====================\n");
                                 printf("\nKARTA EPIVIVASIS \n\n");
                                 printf("%d", i + 1); // ektiposi seiras, metritis + 1 epeidi o metritis ksekina apo to 0 eno oi seires apo to 1
                                 if (j == 0)
                                 {
                                    printf("A");
                                 }
                                 if (j == 1)
                                 {
                                    printf("B");
                                 }
                                 if (j == 2)
                                 {
                                    printf("C");
                                 }
                                 if (j == 3)
                                 {
                                    printf("D");
                                 }
                                 if (option == 'E')
                                 {
                                    printf(" - Oikonomiki\n");
                                 }
                                 if (option == 'F')
                                 {
                                   printf(" - Proti\n");
                                 }
                                 printf("\n====================\n\n");
                                 
                                 if (i == 9 && j==3) // an i thesi einai i 10 D, i teleutea oikonomiki
                                 {
                                       fd = 1; // flag, energopoiite otan kleisoun oles oi oikonomikes theseis
                                 }
                                 i = 10; // afou vrikame thesi teleionoume tis 2 for
                                 j = 4;
                              }
                          }
                      }
                  }
              }
            // Ektiposi menu
            printf("Parakalo pliktrologiste:\n");
            printf("E gia kratisi oikonomikis thesis\n");
            printf("F gia kratisi protis thesis\n");
            printf("Q gia eksodo apo to programa\n\n");
           }
     }
     return 0;
}
