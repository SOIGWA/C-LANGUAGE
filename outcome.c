/*A program  to read outcome and display
meaning as per the table shared using if..else if..else*/
  #include<stdio.h>
  main()
  {
      char outcome;
      printf("Enter outcome=");
      scanf("%c",&outcome);
      if((outcome=='M')||(outcome=='m'))
        printf("Exceed Expectations");
      else if((outcome=='M')||(outcome=='m'))
        printf("Meet Expectations");
      else if((outcome=='A')||(outcome=='a'))
        printf("Approaching Expectations");
        else if((outcome=='B')||(outcome='b'))
        printf("Below Expectations");
      else
        printf("Enter a valid outcome");
  }
