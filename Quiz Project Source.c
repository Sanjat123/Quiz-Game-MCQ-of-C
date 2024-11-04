#include<stdio.h>
 int main () {
    
    int i;
    int ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10;
    int point1, point2, point3,point4, point5,point6, point7, point8, point9,point10;
    int point01, point02, point03, point04, point05, point06, point07, point08, point09, point010;
    int total, attempted, correct, wrong;
    
    printf(" Welcome to our quiz\n\n");
    
    printf(" >Press 123 to Start the game\n ");
    printf(" >Press 0 to Exit the game\n");
    scanf("%d", &i);
    
    if(i==123)
    {
        printf(" The quiz has started\n\n");
        
    }
    
    else if(i==0)
     {
        printf(" The quiz has ended\n\n");
    }
    
    else {
        printf(" Invalid\n\n");
    }
    if(i==123)
        {
        printf("1) Which one is the first search engine in internet?\n");
        printf("a) Chatgtp\n");
         printf("b) Bing\n");
          printf("c) Google\n");
           printf("d) All of the avove\n");
          
           printf("  Enter Your Answer (1 for a, 2 for b, 3 for c, 4 for d): ");
            scanf("%d", &ans1);
           attempted++;
            if(ans1==3)
            {
                printf("  Correct Answer\n");
                point1= 5;
                correct++;
                printf("  You have score %d point\n", point01);
                
            }
            else {
                printf("  Wrong Answer\n");
                point01= 0;
                wrong++;
                printf("  You have score %d point\n", point01);
                
            }
   
        printf("2) Who is Father of C languge?\n");
        printf("a) James Gosling\n");
         printf("b) Bjarne Stroustrup\n");
          printf("c) Dennis Ritchie \n");
           printf("d) None of the avove\n");
        
         printf("  Enter Your Answer (1 for a, 2 for b, 3 for c, 4 for d): ");
            scanf("%d", &ans2);
            attempted++;
            if(ans2==3)
            {
                printf("  Correct Answer\n");
                point2= 5;
                correct++;
                printf("  You have score %d point\n", point02);
                
            }
            else {
                printf("  Wrong Answer\n");
                point02= 0;
                wrong++;
                printf("  You have score %d point\n", point02);
                
            }
    
        printf("3) when was established 'WHO'?\n");
        printf("a) 1854\n");
         printf("b) 1945\n");
          printf("c) 1902\n");
           printf("d) 1954\n");
         
          printf("  Enter Your Answer (1 for a, 2 for b, 3 for c, 4 for d): ");
            scanf("%d", &ans3);
           
            attempted++;
           
            if (ans3==4)
            {
                printf("  Correct Answer\n");
                point3= 5;
                
                correct++;
                
                printf("  You have score %d point\n", point03);
                
            }
            else {
                printf("  Wrong Answer\n");
                point03= 0;
                
                wrong++;
                
                printf("  You have score %d point\n", point03);
                
            }
  
        printf("4) when was established Chandigarh University?\n");
         printf("a) 2012\n");
         printf("b) 2006\n");
          printf("c) 2013\n");
           printf("d) None of the avove\n");
           
            printf(" Enter Your Answer (1 for a, 2 for b, 3 for c, 4 for d): ");
            scanf("%d", &ans4);
            
            attempted++;
            
            if (ans4==1)
            {
                printf("  Correct Answer\n");
                point4= 5;
                correct++;
                printf("  You have score %d point\n", point04);
                
            }
            else {
                printf("  Wrong Answer\n");
                point04= 0;
                
                wrong++;
                
                printf("  You have score %d point\n", point04);
                
            }

        printf("5) When was born 'Sir Ratan TaTA?\n");
        printf("a) 28 December 1937");
         printf("b) 28 December 1947\n");
          printf("c) 28/12/1937\n");
           printf("d) (a) and (C)\n");
         
          printf("  Enter Your Answer (1 for a, 2 for b, 3 for c, 4 for d): ");
            scanf("%d", &ans5);
            
            attempted++;
            
            if (ans5==4)
            {
                printf("  Correct Answer\n");
                point5= 5;
                
                correct++;
                
                printf("  You have score %d point\n", point05);
                
            }
            else {
                printf("  Wrong Answer\n");
                point05= 0;
                
                wrong++;
                
                printf("  You have score %d point\n", point05);
                
            }
    
        printf("6) What is full name of (HTML)?\n");
        printf("a) Hypertaxt Mrkup Language\n");
         printf("b) Hypartext Makup Languae \n");
          printf("c) Hypertext Markup Language\n");
           printf("d) All of the avove\n");
        
          printf("  Enter Your Answer (1 for a, 2 for b, 3 for c, 4 for d): ");
            scanf("%d", &ans6);
            
            attempted++;
            
            if (ans6==3)
            {
                printf("  Correct Answer\n");
                point6= 5;
                
                correct++;
                
                printf("  You have score %d point\n", point06);
                
            }
            else {
                printf("  Wrong Answer\n");
                point06= 0;
                
                wrong++;
                
                printf("  You have score %d point\n", point06);
                
            }
       printf("7) Which type of Language are 'C'?\n");
        printf("a) Low Lavel\n");
         printf("b) Middle Lavel\n");
          printf("c) High lavel\n");
           printf("d) All of the avove\n");
        
         printf("  Enter Your Answer (1 for a, 2 for b, 3 for c, 4 for d): ");
            scanf("%d", &ans7);
            
            attempted++;
            
            if (ans7==2)
            {
                printf("  Correct Answer\n");
                point7= 5;
                
                correct++;
                
                printf("  You have score %d point\n", point07);
                
            }
            else {
                printf("  Wrong Answer\n");
                point07= 0;
                wrong++;
                
                printf("  You have score %d point\n", point07);
                
            }
       printf("8) Which of the following declaration is not supported by C language?\n");
        printf("a) String str;\n");
         printf("b) char *str;\n");
          printf("c)  float str = 3e2;\n");
           printf("d)  Both (a) & (b)\n");
         
          printf("  Enter Your Answer (1 for a, 2 for b, 3 for c, 4 for d): ");
            scanf("%d", &ans8);
            
            attempted++;
            
            if (ans8==1)
            {
                printf("  Correct Answer\n");
                point8= 5;
                correct++;
                
                printf("  You have score %d point\n", point08);
                
            }
            else {
                printf("  Wrong Answer\n");
                point08= 0;
                wrong++;
                
                printf("  You have score %d point\n", point08);
                
            }
       printf("9) How many keyword in C programing language?\n");
        printf("a) 42\n");
         printf("b) 32\n");
          printf("c) 35\n");
           printf("d) None of these\n");
         
           printf("Enter Your Answer (1 for a, 2 for b, 3 for c, 4 for d): ");
            scanf("%d", &ans9);
            
            attempted++;
            
            if (ans9==2)
            {
                printf("  Correct Answer\n");
                point9= 5;
                correct++;
                
                printf("  You have score %d point\n", point09);
                
            }
            else {
                printf("  Wrong Answer\n");
                point09= 0;
                wrong++;
                
                printf("  You have score %d point\n", point09);
                
            }
    
        printf("10) What is #include <stdio.h> ?\n");
        printf("a) Preprocessor directive\n");
         printf("b) Inclusion directive\n");
          printf("c) Headerfile\n");
           printf("d) All of the avove\n");
          
            printf("  Enter Your Answer (1 for a, 2 for b, 3 for c, 4 for d): ");
            scanf("%d", &ans10);
              attempted++;
              
            if (ans10==1)
            {
                printf("  Correct Answer\n");
                point10= 5;
                correct++;
                
            }
            else {
                printf("  Wrong Answer\n");
                point010= 0;
                wrong++;
                
                printf("  You have score %d point\n", point010);
               
            }
             
            total = point1 + point2 + point3 + point4 + point5 + point6 + point7 + point8 + point9 + point10;
            printf("\n\n  Your total score is: %d\n", total);
             printf("  Your total %d correct answers\n", correct);
             printf("  Your total %d wrong answers\n", wrong);
             printf("\n  Your total score is: %d\n", total);
        }
    return 0;
    }  